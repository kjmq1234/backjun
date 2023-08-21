#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int	data;
	struct Node* next;
} Node;

typedef struct
{
	int		count;
	Node* front;
	Node* rear;
	int		size;
} CircularQueue;

void init_Queue(CircularQueue* q, int size)
{
	q->rear = q->front = NULL;
	q->count = 0;
	q->size = size;
}

int is_full(CircularQueue* q)
{
	return (q->count == q->size);
}

int is_empty(CircularQueue* q)
{
	return (q->count == 0);
}

int push(CircularQueue* q, int data)
{
	if (is_full(q))
	{
		return (0);
	}
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	if (is_empty(q))
	{
		q->front = newNode;
		q->rear = newNode;
	}
	else
	{
		q->rear->next = newNode;
		q->rear = newNode;
		q->rear->next = q->front;
	}
	q->count++;
	return (1);
}

int pop(CircularQueue* q)
{
	Node* ptr;
	int	return_data;
	if (is_empty(q))
	{
		return (-1);
	}
	else
	{
		return_data = q->front->data;
		ptr = q->front;
		q->front = q->front->next;
		q->count--;
	}
	free(ptr);
	return return_data;
}

int	main(void)
{
	int	n, k;
	int	data;
	CircularQueue queue;

	scanf("%d %d", &n, &k);
	init_Queue(&queue, n); 
	for (int i = 1; i <= n; i++)
		push(&queue, i);
	printf("<");
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < k; j++)
		{
			push(&queue, pop(&queue));
		}
		printf("%d, ", pop(&queue));
	}
	printf("%d>", pop(&queue));
}
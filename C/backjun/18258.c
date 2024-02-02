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
	}
	q->count++;
	return (1);
}

int pop(CircularQueue* q)
{
	int	return_data;
	if (is_empty(q))
	{
		return (-1);
	}
	else
	{
		return_data = q->front->data;
		q->front = q->front->next;
		q->count--;
	}
	return return_data;
}

int	main(void)
{
	int	n;
	int	num;
	char sig[6];
	CircularQueue queue;

	scanf("%d", &n);
	init_Queue(&queue, n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", sig);
		if (!strcmp(sig, "push"))
		{
			scanf("%d", &num);
			push(&queue, num);
		}
		else if (!strcmp(sig, "pop"))
		{
			printf("%d\n", pop(&queue));
		}
		else if (!strcmp(sig, "size"))
		{
			printf("%d\n", queue.count);
		}
		else if (!strcmp(sig, "empty"))
		{
			printf("%d\n", is_empty(&queue));
		}
		else if (!strcmp(sig, "front"))
		{
			if (!is_empty(&queue))
				printf("%d\n", queue.front->data);
			else
				printf("-1\n");
		}
		else if (!strcmp(sig, "back"))
		{
			if (!is_empty(&queue))
				printf("%d\n", queue.rear->data);
			else
				printf("-1\n");
		}
	}
}
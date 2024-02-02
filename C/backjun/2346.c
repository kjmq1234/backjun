#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int	data;
	struct Node* next;
	struct Node* prev;
	int idx;
} Node;

typedef struct
{
	int		count;
	Node* front;
	Node* rear;
	int		size;
} Deque;

void init_Queue(Deque * q, int size)
{
	q->rear = q->front = NULL;
	q->count = 0;
	q->size = size;
}

int is_full(Deque * q)
{
	return (q->count == q->size);
}

int is_empty(Deque * q)
{
	return (q->count == 0);
}

int push_rear(Deque * q, int data, int index)
{
	if (is_full(q))
	{
		return (0);
	}
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->idx = index;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (is_empty(q))
	{
		q->front = newNode;
		q->rear = newNode;
	}
	else
	{
		q->rear->next = newNode;
		newNode->prev = q->rear;
		q->rear = newNode;
		q->rear->next = NULL;
	}
	q->count++;
	return (1);
}

int push_front(Deque * q, int data, int index)
{
	if (is_full(q))
	{
		return (0);
	}
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->idx = index;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (is_empty(q))
	{
		q->front = newNode;
		q->rear = newNode;
	}
	else
	{
		q->front->prev = newNode;
		newNode->next = q->front;
		q->front = newNode;
		q->front->prev = NULL;
	}
	q->count++;
	return (1);
}

int pop_front(Deque * q)
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

int pop_rear(Deque * q)
{
	Node* ptr;
	int	return_data;
	if (is_empty(q))
	{
		return (-1);
	}
	else
	{
		return_data = q->rear->data;
		ptr = q->rear;
		q->rear = q->rear->prev;
		q->count--;
	}
	free(ptr);
	return return_data;
}

int	main(void)
{
	int	n;
	int	tmp_idx;
	int	temp;
	Deque dq;

	scanf("%d", &n);
	init_Queue(&dq, n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		push_front(&dq, temp, i + 1);
	}
	printf("%d ", dq.rear->idx);
	temp = pop_rear(&dq);
	for (int i = 0; i < n - 1; i++)
	{
		if (temp > 0)
		{
			
			for (int j = 0; j < temp - 1; j++)
			{
				tmp_idx = dq.rear->idx;
				push_front(&dq, pop_rear(&dq), tmp_idx);
			}
			printf("%d ", dq.rear->idx);
			temp = pop_rear(&dq);
		}
		else
		{
			temp *= -1;
			for (int j = 0; j < temp - 1; j++)
			{
				tmp_idx = dq.front->idx;
				push_rear(&dq, pop_front(&dq), tmp_idx);
			}
			printf("%d ", dq.front->idx);
			temp = pop_front(&dq);
		}
	}
}
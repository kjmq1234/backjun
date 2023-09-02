#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int	data;
	struct Node* next;
	struct Node* prev;
} Node;

typedef struct
{
	int		count;
	Node* front;
	Node* rear;
	int		size;
} Deque;

void init_Queue(Deque* q, int size)
{
	q->rear = q->front = NULL;
	q->count = 0;
	q->size = size;
}

int is_full(Deque* q)
{
	return (q->count == q->size);
}

int is_empty(Deque* q)
{
	return (q->count == 0);
}

int push_rear(Deque* q, int data)
{
	if (is_full(q))
	{
		return (0);
	}
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
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

int push_front(Deque* q, int data)
{
	if (is_full(q))
	{
		return (0);
	}
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
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

int pop_front(Deque* q)
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

int pop_rear(Deque* q)
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
	char sig[11];
	int	num;
	Deque queue;

	scanf("%d", &n);
	init_Queue(&queue, n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &sig);
		if (!strcmp(sig, "push_front"))
		{
			scanf("%d", &num);
			push_front(&queue, num);
		}
		else if (!strcmp(sig, "push_back"))
		{
			scanf("%d", &num);
			push_rear(&queue, num);
		}
		else if (!strcmp(sig, "pop_front"))
		{
			printf("%d\n", pop_front(&queue));
		}
		else if (!strcmp(sig, "pop_back"))
		{
			printf("%d\n", pop_rear(&queue));
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
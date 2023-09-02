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
	int		size;
} Stack;

void init_stack(Stack* s, int size)
{
	s->front = NULL;
	s->count = 0;
	s->size = size;
}

int is_full(Stack* s)
{
	return (s->count == s->size);
}

int is_empty(Stack* s)
{
	return (s->count == 0);
}

void push(Stack* s, int data)
{
	Node* newNode;

	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;

	if (is_empty(s))
	{
		s->front = newNode;
	}
	else
	{
		newNode->next = s->front;
		s->front = newNode;
	}
	s->count++;
}

int	pop(Stack* s)
{
	Node* ptr;
	int	return_data;

	if (is_empty(s))
	{
		return (-1);
	}
	else
	{
		ptr = s->front;
		return_data = s->front->data;
		s->front = s->front->next;
		s->count--;
		free(ptr);
		return (return_data);
	}
}

int	main(void)
{
	int	n;
	int	num;
	char sig[6];
	Stack stack;
	
	scanf("%d", &n);
	init_stack(&stack, n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &sig);
		if (strcmp(sig, "push") == 0)
		{
			scanf("%d", &num);
			push(&stack, num);
		}
		else if (strcmp(sig, "pop") == 0)
		{
			printf("%d\n", pop(&stack));
		}
		else if (strcmp(sig, "size") == 0)
		{
			printf("%d\n", stack.count);
		}
		else if (strcmp(sig, "empty") == 0)
		{
				printf("%d\n", is_empty(&stack));
		}
		else if (strcmp(sig, "top") == 0)
		{
			if (is_empty(&stack))
				printf("%d\n", -1);
			else
				printf("%d\n", stack.front->data);
		}
	}
}
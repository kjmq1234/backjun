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
	char str[100001];
	int	len;
	int	i = 0;
	Stack stack;

	scanf("%[^\n]", str);
	len = strlen(str);
	init_stack(&stack, len);
	while (str[i] != '\0')
	{
		if (str[i] == '<')
		{
			while (str[i] != '>')
			{
				printf("%c", str[i]);
				i++;
			}
			printf(">");
			i++;
		}
		else
		{
			while (str[i] != '<' &&  str[i] != ' ' && str[i])
			{
				push(&stack, str[i]);
				i++;
			}
			while (stack.count != 0)
			{
				printf("%c", pop(&stack));
			}
			if (str[i] == '\0')
				break;
			if (str[i] != '<')
			{
				printf(" ");
				i++;
			}
		}
	}
}
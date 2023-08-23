//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	char	data;
//	struct Node* next;
//} Node;
//
//typedef struct
//{
//	int		count;
//	Node* front;
//	int		size;
//} Stack;
//
//void init_Stack(Stack* s, int size)
//{
//	s->front = NULL;
//	s->count = 0;
//	s->size = size;
//}
//
//int is_full(Stack* s)
//{
//	return (s->count == s->size);
//}
//
//int is_empty(Stack* s)
//{
//	return (s->count == 0);
//}
//
//void push(Stack* s, char data)
//{
//	Node* newNode;
//
//	newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = data;
//	if (is_empty(s))
//	{
//		newNode->next = NULL;
//		s->front = newNode;
//	}
//	else
//	{
//		newNode->next = s->front;
//		s->front = newNode;
//	}
//	s->count++;
//}
//
//char	pop(Stack* s)
//{
//	Node* ptr;
//	char	return_data;
//
//	if (is_empty(s))
//	{
//		return (-1);
//	}
//	else
//	{
//		ptr = s->front;
//		return_data = s->front->data;
//		s->front = s->front->next;
//	}
//	free(ptr);
//	s->count--;
//	return (return_data);
//}
//
//int	main(void)
//{
//	char str[100001];
//	int	len;
//	Stack stack;
//
//	scanf("%s", str);
//	len = strlen(str);
//	init_Stack(&stack, len);
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] == '<')
//		{
//			while (str[i] != '>')
//				i++;
//		}
//		else
//		{
//			while (str[i] != ' ')
//			{
//				push(&stack, str[i]);
//				i++;
//			}
//			while (stack.count != 0)
//			{
//				printf("%c", pop(&stack));
//			}
//			printf(" ");
//		}
//
//	}
//}
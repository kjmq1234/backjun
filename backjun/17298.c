//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	int	data;
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
//void init_stack(Stack* s, int size)
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
//void push(Stack* s, int data)
//{
//	Node* newNode;
//
//	newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = data;
//	newNode->next = NULL;
//
//	if (is_empty(s))
//	{
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
//int	pop(Stack* s)
//{
//	Node* ptr;
//	int	return_data;
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
//		s->count--;
//		free(ptr);
//		return (return_data);
//	}
//}
//
//int	main(void)
//{
//	int	n;
//	int* arr;
//	int* real;
//	int	current = 1000001;
//	Stack stack;
//
//	scanf("%d", &n);
//	arr = (int*)malloc(sizeof(int) * n);
//	real = (int*)malloc(sizeof(int) * n);
//	init_stack(&stack, n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		real[i] = -1;
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (current >= arr[i])
//		{
//			push(&stack, arr[i]);
//			current = stack.front->data;
//		}
//		else
//		{
//			while (current < arr[i] && stack.count != 0)
//			{
//				pop(&stack);
//				
//				real[i] = current;
//			}
//			push(&stack, arr[i]);
//			current = stack.front->data;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (real[i])
//			printf("%d ", real[i]);
//		else
//			printf("-1 ");
//	}
//}
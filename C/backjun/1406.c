//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct
//{
//	int	data;
//	struct Node* next;
//	struct Node* prev;
//} Node;
//
//typedef struct
//{
//	int		count;
//	Node* front;
//	Node* rear;
//	Node* current;
//	int	current_idx;
//	int		size;
//} Deque;
//
//void init_Deque(Deque* q, int size)
//{
//	Node* head;
//	head = (Node*)malloc(sizeof(Node));
//	q->rear = q->current = NULL;
//	q->front = head;
//	q->count = 0;
//	q->size = size;
//	q->current_idx = 0;
//}
//
//int is_first(Deque* q)
//{
//	return (q->current == q->front);
//}
//
//int is_end(Deque* q)
//{
//	return (q->current == q->rear);
//}
//
//
//int is_full(Deque* q)
//{
//	return (q->count == q->size);
//}
//
//int is_empty(Deque* q)
//{
//	return (q->count == 0);
//}
//
//int	move_left(Deque* q)
//{
//	if (is_first(q))
//		return (0);
//	else
//	{
//		q->current = q->current->prev;
//	}
//	return (1);
//}
//
//int	move_right(Deque* q)
//{
//	if (is_end(q))
//		return (0);
//	else
//	{
//		q->current = q->current->next;
//	}
//	return (1);
//}
//
//int push(Deque* q, int data)
//{
//	if (is_full(q))
//	{
//		return (0);
//	}
//	Node* newNode;
//	newNode = (Node*)malloc(sizeof(Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	newNode->prev = NULL;
//	if (is_empty(q))
//	{
//		q->front->next = newNode;
//		newNode->prev = q->front;
//		q->rear = newNode;
//		q->current = newNode;
//	}
//	else
//	{
//		newNode->next = q->current->next;
//		q->current->next = newNode;
//		newNode->prev = q->current;
//		q->current = newNode;
//	}
//	q->count++;
//	return (1);
//}
//
//int pop(Deque* q) {
//	if (is_empty(q) || is_first(q)) {
//		return -1; // Return an error value
//	}
//
//	Node* ptr = q->current;
//	Node* ptr2;
//	int return_data = ptr->data;
//	q->current = q->current->prev;
//	q->current->next = ptr->next;
//	ptr2 = ptr->next;
//	ptr2->prev = q->current;
//
//	q->count--;
////	free(ptr);
//	return return_data;
//}
//
//int	main(void)
//{
//	char str[100001];
//	char sig;
//	char temp;
//	Deque deque;
//	int	n = 0;
//	int	count;
//	Node* ptr;
//
//	init_Deque(&deque, 600001);
//	scanf("%s", str);
//	getchar();
//	while (str[n] != '\0')
//	{
//		push(&deque, str[n++]);
//	}
//	
//	scanf("%d", &n);
//	getchar();
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%c", &sig);
//		getchar();
//		if (sig == 'L')
//			move_left(&deque);
//		else if (sig == 'D')
//			move_right(&deque);
//		else if (sig == 'B')
//			pop(&deque);
//		else if (sig == 'P')
//		{
//			scanf("%c", &temp);
//			push(&deque, temp);
//			getchar();
//		}
//
//		//count = deque.count;
//		//ptr = deque.front;
//		//printf("%c\n", deque.current->data);
//		//for (int i = 0; i < count; i++)
//		//{
//		//	printf("%c", ptr->data);
//		//	ptr = ptr->next;
//		//}
//		//printf("\n");
//	}
//	count = deque.count;
//	ptr = deque.front->next;
//	for (int i = 0; i < count; i++)
//	{
//		printf("%c", ptr->data);
//		ptr = ptr->next;
//	}
//}
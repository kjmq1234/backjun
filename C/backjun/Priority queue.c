#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void ft_swap(int* num1, int* num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

void push(int* priority_queue, int m, int* idx)
{
	int idx_compare;

	priority_queue[*idx] = m;
	idx_compare = *idx;

	while (idx_compare > 0)
	{
		if (priority_queue[(idx_compare - 1) / 2] < priority_queue[idx_compare])
		{
			ft_swap(&priority_queue[(idx_compare - 1) / 2], &priority_queue[idx_compare]);
			idx_compare = (idx_compare - 1) / 2;
		}
		else
			break;
	}
	*idx += 1;
}

int	pop(int* priority_queue, int* idx)
{
	int top = priority_queue[0];
	int compare_idx = 0;
	int	max;

	priority_queue[0] = priority_queue[*idx - 1];
	priority_queue[*idx - 1] = 0;
	*idx -= 1;
	while (compare_idx < *idx - 1)
	{
		if (priority_queue[compare_idx * 2 + 1] >= priority_queue[compare_idx * 2 + 2])
			max = compare_idx * 2 + 1;
		else
			max = compare_idx * 2 + 2;
		if (priority_queue[compare_idx] < priority_queue[max])
		{
			ft_swap(&priority_queue[compare_idx], &priority_queue[max]);
			compare_idx = max;
		}
		else
			break;
	}
	return (top);
}

#include <stdio.h>
#include <stdlib.h>

void ft_swap(int* num1, int* num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

void push(int* priority_queue, int m, int* idx)
{
	int idx_compare;

	priority_queue[*idx] = m;
	idx_compare = *idx;

	while (idx_compare > 0)
	{
		if (priority_queue[(idx_compare - 1) / 2] > priority_queue[idx_compare])
		{
			ft_swap(&priority_queue[(idx_compare - 1) / 2], &priority_queue[idx_compare]);
			idx_compare = (idx_compare - 1) / 2;
		}
		else
			break;
	}
	*idx += 1;
}

int	pop(int* priority_queue, int* idx)
{
	int top = priority_queue[0];
	int compare_idx = 0;
	int	min;

	priority_queue[0] = priority_queue[*idx - 1];
	*idx -= 1;
	while (compare_idx * 2 + 1 < *idx)
	{
		if (priority_queue[compare_idx * 2 + 1] <= priority_queue[compare_idx * 2 + 2])
			min = compare_idx * 2 + 1;
		else
			min = compare_idx * 2 + 2;
		if (priority_queue[compare_idx] > priority_queue[min])
		{
			ft_swap(&priority_queue[compare_idx], &priority_queue[min]);
			compare_idx = min;
		}
		else
			break;
	}
	return (top);
}

int	main(void)
{
	int		n, m;
	int* priority_queue;
	int		idx = 0;

	scanf("%d", &n);
	priority_queue = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		priority_queue[i] = 0;
		scanf("%d", &m);
		if (m != 0)
			push(priority_queue, m, &idx);
		else
		{
			if (idx == 0)
				printf("0\n");
			else
				printf("%d\n", pop(priority_queue, &idx));
		}
		printf("index: %d ", idx - 1);
	}
}
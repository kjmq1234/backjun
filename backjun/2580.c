#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int* squre)
{
	for (int i = 0; i < 81; i++)
	{
		if ((i + 1) % 9 != 0)
			printf("%d ", squre[i]);
		else
		{
			printf("%d", squre[i]);
			printf("\n");
		}
	}
}

int	xycheck(int row[9][10], int col[9][10], int n, int j)
{
	if (row[n / 9][j] != 0)
		return (0);
	else if (col[n % 9][j] != 0)
		return (0);
	else
		return (1);
}

int	squrecheck(int* squre, int n, int j)
{
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			if (squre[(n / 9) * 9 + ((n % 9) / 3) * 3 + k + i * 9] == j)

				return (0);
		}
	}
	return (1);
}

void sudoku(int* squre, int i, int **row, int **col)
{
//	printf("i: %d\n", i);
	if (i == 82)
	{
		print(squre);
		exit(0);
	}


	if (squre[i] == 0)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (xycheck(row, col, i, j) && squrecheck(squre, i, j))
			{
				squre[i] = j;
				row[i / 9][j] = j;
				col[i % 9][j] = 0;
				sudoku(squre, i + 1, row, col);
				squre[i] = 0;
				row[i / 9][j]  = 0;
				col[i % 9][j] = 0;
			}
		}
	}
	else
		sudoku(squre, i + 1, row, col);

}

int	main(void)
{
	int	squre[81];
	int row[9][10];
	int col[9][10];
	for (int i = 0; i < 81; i++)
	{
		scanf("%d", &squre[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			row[i][j] = 0;
			col[i][j] = 0;
		}
	}
	for (int i = 0; i < 81; i++)
	{
		row[i / 9][squre[i]] = squre[i];
		col[i % 9][squre[i]] = squre[i];

	}
	sudoku(squre, 0, row, col);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	x, y;
	char** board;
	int	Bsum = 0;
	int	Wsum = 0;
	int	min = 65;
	scanf("%d %d", &y, &x);
	getchar();
	board = (char**)malloc(sizeof(char*) * (y));

	for (int i = 0; i < y; i++)
	{
		board[i] = (char*)malloc(sizeof(char) * (x + 1));
		for (int j = 0; j < x; j++)
			scanf("%c", &board[i][j]);
		board[i][x] = '\0';
		getchar();
	}
	//printf("\n");

	//for (int i = 0; i < y; i++)
	//{
	//	printf("%s", board[i]);
	//		printf("\n");

	//}

	for (int k = 0; k <= y - 8; k++)
	{
		for (int n = 0; n <= x - 8; n++)
		{
			Bsum = 0;
			Wsum = 0;
			for (int i = k; i < 8 + k; i++)
			{
				for (int j = n; j < 8 + n; j++)
				{
					if ((i - k + j - n) % 2 == 0 && board[i][j] != board[k][n])
						Wsum++;
					else if ((i - k + j - n) % 2 == 1 && board[i][j] == board[k][n])
						Wsum++;
					if ((i - k + j - n) % 2 == 0 && board[i][j] == board[k][n])
						Bsum++;
					else if ((i - k + j - n) % 2 == 1 && board[i][j] != board[k][n])
						Bsum++;
				}
			}
		//	printf(" Wsum: %d, Bsum: %d Min: %d \n", Wsum, Bsum, min);
				if (Wsum >= Bsum && min > Bsum)
					min = Bsum;
				else if (Wsum < Bsum && min > Wsum)
					min = Wsum;
		}
	}
		printf("%d", min);
}
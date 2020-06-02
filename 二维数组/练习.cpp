#include<stdio.h>
#define M 1
#define N 1
 
//数组定义
void text()
{
	int a[3][4] = {
	{ 0, 1, 2},
	{ 3, 4, 5},
	{ 6, 7, 8}
	};

	int b[3][3] = { 0 };
	b[0][0] = 1;
	b[1][1] = 1;
	b[2][2] = 1;

	int c[][3] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

//输出数组
void printArray(int m, int n, int **array)
{
	for (int i = 0; i < 2; i++)
	{
		printf("| ");
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("| \n");
	}
}

void xArray()
{
	int a[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	int b[3][2] = {
		{1,4},
		{2,5},
		{3,6}
	};
	int c[2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		printf("| ");
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("|\n");
	}

	printf("\n   * \n");

	for (int i = 0; i < 3; i++)
	{
		printf("| ");
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("|\n");
	}

	printf("\n   = \n");

	for (int i = 0; i < 2; i++)
	{
		printf("| ");
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("|\n");
	}
}



int main()
{
	xArray();
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 1024

void test()
{
	int arr[4][5] = { 0 };
	int k = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = k;
			k+=2;
		}
	}
	//printf("sizeof int : %d\n", sizeof(int));
	//printf("arr: %p\n", arr);
	//printf("arr+1: %p\n", arr + 1);
	//printf("*(array +1):%p\n", *(arr + 1));
	printf("%d\n", **(arr + 1) + 3);
	printf("%d\n", arr[1][0] + 3);
	printf("===============\n");

	int arr2[][3] = { {1,2,3}, {4,5,6} };
	int(*p)[3] = arr2;
	printf("%d\n", **(p + 1));
	printf("%d\n", **(arr2 + 1));
	printf("%d\n", arr2[1][0]);
	printf("=============\n");
	printf("%d\n", *(*(p + 1) + 2));
	printf("%d\n", *(*(p + 1) + 2));
	printf("%d\n", arr2[1][2]);
}

//work
void text4()
{
	char array[2][3][5] = {
				{
						{'x', 'x', 'x', 'x', 'x'},
						{'x', 'x', 'o', 'x', 'x'},
						{'x', 'x', 'x', 'x', 'x'}
				},
				{
						{'x', 'x', 'x', 'x', 'x'},
						{'x', 'x', 'o', 'x', 'x'},
						{'x', 'x', 'x', 'x', 'x'}
				}
	};
	printf("%p\n", &array[0]);
	printf("%p\n", (*array));
	printf("%c%c%c%c\n", *(*(*array + 1) + 2), *(*(*(array + 1) + 1) + 2), ***array, *(**array + 1));
}

void code0()
{
	int arr[3][3] = { 0 };
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; 3 < 3; j++)
		{
			arr[i][j] = getchar();
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; i++)
		{
			printf("%c", arr[i][j]);
		}
	}
}

void code1()
{
	int length, aver;
	int i, j;
	char str[MAX];

	scanf_s("%s", str);

	length = strlen(str);
	aver = sqrt(length);

	for (i = 0; i < aver; i++)
	{
		for (j = 0; j < aver; j++)
		{
			printf("%c ", str[i * aver + j]);
		}
		printf("\n");
	}
}

void code2()
{
	float pm25[3][12] = {
				{0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.3, 35.5, 58.7, 49.6, 55.5},
				{59.8, 54.9, 33.1, 38.2, 26.6, 20.5, 27.8, 38.5, 41.5, 44.7, 38.1, 41.5},
				{34.9, 36.4, 47.5, 37.9, 30.6, 23.4, 26.6, 34.3, 0.0, 0.0, 0.0, 0.0}
	};
	int year, month;

	printf("请输入待查询年月分(年-月): ");
	scanf_s("%d-%d", &year, &month);

	if (year < 2014 || year > 2016 || month < 1 || month > 12)
	{
		printf("输入数据错误！\n");
	}
	else
	{
		year -= 2014;
		month -= 1;
		if (pm25[year][month])
		{
			printf("%d年%d月广州的PM2.5值是: %.2f\n", year + 2014, month + 1, pm25[year][month]);
		}
		else
		{
			printf("抱歉，该月份未收录数据！\n");
		}
	}
}

int main()
{
	code1();
}
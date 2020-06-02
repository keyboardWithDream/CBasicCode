#include <stdio.h>
#include <math.h>

static void learnFor()
{
	int sum = 0;
	for (int i = 0; i < 100; i+=2)
	{
		sum += i;
	}
	printf("%d\n", sum);
}

static void learnWhile()
{
	int i = 0, sum = 0;
	while (i < 100)
	{
		sum += i;
		i += 2;
	}
	printf("%d\n", sum);
}

static void learnDoWhile() {
	int password = 123456;
	int isPassword;
	do
	{
		printf("请输入密码:");
		scanf_s("%d", &isPassword);
	} while (password != isPassword);
	printf("密码正确!\n");
}

//统计从键盘输入的一行英文句子中大写字母的个数.
static void countBig()
{
	int ch, count = 0;
	printf("请输入英文:");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			count++;
		}
	}
	printf("你一共输入了%d个大写字母.", count);
}

//大小写转换
static void change()
{
	int ch;
	printf("请输入英文:");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 'A' + 'a';
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 'a' + 'A';
		}
		putchar(ch);
	}
	putchar('\n');
}

//判断素数
static void isNum() {
	int num;
	bool flag = 1;
	printf("请输入一个整型:");
	scanf_s("%d", &num);
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("是素数.\n");
	}
	else
	{
		printf("不是素数.\n");
	}
}

//打印九九乘法表
static void nineNx() 
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d	", j, i, i * j);
		}
		printf("\n");
	}
}

//写一个程序，对用户输入的整数进行求和。当用户输入任意字符时，结束程序并打印结果。
static void getSum()
{
	int sum = 0, num = 0;
	int status;
	do
	{
		printf("请输入合法的数字:");
		sum += num;
		status = scanf_s("%d", &num);
	} while (status);
	printf("%d", sum);
}

//打印10000内的素数
void printfNum()
{
	bool flag;
	for (int num = 3; num < 10000; num+=2)
	{
		flag = 0;
		for (int bnum = 2; bnum < num; bnum++)
		{
			if (num % bnum == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			printf("%d\n", num);
		}
	}
}

int main()
{
	printfNum();
}
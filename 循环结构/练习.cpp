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
		printf("����������:");
		scanf_s("%d", &isPassword);
	} while (password != isPassword);
	printf("������ȷ!\n");
}

//ͳ�ƴӼ��������һ��Ӣ�ľ����д�д��ĸ�ĸ���.
static void countBig()
{
	int ch, count = 0;
	printf("������Ӣ��:");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			count++;
		}
	}
	printf("��һ��������%d����д��ĸ.", count);
}

//��Сдת��
static void change()
{
	int ch;
	printf("������Ӣ��:");
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

//�ж�����
static void isNum() {
	int num;
	bool flag = 1;
	printf("������һ������:");
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
		printf("������.\n");
	}
	else
	{
		printf("��������.\n");
	}
}

//��ӡ�žų˷���
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

//дһ�����򣬶��û����������������͡����û����������ַ�ʱ���������򲢴�ӡ�����
static void getSum()
{
	int sum = 0, num = 0;
	int status;
	do
	{
		printf("������Ϸ�������:");
		sum += num;
		status = scanf_s("%d", &num);
	} while (status);
	printf("%d", sum);
}

//��ӡ10000�ڵ�����
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
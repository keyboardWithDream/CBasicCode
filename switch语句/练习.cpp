#include <stdio.h>

static void switchDemo()
{
	char grand;
	printf("输入成绩等级：");
	scanf_s("%c", &grand);
	switch (grand)
	{
	case 'A':
		printf("你的成绩在90分以上。\n");
		break;
	case 'B':
		printf("你的成绩在80~90分之间。\n");
		break;
	case 'C':
		printf("你的成绩在70~80分之间。\n");
		break;
	case 'D':
		printf("你的成绩在60~70分之间。\n");
		break;
	case 'E':
		printf("你的成绩在60分以下。\n");
		break;
	default:
		printf("输入有误！\n");
		break;
	}
}

static void ifElseDemo()
{
	int a, b;
	printf("请输入两个整型：");
	scanf_s("%d %d", &a, &b);
	if (a != b)
	{
		if (a > b)
		{
			printf("%d > %d\n", a, b);
		}
		else
		{
			printf("%d < %d\n", a, b);
		}
	}
	else
	{
		printf("%d = %d\n", a, b);
	}
}

/*
练习:
要求用户输入一个字符，如果是大写字母，将其转换为小写；\
如果是小写字母，将其转换为大写；\
其他字符不做处理，并输出结果
*/
static void change()
{
	char c;
	printf("请输入字母：");
	scanf_s("%c", &c);
	if (c >= 'a' && c <= 'z' )
	{
		c -= 32;
	}
	else if (c >= 'A' &&  c <= 'Z')
	{
		c += 32;
	}
	printf("%c\n", c);
}

//写一个最简单的计算器，支持四则运算
static void count() 
{
	int op1, op2;
	char ch;
	float result;

	printf("请输入式子：");
	scanf_s("%d %c %d", &op1, &ch, &op2);

	switch (ch)
	{
		case '-': op2 = -op2; // no break
		case '+': 
			result = (float)op1 + op2;
			printf("结果是：%.2f\n", result);
			break;
		case '*': 
			result = (float)op1 * op2;
			printf("结果是：%.2f\n", result);
			break;
		case '/':
			if (op2 != 0)
			{
				result = (float)op1 / op2;
				printf("结果是：%.2f\n", result);
				break;
			}
			else
			{
				printf("除数不能为零！\n");
				break;
			}
	}
}

int main()
{

	count();
}
#include <stdio.h>

static void switchDemo()
{
	char grand;
	printf("����ɼ��ȼ���");
	scanf_s("%c", &grand);
	switch (grand)
	{
	case 'A':
		printf("��ĳɼ���90�����ϡ�\n");
		break;
	case 'B':
		printf("��ĳɼ���80~90��֮�䡣\n");
		break;
	case 'C':
		printf("��ĳɼ���70~80��֮�䡣\n");
		break;
	case 'D':
		printf("��ĳɼ���60~70��֮�䡣\n");
		break;
	case 'E':
		printf("��ĳɼ���60�����¡�\n");
		break;
	default:
		printf("��������\n");
		break;
	}
}

static void ifElseDemo()
{
	int a, b;
	printf("�������������ͣ�");
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
��ϰ:
Ҫ���û�����һ���ַ�������Ǵ�д��ĸ������ת��ΪСд��\
�����Сд��ĸ������ת��Ϊ��д��\
�����ַ�����������������
*/
static void change()
{
	char c;
	printf("��������ĸ��");
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

//дһ����򵥵ļ�������֧����������
static void count() 
{
	int op1, op2;
	char ch;
	float result;

	printf("������ʽ�ӣ�");
	scanf_s("%d %c %d", &op1, &ch, &op2);

	switch (ch)
	{
		case '-': op2 = -op2; // no break
		case '+': 
			result = (float)op1 + op2;
			printf("����ǣ�%.2f\n", result);
			break;
		case '*': 
			result = (float)op1 * op2;
			printf("����ǣ�%.2f\n", result);
			break;
		case '/':
			if (op2 != 0)
			{
				result = (float)op1 / op2;
				printf("����ǣ�%.2f\n", result);
				break;
			}
			else
			{
				printf("��������Ϊ�㣡\n");
				break;
			}
	}
}

int main()
{

	count();
}
#include <stdio.h>

// дһ������ͳ���û�������ַ����У�����Ԫ����ĸ���ֵĴ�����������Сд�� a��e��i��o��u��
void countYuan()
{
	char ch;
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	printf("������Ӣ��:");
	while ((ch = getchar()) != '\n')
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			a++;
			break;
		case 'e':
		case 'E':
			e++;
			break;
		case 'i':
		case 'I':
			i++;
			break;
		case 'o':
		case 'O':
			o++;
			break;
		case 'u':
		case 'U':
			u++;
			break;
		}
	}
	printf("a(%d),e(%d),i(%d),o(%d),u(%d)", a, e, i, o, u);
}

//���ƿ�������
void caesar()
{
	int ch;
	printf("�������������:");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar('a' + (ch - 'a' +3) % 26);
			continue;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar('A' + (ch - 'A' + 3) % 26);
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
}

int main()
{
	countYuan();
	caesar();
}
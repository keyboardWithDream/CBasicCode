#include <stdio.h>
#include <string.h>
#define Max 1024
void test()
{
	int a[] = { 1, 2, 3, 4, 6 };
	int* p = &a[0];
	printf("%p\n", &a[0]);
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", *p);

	char str[] = "Hello World!";
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

void howLong()
{
	char str[Max];
	printf("������һ���ַ���:");
	getchar();
	fgets(str, Max, stdin);
	int lenght = strlen(str);
	printf("�ַ�������Ϊ:%d\n", lenght);
}

int main()
{
	howLong();
	return 0;
}
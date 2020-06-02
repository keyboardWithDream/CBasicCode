#include <stdio.h>


void test()
{
	//ָ������ { {int*}, {int*}, {int*} }
	int a = 0, b = 1, c = 2;
	int* p1[3] = { &a, &b, &c };
	for (int i = 0; i < 3; i++)
	{
		printf("int* p[%d] = %d\n",i , *p1[i]);
	}

	char* chp[3] = { "Hello","World","Harlan" };
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", chp[i]);
	}

	//����ָ�� *{ arr[0](int), arr[1](int), arr[2](int) }
	int ary[5] = {1, 2, 3, 4, 5};
	int(*p2)[5] = &ary;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *(*p2 + i));
	}
}

void howLong()
{
	char str[] = "Hello world!";
	char* target = str; //ָ����� ָ�� str
	int count = 0;
	while (*target++ != '\0')
	{
		count++;
	}
	printf("�ܹ���%d���ַ�.\n", count);
	
}

// ָ������(���ָ�������)
void arrz()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* p[3] = { &a, &b, &c };
	printf("%d\n", *p[0]); //ȡ����p ��һ��Ԫ��(��ַ)ָ���ֵ
	printf("%p\n", &a);//ȡa�����ĵ�ַ
	printf("%p\n", p[0]);//ȡ����p ��һ��Ԫ��(a�ĵ�ַ)
	printf("%p\n", p);//ȡ����p��һ��Ԫ�صĵ�ַ
	printf("%p\n", &p[0]);//ͬ��
}



//����ָ��(ָ�������ָ��)
void zarr()
{
	int arr[3] = { 1, 2, 3 };
	int(*p)[3] = &arr;

	printf("%p\n", &p); //ȡָ��p�ĵ�ַ

	printf("%p\n", &arr[0]);//ȡ�����0��Ԫ�صĵ�ַ
	printf("%p\n", &arr); //ȡarr����ĵ�ַ
	printf("%p\n", p);// p��ֵ(arr����ĵ�ַ) ��%p��ӡ
	printf("%p\n", *p);// ��pָ��ȡarr����ĵ�ַ

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *(*p + i)); // *p : ȡ����arr�ĵ�ַ
	}							   // *p(��һ��Ԫ�ص�ַ) + i : ȡ����arr�ĵ�ַ + i * sizeof(int) ���ֽ� (�����i��Ԫ�صĵ�ַ)
								   // *(*p + i) : ȡ����i��Ԫ�ص�ֵ
}

/*
������
*/

//int main(int argc, char* argv[])
//{
//	int sum = 0;
//	for (int i = 0; i < argc; i++)
//	{
//		sum += atoi(argv[argc]);
//	}
//	printf("sum = %d", sum);
//	return 0;
//}

void work()
{
	char* arr[5] = { "hello","world","abcde","good","nice" };
	char* (*p)[5] = &arr;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; *(*(*p + i) + j) != '\0'; j++)
		{
			printf("%c ", *(*(*p + i) + j));
		}
		printf("\n"); 
	}
}

int	main()
{
	work();
}
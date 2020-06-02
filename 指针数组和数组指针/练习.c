#include <stdio.h>


void test()
{
	//指针数组 { {int*}, {int*}, {int*} }
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

	//数组指针 *{ arr[0](int), arr[1](int), arr[2](int) }
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
	char* target = str; //指针变量 指向 str
	int count = 0;
	while (*target++ != '\0')
	{
		count++;
	}
	printf("总共有%d个字符.\n", count);
	
}

// 指针数组(存放指针的数组)
void arrz()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* p[3] = { &a, &b, &c };
	printf("%d\n", *p[0]); //取数组p 第一个元素(地址)指向的值
	printf("%p\n", &a);//取a变量的地址
	printf("%p\n", p[0]);//取数组p 第一个元素(a的地址)
	printf("%p\n", p);//取数组p第一个元素的地址
	printf("%p\n", &p[0]);//同上
}



//数组指针(指向数组的指针)
void zarr()
{
	int arr[3] = { 1, 2, 3 };
	int(*p)[3] = &arr;

	printf("%p\n", &p); //取指针p的地址

	printf("%p\n", &arr[0]);//取数组第0个元素的地址
	printf("%p\n", &arr); //取arr数组的地址
	printf("%p\n", p);// p的值(arr数组的地址) 用%p打印
	printf("%p\n", *p);// 用p指针取arr数组的地址

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *(*p + i)); // *p : 取数组arr的地址
	}							   // *p(第一个元素地址) + i : 取数组arr的地址 + i * sizeof(int) 个字节 (数组第i个元素的地址)
								   // *(*p + i) : 取出第i个元素的值
}

/*
测试题
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
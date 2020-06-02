#include <stdio.h>

void test()
{

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


int main()
{
	char* arr[5] = { "hello","world","harlan","good","nice" };
	char* (*p)[5] = &arr;

	printf("%p\n", &arr);

	printf("%p\n", (p + 1));
}
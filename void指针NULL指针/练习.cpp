#include <stdio.h>

/*
void 指针: 通用指针,可以指向任意类型的数据.
*/
void test0()
{
	int num = 1024;
	int* pi = &num;
	char str[] = "hello";
	char* ps = str;

	void* pv;
	pv = pi;
	printf("pi: %p , pv: %p\n", pi, pv);
	printf("*pv: %d\n", *(int*)pv);
	pv = ps;
	printf("ps: %p , pv: %p\n", ps, pv);
	printf("*pv: %s\n", (char*)pv);
}

/*
NULL 指针
#define NULL ((void *) 0)
当不清楚要将指针初始化什么地址时,将它初始话NULL;
在对指针进行解引用时,先检验该指针是否为NULL;
*/
void test1()
{
	int* p1;
	printf("%d\n", *p1);
}

int main()
{
	test1();
}
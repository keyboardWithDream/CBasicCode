#include <stdio.h>

/*
void ָ��: ͨ��ָ��,����ָ���������͵�����.
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
NULL ָ��
#define NULL ((void *) 0)
�������Ҫ��ָ���ʼ��ʲô��ַʱ,������ʼ��NULL;
�ڶ�ָ����н�����ʱ,�ȼ����ָ���Ƿ�ΪNULL;
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
#include <stdio.h>

void test()
{

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


int main()
{
	char* arr[5] = { "hello","world","harlan","good","nice" };
	char* (*p)[5] = &arr;

	printf("%p\n", &arr);

	printf("%p\n", (p + 1));
}
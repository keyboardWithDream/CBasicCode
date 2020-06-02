#include <stdio.h>
#include <math.h>
 
/*
定义指针: 类型名 *指针变量名
获取变量地址,取址符: &
访问指针变量指向的数据: *
*/

void test()
{
	char ch = 'H';
	int num = 446;

	char* pch = &ch;
	int* pnum = &num;

	printf("ch的地址为:%p\n", &ch);
	printf("ch的值为%c\n", *pch);

	printf("num的地址为:%p\n", &num);
	printf("num的值为:%d\n", *pnum);
}

//验证尼科彻斯定理  (最终版未完成!!)
void isKncs()
{
	int num, sum = 0;
	printf("请输入一个整数:");
	scanf_s("%d", &num);
	int powNum = pow(num, 3);
	printf("%d\n", powNum);
	int res[100][2], count = 0; 
	for (int i = 1; i < powNum / 2; i+=2)
	{
		printf("i =%d\n", i);
		for (int j = 2; j <= powNum / 2; j++)
		{
			if (j * (i + j - 1) == powNum)
			{
				printf("find!:");
				res[count][0] = i;
				res[count][1] = j;
				printf("r0 = %d", res[count][0]);
				printf("r1 = %d", res[count][1]);
				count++;
			}
			sum = (j * (i + j - 1));
			printf("sum = %d\n", sum);
		}
		printf("===============\n");
	}

	if (count)
	{
		printf("count = %d\n", count);
		printf("%d\n", res[0][0]);
		printf("%d\n", res[0][1]);
		for (int i = 0; i < count; i++)
		{
			printf("%d = ", powNum);
			for (int j = 1; j <= res[count][1]; j++)
			{
				printf("%d + ", res[count][0]);
				res[count][0] += 2;
				printf("%d", res[count][0]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("无!");
	}
	
}

int main()
{
	isKncs();
}
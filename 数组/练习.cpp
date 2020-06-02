#include <stdio.h>
#define NUM 10

/*
数组定义:类型 数组名[元组个数];
访问元素:数组名[下标];
数组初始化为0: 类型 数组名[个数] = {0} /未被初始化的元素初始化为0
*/

//10个数平均值
void avg()
{
	float a[NUM];
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("请输入第%d个数据:", i + 1);
		scanf_s("%f", &a[i]);
		sum += a[i];
	}
	printf("平均值为:%.2f\n", sum / NUM);
}

// 0. 用户输入年份，打印该年每个月的天数。
void month()
{
	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year;
	printf("输入年份:");
	scanf_s("%d", &year);

    day[1] = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
	
	for (int i = 0; i < sizeof(day) / sizeof(day[0]); i++)
	{
		printf("第%d月份:%d天\n", i + 1, day[i]);
	}
}

//1. 写一个生命计算器，要求用户输入生日，显示他在这个世界上活了多少天？
/*
void life()
{
    long count = 0; // count用于存放一共活了多少天
    int year1, year2; // year1是你的生日年份，year2是今天的年份
    int month1, month2;
    int day1, day2;
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    printf("请输入你的生日（如1988-05-20）：");
    scanf_s("%d-%d-%d", &year1, &month1, &day1);

    printf("请输入今年日期（如2016-03-28）：");
    scanf_s("%d-%d-%d", &year2, &month2, &day2);

    while (year1 <= year2)
    {
        days[1] = (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) ? 29 : 28;
        while (month1 <= 12)
        {
            while (day1 <= days[month1 - 1])
            {
                if (year1 == year2 && month1 == month2 && day1 == day2)
                {
                    goto FINISH; // 跳出多层循环才被迫用goto语句
                }
                day1++;
                count++;
            }
            day1 = 0;
            month1++;
        }
        month1 = 0;
        year1++;
    }
FINISH: printf("你在这个世界上总共生存了%d天\n", count);
}
*/
int main()
{
}
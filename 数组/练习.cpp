#include <stdio.h>
#define NUM 10

/*
���鶨��:���� ������[Ԫ�����];
����Ԫ��:������[�±�];
�����ʼ��Ϊ0: ���� ������[����] = {0} /δ����ʼ����Ԫ�س�ʼ��Ϊ0
*/

//10����ƽ��ֵ
void avg()
{
	float a[NUM];
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("�������%d������:", i + 1);
		scanf_s("%f", &a[i]);
		sum += a[i];
	}
	printf("ƽ��ֵΪ:%.2f\n", sum / NUM);
}

// 0. �û�������ݣ���ӡ����ÿ���µ�������
void month()
{
	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year;
	printf("�������:");
	scanf_s("%d", &year);

    day[1] = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
	
	for (int i = 0; i < sizeof(day) / sizeof(day[0]); i++)
	{
		printf("��%d�·�:%d��\n", i + 1, day[i]);
	}
}

//1. дһ��������������Ҫ���û��������գ���ʾ������������ϻ��˶����죿
/*
void life()
{
    long count = 0; // count���ڴ��һ�����˶�����
    int year1, year2; // year1�����������ݣ�year2�ǽ�������
    int month1, month2;
    int day1, day2;
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    printf("������������գ���1988-05-20����");
    scanf_s("%d-%d-%d", &year1, &month1, &day1);

    printf("������������ڣ���2016-03-28����");
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
                    goto FINISH; // �������ѭ���ű�����goto���
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
FINISH: printf("��������������ܹ�������%d��\n", count);
}
*/
int main()
{
}
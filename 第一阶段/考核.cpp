#include <stdio.h>
#include <math.h>

//0. ���д���򣬼���� 1000 ���µ���Ȼ���У����� 3 �� 5 �ı���������֮�͡�
void sumOf35()
{
	int sum = 0;
	for (int i = 0; i < 1000; i += 15)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("��Ϊ:%d\n", sum);
}

//1. ���д�����ҳ�쳲�������������ֵ������ 4 ��������������Щ����ֵΪż������֮��
void fabSum()
{
	int a = 1, b = 2, c, sum = 0;
	do
	{
		if (!(b % 2))
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	} while (c < 4000000);

	printf("ǰ�İ�����ż����%d", sum);
}

//2. ��дһ��������� 600851475143 ��������������Ƕ��٣�
void maxFactor()
{
	long long i, j, k, l, num = 600851475143;
	bool flag = 1;

	for (i = 2, j = num / i; flag != 0; i++, j = num / i, flag = 1)
	{
		if (i * j == num)
		{
			k = sqrt((double)j);
			for (l = 2; l <= k; l++)
			{
				if (j % l == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				break;
			}
		}
	}

	printf("%lld\n", j);
}

//3. �ҳ���������������λ���˻����ɵĻ�������
void maxPalindrome()
{
	int i, j, target, invert = 0, num = 998001; // 999 * 999

	for (; num > 10000; num--)
	{
		// ��������
		target = num;
		invert = 0;
		while (target)
		{
			invert = invert * 10 + target % 10;
			target = target / 10;
		}

		// �����������һ�£�˵�������ǻ�����
		if (invert == num)
		{
			for (i = 100; i < 1000; i++)
			{
				if (!(num % i) && (num / i >= 100) && (num / i < 1000))
				{
					goto FINDIT;
				}
			}
		}
	}
FINDIT: printf("�����%d == %d * %d\n", num, i, num / i);
}

int main()
{
	sumOf35();
	fabSum();
	maxFactor();
	maxPalindrome();
}
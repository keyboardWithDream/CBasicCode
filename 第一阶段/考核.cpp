#include <stdio.h>
#include <math.h>

//0. 请编写程序，计算出 1000 以下的自然数中，属于 3 或 5 的倍数的数字之和。
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
	printf("和为:%d\n", sum);
}

//1. 请编写程序，找出斐波那契数列中数值不超过 4 百万的项，并计算这些项中值为偶数的项之和
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

	printf("前四百万项偶数和%d", sum);
}

//2. 编写一个程序，求解 600851475143 的最大质数因子是多少？
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

//3. 找出最大的有由两个三位数乘积构成的回文数。
void maxPalindrome()
{
	int i, j, target, invert = 0, num = 998001; // 999 * 999

	for (; num > 10000; num--)
	{
		// 先求倒置数
		target = num;
		invert = 0;
		while (target)
		{
			invert = invert * 10 + target % 10;
			target = target / 10;
		}

		// 如果跟倒置数一致，说明该数是回文数
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
FINDIT: printf("结果是%d == %d * %d\n", num, i, num / i);
}

int main()
{
	sumOf35();
	fabSum();
	maxFactor();
	maxPalindrome();
}
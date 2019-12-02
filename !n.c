递归和非递归分别实现求n的阶乘

#include<stdio.h>
#include<windows.h>
int Factorial_r(int num)
{
	//非递归实现
	int k = 1;
	while (num > 0)
	{
		k *= num--;
	}
	return k;
}

int Factorial(int num)
{
	//递归实现
	return num > 0 ? num * Factorial(num - 1) : 1;
}

int main()
{
	int n = 0;

	printf("请输入一个数，求它的阶乘:\n");
	scanf_s("%d", &n);
	printf("递归实现的阶乘为：%d\n", Factorial(n));
	printf("非递归实现的阶乘为：%d\n", Factorial_r(n));
	system("pause");
	return 0;
}

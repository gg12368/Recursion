写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 。

#include<stdio.h>
#include<windows.h>
int DigitSum(int x)
{
	if (x < 10)
		return x;
	else
		return (x % 10 + DigitSum(x / 10));
}
int main()
{
	int n = 1729;
	int ret = DigitSum(n);
	printf("返回组成它的数字之和为：%d\n", ret);
	system("pause");
	return 0;
}

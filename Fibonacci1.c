方法一：递归实现斐波那契数列

#include<stdio.h>
#include<windows.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int res = Fib(6);
	printf("第六个斐波那契数为：%d\n", res);
	system("pause");
	return 0;
}

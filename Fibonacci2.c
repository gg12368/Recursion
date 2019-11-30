方法二：迭代实现斐波那契数列

#include<stdio.h>
#include<windows.h>
int Fib(int n)
{
	int first = 1;
	int second = 1;
	int third = 1;
	while (n > 2)
	{
		third = first + second;
		first = second;
		second = third;
		n--;
	}
	return third;
}

int main()
{
	int res=Fib(6);
	printf("第六个斐波那契数为：%d\n", res);
	system("pause");
	return 0;
}

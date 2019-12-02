递归方式实现打印一个整数的每一位 。

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}

int main()
{

	int num = 1234;
	print(num);
	system("pause");
	return 0;
}

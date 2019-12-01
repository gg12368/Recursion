编写一个函数实现n^k，使用递归实现

#include<stdio.h>
#include<windows.h>
int Find_num(int n, int k)
{
	if (k == 0)
		return 1;
	if (k == 1)
		return n;
	else
		return n * Find_num(n, k - 1);
 }
 int main()
 {
	int n, k;
	printf("请输入底数n：\n");
	scanf_s("%d", &n);
	printf("请输入指数k：\n");
	scanf_s("%d", &k);
	int find_num = Find_num(n, k);
	printf("n^k的结果为：%d", find_num);
	printf("\n");
	system("pause");
	return 0;
}

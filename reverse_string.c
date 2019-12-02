编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。

#include<stdio.h>
#include<windows.h>
int  reverse_string(char * string) {
	if (*string != '\0') {   //判断string中ASCII值是否为0,在C语言中以'\0'作为结束字符
		string++;  //一直向后进行统计元素
		reverse_string(string);
		printf("%c", *(string - 1));   // string-1指字符串中从最后一个元素输出 
	}
	return 0;
}
int main() {
	char string[] = "abced";
	reverse_string(string);
	system("pause");
	return 0;
}

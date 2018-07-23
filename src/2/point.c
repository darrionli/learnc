#include <stdio.h>

int pointOper(void);


/**
 * 指针是一个变量，其值是另一个变量的地址，即内存地址
 */
int main()
{
	int var = 20;
	int *ip; // 声明一个整型指针

	ip = &var;	// 在指针变量中存储var的地址

	printf("var:%d\n", &var);
	printf("ip:%d\n", ip);
	printf("*ip：%d\n", *ip);
	return 0;
}

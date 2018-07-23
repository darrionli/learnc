#include <stdio.h>

int main()
{
	int n[10]; // 声明一个包含10个整数的一维数组
	int m[5][10]; // 声明多维数组
	int i, j;

	// 初始化数组
	for (i = 0; i < 10; i++)
	{
		n[i] = i + 100;
	}

	// 获取数组
	for (j = 0; j < 10; j++)
	{
	 	printf("第%d个元素只为%d\n", j, n[j]);
	}

	return 0;
}

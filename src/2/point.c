#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int MAX = 3;
int addpoint(void);
int diff(void);
int ppoint(void);
int ptofunc(unsigned long *par);
double getAvg(int *arr, int size);

/**
 * 指针是一个变量，其值是另一个变量的地址，即内存地址
 */
int main()
{
	int var = 20;
	int *ip; // 声明一个整型指针
	unsigned long sec;
	int balance[5] = {12, 3, 6, 63, 1};
	double avg;

	ptofunc(&sec);
	printf("seconds：%ld\n", sec);

	avg = getAvg(balance, 5);
	printf("avg values is : %f\n", avg);
	return 0;
}

// 递增一个指针
int addpoint(void)
{
	int var[] = {10, 200, 300};
	int i, *ptr;

	// 指针中的数组地址
	ptr = &var[0];
	for (i = 0; i < MAX; i++)
	{
		printf("存储地址：var[%d] = %x\n", i, ptr);
		printf("存储值：var[%d] = %d\n", i, *ptr);
		ptr++;
	}
	return 0;
}

int diff(void)
{
	int val[] = {10, 100, 200};
	int i, *ptr[MAX];
	for (int i = 0; i < MAX; i++)
	{
		// 赋值为整数地址
		ptr[i] = &val[i];
	}
	for (int i = 0; i < MAX; i++)
	{
		printf("values of var[%d] = %d\n", i, *ptr[i]);
	}
	return 0;
}

// 指向指针的指针
int ppoint(void)
{
	int var = 3000;
	int *ptr;
	int **pptr;

	ptr = &var;
	pptr = &ptr;

	printf("var = %d\n", var);
	printf("ptr = %d\n", *ptr);
	printf("pptr = %d\n", **pptr);

	return 0;
}

// 传递指针给函数
int ptofunc(unsigned long *par)
{
	// 获取当前秒数
	*par = time( NULL );
	return 0;
}

// 传数组给函数
double getAvg(int *arr, int size)
{
	int i, sum = 0;
	double avg;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	avg = (double)sum / size;
	return avg;
}

// 从函数返回指针 - 生成并返回随机数
int *getRandom()
{
	static int r[10];
	int i;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		r[i] = rand();
		printf("%d\n", r[i]);
	}
	return r;
}

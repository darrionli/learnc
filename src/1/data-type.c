#include <stdio.h>

// 声明，未定义
extern int a, b, c;
extern float f;

int main()
{
	int a, b, c; // 声明，定义
	float f;

	a = 10;
	b = 20;
	c = a + b;
	printf("c values : %d \n", c);

	f = 70.0 / 3.0;
	printf("f values : %f \n", f);

	return 0;
}


/**
 * c语言变量声明：
 * 1. 一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间。
 * 2. 另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它。 例如：extern int a 其中变量 a 可以在别的文件中定义的。
 * 3. 除非有extern关键字，否则都是变量的定义。
 */

#include <stdio.h>

// 函数声明
void func1(void);

// 全局变量
static int count = 10;

int main()
{
	while(count--){
		func1();
	}
	return 0;
}

void func1(void){
	// thingy是func1的局部变量，只能初始化一次
	static int thingy = 5;
	thingy++;
	printf("thingy 为%d，count为%d\n", thingy, count);
}

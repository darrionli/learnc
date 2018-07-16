#include <stdio.h>

/**
 * 常量的定义方式
 * 1. 使用#define预处理器
 * 2. 使用const关键字
 */

#define WIDTH 5
#define HEIGHT 10
#define NEWLINE '\n'

int main()
{
	const int LEFT = 10;
	const int RIGHT = 5;

	int area, road;

	road = LEFT * RIGHT;
	area = HEIGHT * WIDTH;
	printf("area: %d", area);
	printf("%c", NEWLINE);
	printf("road %d", road);
	return 0;
}

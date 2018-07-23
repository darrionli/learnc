#include <stdio.h>

int getMaxValue(int v1, int v2);

int main(void)
{
	int a, b;
	int ret;

	scanf("%d", &a);
	scanf("%d", &b);
	ret = getMaxValue(a, b);

	printf("最大的值为：%d\n", ret);
	return 0;
}

int getMaxValue(int v1, int v2)
{
	int result;

	if(v1 > v2)
		result = v1;
	else
		result = v2;
	return result;
}

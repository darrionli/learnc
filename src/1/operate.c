#include <stdio.h>

int A = 10;
int B = 20;
char buy;
int sum, number;

int main(void)
{
	printf("A单价10元，B单价20元\n");
	printf("输入需要的商品：");
	scanf("%c", &buy);
	printf("输入数量：\n");
	scanf("%d", &number);
	sum = buy=='A' ? number*10 : number*20;
	printf("\n你所需要的%d个%c商品总价为%d元\n", number, buy, sum);
	return 0;
}

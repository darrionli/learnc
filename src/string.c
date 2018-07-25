#include <stdio.h>
#include <string.h>

int str(void);

int main()
{
	char greeting[5] = {'H', 'E', 'L', 'L', 'O'};
	printf("%s\n", greeting);
	str();
	return 0;
}

int str (void)
{
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int  len;

	// 复制str1到str3
	strcpy(str3, str1);
	printf("str3:%s\n", str3);

	// 连接str1和str2
	strcat(str1, str2);
	printf("str1-str2：%s\n", str1);

	// 字符串长度
	len = strlen(str1);
	printf("%d\n", len);
}

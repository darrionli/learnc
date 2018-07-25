#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books *book);

int main(void)
{
	struct Books Book1; // 声明Book1，类型为Books
	struct Books Book2; // 声明Book2，类型为Books

	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "lidi");
	strcpy(Book1.subject, "C");
	Book1.book_id = 1000;

	strcpy(Book2.title, "PHP Programming");
	strcpy(Book2.author, "zhangsan");
	strcpy(Book2.subject, "PHP");
	Book2.book_id = 1001;

	printBook(&Book1);

	return 0;
}

void printBook(struct Books *book)
{
	printf("books.book_id:%d\n", book->book_id);
	printf("books.title:%s\n", book->title);
}

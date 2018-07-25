#include <stdio.h>
#include <string.h>

typedef struct Books
{
	char title[50];
	char subject[200];
	int book_id;
} Book;

int main()
{
	Book book;
	strcpy(book.title, "PHP手册");
	strcpy(book.subject, 'subject');
	book.book_id = 1001;

	printf("书名%s\n", book.title);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
	char title[30];
	char author[20];
	int page;
	int price;
};

int main(void)
{
	struct book a;

	strcpy_s(a.title, "혼자 공부하는 c언어");
	strcpy_s(a.author, "서현우");
	a.page = 636;
	a.price = 24000;

	printf("도서명 : %s\n", a.title);
	printf("저자 : %s\n", a.author);
	printf("페이지수 : %d쪽\n", a.page);
	printf("가격 : %d원\n", a.price);

	printf("\n");

	struct book b;
	
	strcpy_s(b.title, "기계재료학");
	strcpy_s(b.author, "김정규");
	b.page = 527;
	b.price = 30000;

	printf("도서명 : %s\n", b.title);
	printf("저자 : %s\n", b.author);
	printf("페이지수 : %d쪽\n", b.page);
	printf("가격 : %d원\n", b.price);
	
	printf("\n");

	struct book c;

	strcpy_s(c.title, "재료역힉");
	strcpy_s(c.author, "Jamees M.Gere");
	c.page = 497;
	c.price = 32000;

	printf("도서명 : %s\n", c.title);
	printf("저자 : %s\n", c.author);
	printf("페이지수 : %d쪽\n", c.page);
	printf("가격 : %d원\n", c.price);

}

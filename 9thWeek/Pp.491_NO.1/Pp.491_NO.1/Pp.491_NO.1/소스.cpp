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

	strcpy_s(a.title, "ȥ�� �����ϴ� c���");
	strcpy_s(a.author, "������");
	a.page = 636;
	a.price = 24000;

	printf("������ : %s\n", a.title);
	printf("���� : %s\n", a.author);
	printf("�������� : %d��\n", a.page);
	printf("���� : %d��\n", a.price);

	printf("\n");

	struct book b;
	
	strcpy_s(b.title, "��������");
	strcpy_s(b.author, "������");
	b.page = 527;
	b.price = 30000;

	printf("������ : %s\n", b.title);
	printf("���� : %s\n", b.author);
	printf("�������� : %d��\n", b.page);
	printf("���� : %d��\n", b.price);
	
	printf("\n");

	struct book c;

	strcpy_s(c.title, "��Ὺ��");
	strcpy_s(c.author, "Jamees M.Gere");
	c.page = 497;
	c.price = 32000;

	printf("������ : %s\n", c.title);
	printf("���� : %s\n", c.author);
	printf("�������� : %d��\n", c.page);
	printf("���� : %d��\n", c.price);

}

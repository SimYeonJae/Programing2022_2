#include <stdio.h>

void input_data(int* a, int* b);
void swap_data(int* a, int* b);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);
	swap_data(&a, &b);
	print_data(a, b);

	return 0;
}

void input_data(int* a, int* b)
{
	printf("�� ���� �Է� :");
	scanf_s("%d%d", a, b);
}

void swap_data(int* a, int* b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

void print_data(int a, int b)
{
	printf("�� ���� ��� : %d, %d", a, b);
}
#include <stdio.h>

int sum(int a, int b)
{
	int temp;

	temp = a + b;

	return temp;
}

int sub(int a, int b)
{
	int temp;

	temp = a - b;

	return temp;
}

int mul(int a, int b)
{
	int temp;

	temp = a * b;

	return temp;
}

int div(int a, int b)
{
	int temp;

	temp = a / b;

	return temp;
}
int rem(int a, int b)
{
	int temp;
	
	temp = a % b;

	return temp;
}

int main(void)
{
	int a, b;

	printf("���� �Է�:");
	scanf_s("%d, %d", &a, &b);

	printf("���ϱ� : %d\n", sum(a, b));
	printf("���� : %d\n", sub(a, b));
	printf("���ϱ� : %d\n", mul(a, b));
	printf("������ : %d\n", div(a, b));
	printf("������ : %d\n", rem(a, b));
	return 0;
}
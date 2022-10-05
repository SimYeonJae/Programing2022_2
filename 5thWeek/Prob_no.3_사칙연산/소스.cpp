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

	printf("숫자 입력:");
	scanf_s("%d, %d", &a, &b);

	printf("더하기 : %d\n", sum(a, b));
	printf("빼기 : %d\n", sub(a, b));
	printf("곱하기 : %d\n", mul(a, b));
	printf("나누기 : %d\n", div(a, b));
	printf("나머지 : %d\n", rem(a, b));
	return 0;
}
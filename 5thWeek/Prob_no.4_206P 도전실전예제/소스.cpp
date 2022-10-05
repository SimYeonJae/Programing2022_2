#include<stdio.h>

int rec_sum(int n)
{
	if (n == 1) return 1;
	else return (n + rec_sum(n - 1));
}

int rec_sum(int n);

int main(void)
{
	int a;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("1부터 %d까지의 합 : %d", a, rec_sum(a));

	return 0;
}
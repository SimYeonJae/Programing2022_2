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
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("1���� %d������ �� : %d", a, rec_sum(a));

	return 0;
}
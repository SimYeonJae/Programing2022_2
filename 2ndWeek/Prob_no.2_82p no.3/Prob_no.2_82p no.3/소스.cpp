#include<stdio.h>

int main(void)
{
	char ch;

	printf("문자입력 : ");
	scanf_s("%c", &ch);
	printf("%c문자의 아스키 코드값은 %d입니다.", ch, ch);

	return 0;
}

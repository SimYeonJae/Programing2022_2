#include <stdio.h>
#include <stdlib.h>

// arithmeic operation

int main(void)
{
	int A = 0;
	int B = 0;
	char symbols;

	printf("input your arithmetic operation ; ");
	scanf_s("%d%c%d", &A, &symbols, 1, &B);

	switch (symbols)
	{
	case '+':
	{
		int value = A + B;
		printf("value : %d", value);
		
		break;
	}
	case '-':
	{
		int value = A - B;
		printf("value : %d", value);
		
		break;
	}
	case '*':
	{
		int value = A * B;
		printf("value : %d", value);
		
		break;
	}
	case '/':
	{
		int value = A / B;
		printf("value : %d", value);
		
		break;
	}

	return 0;
	}

}
#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(int* pa, int* pb);
void print_data(int a, int b);

int a, b;

int main(void)
{
    input_data(&a, &b);
    swap_data(&a, &b);
    print_data(a, b);

    return 0;
}

void input_data(int* pa, int* pb)
{
    printf(" �� ���� �Է� : ");
    scanf_s("%d%d", pa, pb);
}

void swap_data(int* pa, int* pb)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void print_data(int a, int b)
{
    printf("> �� ���� ��� : %d, %d\n", a, b);
}
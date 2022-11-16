#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int n;
    int* ap;
    int count = 2, i, j;
    printf("양수 입력 : ");
    scanf_s("%d", &n);
    ap = (int*)malloc((n - 1) * sizeof(int));

    if (ap == NULL)
    {
        printf("메모리 부족...\n");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        *(ap + i) = count;

        for (j = 2; j < count; j++)
        {
            if (count % j == 0)
                *(ap + i) = 'X';
        }

        if (*(ap + i) == 'X' && (i < n - 2))
            printf("%5c", *(ap + i));
        else if (i < (n - 2))
            printf("%5d", *(ap + i));
        if (i % 5 == 4)
            printf("\n");

        count++;
        if (count == n)
            break;
    }

    free(ap);

    return 0;
}


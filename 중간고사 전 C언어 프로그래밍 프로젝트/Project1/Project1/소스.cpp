#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
    // �� ���ึ�� �����ϰ� ���ֱ� ���� �ð� �ʱ�ȭ
    srand(time_t(NULL));

    // ������ 1 ~ 50�� ������ ������ ����
    int answer = rand() % 50 + 1;
    int input;

    // 1�̸� Y�� �����ϰ� ���� ����
    // 0�̸� N���� �����ϰ� ���� ����
    // �ʱⰪ�� Y�� �����Ͽ� ���� ���� �ǵ��� ����
    int flag = 1;

    while (flag) // flag == 1�� ���� ����
    {
        // n���� ��ȸ�� 3 ~ 10 ������ ����� ����
        int n = rand() % 7 + 3;

        // n�� ��ŭ �ݺ�
        for (int i = 0; i < n; i++)
        {
            // ���� �Է� �ޱ�
            printf("������ �Է��ϼ��� : ");
            scanf("%d", &input);

            // �������� ���� ǥ�� �� ����
            if (answer == input)
            {
                printf("������ ������ϴ� !");
                return 0;
            }
            // �Է°��� ������ UP�̶�� ǥ�� �� ���
            else if (answer > input)
            {
                printf("UP\n");
            }
            // �Է°��� ũ�� DOWN�̶�� ǥ�� �� ���
            else if (answer < input)
            {
                printf("DOWN\n");
            }
        }

        // ��ȸ�� �� ����ؼ� �ݺ����� ���� ���
        printf("��ȸ�� ��� ����ϼ̽��ϴ�.\n");
        printf("������ �ٽ� �����Ͻðڽ��ϱ�? (Y/N)");

        // Y �Ǵ� N���� ���� ����� �ǻ� ����
        char c;
        scanf(" %c", &c);

        // ������ϱ� -> continue�� while �ٽ� ����
        if (c == 'Y')
        {
            printf("������ �ٽ� �����մϴ� !\n");
            continue;
        }
        // �����ϱ� -> �÷��� 0���� �ٲ㼭 while Ż�� �� �����ϱ�
        else if (c == 'N')
        {
            printf("������ �����մϴ�.");
            flag = 0;
        }
    }
}
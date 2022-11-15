#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main(void)
{
    // 매 실행마다 랜덤하게 해주기 위한 시간 초기화
    srand(time_t(NULL));

    // 정답은 1 ~ 50의 범위로 무작위 설정
    int answer = rand() % 50 + 1;
    int input;

    // 1이면 Y로 간주하고 게임 진행
    // 0이면 N으로 간주하고 게임 종료
    // 초기값은 Y로 세팅하여 게임 실행 되도록 설정
    int flag = 1;

    while (flag) // flag == 1인 동안 실행
    {
        // n번의 기회는 3 ~ 10 사이의 양수로 설정
        int n = rand() % 7 + 3;

        // n번 만큼 반복
        for (int i = 0; i < n; i++)
        {
            // 정수 입력 받기
            printf("정수를 입력하세요 : ");
            scanf("%d", &input);

            // 맞췄으면 정답 표시 후 종료
            if (answer == input)
            {
                printf("정답을 맞췄습니다 !");
                return 0;
            }
            // 입력값이 작으면 UP이라고 표시 후 계속
            else if (answer > input)
            {
                printf("UP\n");
            }
            // 입력값이 크면 DOWN이라고 표시 후 계속
            else if (answer < input)
            {
                printf("DOWN\n");
            }
        }

        // 기회를 다 사용해서 반복문이 끝난 경우
        printf("기회를 모두 사용하셨습니다.\n");
        printf("게임을 다시 시작하시겠습니까? (Y/N)");

        // Y 또는 N으로 게임 재시작 의사 묻기
        char c;
        scanf(" %c", &c);

        // 재시작하기 -> continue로 while 다시 진행
        if (c == 'Y')
        {
            printf("게임을 다시 시작합니다 !\n");
            continue;
        }
        // 종료하기 -> 플래그 0으로 바꿔서 while 탈출 후 종료하기
        else if (c == 'N')
        {
            printf("게임을 종료합니다.");
            flag = 0;
        }
    }
}
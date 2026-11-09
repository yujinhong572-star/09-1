#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];
    int score[SIZE];

    // grade 배열에 0~99 사이의 난수 값 생성 및 저장
    for (i = 0; i < SIZE; i++)
    {
        grade[i] = rand() % 100;
    }

    // 배열 값 복사 (grade의 요소를 하나씩 score로 복사)
    for (i = 0; i < SIZE; i++)
    {
        score[i] = grade[i];
    }

    // 복사된 score 배열 값 출력
    for (i = 0; i < SIZE; i++)
    {
        printf("score[%d] = %d\n", i, score[i]);
    }

    return 0;
}
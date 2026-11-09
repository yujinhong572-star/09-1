#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i, average;
    int sum = 0;
    int grade[SIZE];

    // 반복문을 통해 성적 입력 및 합계 누적
    for (i = 0; i < SIZE; i++)
    {
        printf("학생 성적을 입력하세요 : ");
        scanf("%d", &grade[i]);
        sum += grade[i];
    }

    // 평균 계산 (정수 나눗셈)
    average = sum / SIZE;
    
    printf("성적 평균 : %d\n", average);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int grade[SIZE];

    printf("5명의 점수를 입력하세요. \n");
    
    // 반복문을 이용한 성적 입력
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &grade[i]);
    }

    // 반복문을 이용한 성적 출력
    for (i = 0; i < SIZE; i++)
    {
        printf("grade[%d] = %d\n", i, grade[i]);
    }

    return 0;
}
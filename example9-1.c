#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];

    // 배열 요소에 값 저장
    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;

    // 반복문을 이용한 배열 값 출력
    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = %d\n", i, grade[i]);
    }

    return 0;
}
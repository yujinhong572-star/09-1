#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 9, 4, 5}; // 비교를 위해 2번 인덱스 값을 다르게 설정
    int flag_same = 1; // 두 배열이 같다고 가정 (1: 같음, 0: 다름)

    // 반복문을 통해 인덱스 별로 요소 각각 비교
    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("인덱스 %d의 값이 다릅니다. (a[%d] = %d, b[%d] = %d)\n", i, i, a[i], i, b[i]);
            flag_same = 0; // 다른 값이 발견되었으므로 0으로 변경
        }
    }

    // 최종 결과 출력
    if (flag_same == 1)
    {
        printf("배열은 같은 값을 가집니다.\n");
    }
    else
    {
        printf("배열은 다른 값을 가집니다.\n");
    }

    return 0;
}
#include <stdio.h>
#define SIZE 4

// 함수 프로토타입 선언
void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void)
{
    int list[SIZE] = {1, 2, 3, 4};

    // 변경 전 배열 출력
    print_array(list, SIZE);

    // 배열의 각 요소를 제곱으로 변환하는 함수 호출 (원본 배열 변경)
    square_array(list, SIZE);

    // 변경 후 배열 출력
    print_array(list, SIZE);

    return 0;
}

// 배열의 각 요소에 제곱을 수행하는 함수
void square_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        a[i] = a[i] * a[i];
    }
}

// 배열의 요소들을 출력하는 함수
void print_array(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}
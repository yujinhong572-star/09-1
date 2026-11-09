#include <stdio.h>

#define ROWS 3
#define COLS 3

// 함수 프로토타입 선언
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS]);
void printMatrix(int A[][COLS]);

int main(void)
{
    // 더하기 대상 행렬 A 초기화
    int A[ROWS][COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
    };

    // 더하기 대상 행렬 B 초기화 (단위 행렬)
    int B[ROWS][COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    // 덧셈 결과를 저장할 행렬 C 선언
    int C[ROWS][COLS];

    // 행렬 덧셈 함수 호출 (C = A + B)
    addMatrix(A, B, C);

    // 결과 행렬 출력 함수 호출
    printMatrix(C);

    return 0;
}

// 행렬 덧셈 함수 (C = A + B)
void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// 행렬 출력 함수
void printMatrix(int A[][COLS])
{
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n"); // 행을 다 출력하면 줄바꿈
    }
}
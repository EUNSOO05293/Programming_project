/*
 파일명: Assignment10-c
 내용: 3x3 행렬의 합을 구하는 프로그램을 작성하시오.
 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
 작성자: 이은수
 날짜: 2025.05.28
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fillAndPrintMatrices();

int main(void) {
    fillAndPrintMatrices(); 
    return 0;
}

void fillAndPrintMatrices() {
    int arr[2][9];
    int i, x_value = 0, y_value = 9;

    printf("x 행렬:\n");
    for (i = 0; i < 9; i++) {
        x_value += 10;
        arr[0][i] = x_value;
        printf(" %2d", arr[0][i]);
        if (i % 3 == 2)
            printf("\n");
    }

    printf("\ny 행렬:\n");
    for (i = 0; i < 9; i++) {
        arr[1][i] = y_value;
        y_value--;
        printf(" %2d", arr[1][i]);
        if (i % 3 == 2)
            printf("\n");
    }

    printf("\nx + y 행렬:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2)
            printf("\n");
    }
}

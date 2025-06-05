/*
 파일명: Assignment6-c
 내용: 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
 실수형 배열의 초기값은 마음대로 정하시오.
 작성자: 이은수
 날짜: 2025.05.28
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printReverse(float arr[], int size);

int main(void) {
    float arr[10] = { 1.3, 4.1, 3.3, 7.4, 6.5, 4.9, 8.1, 4.6, 5.1, 2.3 };
    int size = 10;

    printReverse(arr, size);

    return 0;
}

void printReverse(float arr[], int size) {
    int i;
    printf("배열:");
    for (i = 0; i < size; i++) {
        printf(" %.1f", arr[i]);
    }

    printf("\n역순:");
    for (i = size - 1; i >= 0; i--) {
        printf(" %.1f", arr[i]);
    }
    printf("\n");
}

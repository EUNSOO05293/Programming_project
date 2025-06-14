/*
 파일명: Assignment4-c
 내용: 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소중 최댓값을 가진 원소와
 최소값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오. 배열의 초기 값은 마음대로 정하시오.
 작성자: 이은수
 날짜: 2025.05.28
 버전 : v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    int max_idx = 0, min_idx = 0;

    printf("배열: ");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
        if (max < arr[i]) {
            max = arr[i];
            max_idx = i;
        }
        if (min > arr[i]) {
            min = arr[i];
            min_idx = i;
        }
    }
    printf("\n최대값: 인덱스=%d 값=%d", max_idx, max);
    printf("\n최소값: 인덱스=%d 값=%d\n", min_idx, min);
}
int main() {
    int data[10] = { 23,45,62, 12, 99,83 ,23, 50, 72,37 };
    int size = 10;

    Arr(data, size);

    return 0;
}

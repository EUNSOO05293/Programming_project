/*
 ���ϸ�: Assignment6-c
 ����: ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
 �Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.05.28
 ���� : v0.1
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
    printf("�迭:");
    for (i = 0; i < size; i++) {
        printf(" %.1f", arr[i]);
    }

    printf("\n����:");
    for (i = size - 1; i >= 0; i--) {
        printf(" %.1f", arr[i]);
    }
    printf("\n");
}

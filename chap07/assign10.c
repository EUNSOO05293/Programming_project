/*
 ���ϸ�: Assignment10-c
 ����: 3x3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
 �ۼ���: ������
 ��¥: 2025.05.28
 ���� : v0.1
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

    printf("x ���:\n");
    for (i = 0; i < 9; i++) {
        x_value += 10;
        arr[0][i] = x_value;
        printf(" %2d", arr[0][i]);
        if (i % 3 == 2)
            printf("\n");
    }

    printf("\ny ���:\n");
    for (i = 0; i < 9; i++) {
        arr[1][i] = y_value;
        y_value--;
        printf(" %2d", arr[1][i]);
        if (i % 3 == 2)
            printf("\n");
    }

    printf("\nx + y ���:\n");
    for (i = 0; i < 9; i++) {
        printf(" %2d", arr[0][i] + arr[1][i]);
        if (i % 3 == 2)
            printf("\n");
    }
}

/*
 ���ϸ�: Assignment4-c
 ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ������ �ִ��� ���� ���ҿ�
 �ּҰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� �ʱ� ���� ������� ���Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.05.28
 ���� : v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    int max_idx = 0, min_idx = 0;

    printf("�迭: ");
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
    printf("\n�ִ밪: �ε���=%d ��=%d", max_idx, max);
    printf("\n�ּҰ�: �ε���=%d ��=%d\n", min_idx, min);
}
int main() {
    int data[10] = { 23,45,62, 12, 99,83 ,23, 50, 72,37 };
    int size = 10;

    Arr(data, size);

    return 0;
}

/*
 ���ϸ�: Assignment12-c
 ����: ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
 ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ� O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻�
 ������ �� ������ ���α׷��� �����Ѵ�.
 �ۼ���: ������
 ��¥: 2025.05.28
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reserveSeats();

int main(void) {
    reserveSeats();
    return 0;
}
void reserveSeats() {
    int i, select;
    int seats[10] = { 0 };

    while (seats[9] == 0) {
        printf("���� �¼�: [");
        for (i = 0; i < 10; i++) {
            if (seats[i] == 0)
                printf(" O");  
            else
                printf(" X"); 
        }
        printf(" ]\n������ �¼���? ");
        scanf("%d", &select);

        for (i = 0; i < 10 && select > 0; i++) {
            if (seats[i] == 0) {
                seats[i] = 1;
                printf("%d ", i + 1);
                select--;
            }
        }
        printf("�� �¼��� �����߽��ϴ�.\n\n");
    }
}

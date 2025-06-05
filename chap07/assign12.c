/*
 파일명: Assignment12-c
 내용: 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자.
 예매할 좌석수를 입력받아 빈 자리를 할당한다. 예매할 때마다 각 좌석의 상태를 출력한다 O이면 예매 가능, X는 예매 불가를 의미한다. 더 이상
 예매할 수 없으면 프로그램을 종료한다.
 작성자: 이은수
 날짜: 2025.05.28
 버전 : v0.1
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
        printf("현재 좌석: [");
        for (i = 0; i < 10; i++) {
            if (seats[i] == 0)
                printf(" O");  
            else
                printf(" X"); 
        }
        printf(" ]\n예매할 좌석수? ");
        scanf("%d", &select);

        for (i = 0; i < 10 && select > 0; i++) {
            if (seats[i] == 0) {
                seats[i] = 1;
                printf("%d ", i + 1);
                select--;
            }
        }
        printf("번 좌석을 예매했습니다.\n\n");
    }
}

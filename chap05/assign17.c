/*
 파일명: Assignment17-c
 내용: 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Park()
{
    int minute, price_type, price;
    printf("주차 시간(분)? ");
    scanf("%d", &minute);

    price_type = minute / 10;

    if (minute % 10 != 0) price_type++;

    if (price_type >= 3)
    {
        price = 2000;
        price_type -= 3;
    }

    if (price_type < 24)
    {
        price += 1000 * price_type;
    }
    else
    {
        price = 25000;
    }
    printf("주차요금: %d원", price);
    return;
}

int main()
{
    Park();
    return 0;
}
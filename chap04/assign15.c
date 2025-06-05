/*
 파일명: Assignment15-c
 내용: 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지 출력하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.09
 버전 : v0.3
*/

#define _CRT_SECURE_NO_WARNINGS
#define Exc_Fee 1.75
#include <stdio.h>

void CalculateExchange(void);

int main()
{
    CalculateExchange();
    return 0;
}

void CalculateExchange(void)
{
    double baseRate, discountRate, dollarsToBuy, wonAmount, feeAmount, finalRate;

    printf("원/달러 매매기준율? ");
    scanf("%lf", &baseRate);

    printf("환율우대율(0~100%%)? ");
    scanf("%lf", &discountRate);

    feeAmount = baseRate * (Exc_Fee / 100.0) * (1.0 - discountRate / 100.0);
    finalRate = baseRate + feeAmount;

    printf("달러 살 때 환율은 %.6f입니다.\n", finalRate);

    printf("구입할 달러(USD)? ");
    scanf("%lf", &dollarsToBuy);

    wonAmount = dollarsToBuy * finalRate;

    printf("USD %.2f 살때 ==> KRW %.2f\n", dollarsToBuy, wonAmount);
    return;
}
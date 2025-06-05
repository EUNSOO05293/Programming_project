/*
 파일명: Assignment9-c
 내용: 햄버거 가계의 계산서 프로그램을 작성하시오.
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hamburger()
{
    int hamburger_price = 4000;
    int french_fries_price = 2000;
    int coke_price = 1500;
    int combo_price = 6500;

    int hamburger = 0, french_fries = 0, coke = 0, combo = 0;
    int total = 0;

    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

    printf("햄버거 개수? ");
    scanf("%d", &hamburger);
    printf("감자튀김 개수? ");
    scanf("%d", &french_fries);
    printf("콜라 개수? ");
    scanf("%d", &coke);

    printf("\n");

    while (1)
    {
        if (hamburger > 0 && french_fries > 0 && coke > 0)
        {
            hamburger--;
            french_fries--;
            coke--;
            combo++;
        }
        else
        {
            total += combo * combo_price;
            total += hamburger * hamburger_price;
            total += french_fries * french_fries_price;
            total += coke * coke_price;
            break;
        }
    }

    printf("상품명      단가   수량   금액\n");
    printf("세트        %4d   %3d  %6d\n", combo_price, combo, combo * combo_price);
    printf("햄버거      %4d   %3d  %6d\n", hamburger_price, hamburger, hamburger * hamburger_price);
    printf("감자튀김    %4d   %3d  %6d\n", french_fries_price, french_fries, french_fries * french_fries_price);
    printf("------------------------------\n");
    printf("합계                   %7d\n", total);

    return;
}
int main()
{
    hamburger();
    return 0;
}
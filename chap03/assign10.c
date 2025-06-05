/* 파일명 Assignment-10.c
 * 작성자: 이은수
 * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void USD_WON(void)
{
	double USD, KRW;

	printf("USD? ");
	scanf("%lf", &USD);

	printf("원/달러 환율?");
	scanf("%lf", &KRW);

	printf("USD %.2f = KRW %.2f\n", USD, USD * KRW);

	return;
}
int main(void)
{
	USD_WON();
	return 0;
}
/*
 파일명: Assignment02-c
 내용: 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.11
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fahreheitToCelsius(void);

int main()
{
	fahreheitToCelsius();
	return 0;
}

void fahreheitToCelsius(void)
{
	double a, b;

	printf("화씨온도?");
	scanf("%lf", &a);

	b = (a - 32) * 5.0 / 9.0;
	printf("%.2f F = %.2f C\n", a, b);

	return;
}
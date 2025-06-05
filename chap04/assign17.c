/*
 파일명: Assignment17-c
 내용: 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.11
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BIT(void);

int main(void)
{
	BIT();
	return 0;
}

void BIT()
{
	unsigned int a = 1;

	a = a << 7;
	printf("7번 비트만 1인 값: %08x %d\n", a, a);

	a = a << 8;
	printf("15번 비트만 1인 값: %08x %d\n", a, a);

	a = a << 8;
	printf("23번 비트만 1인 값: %08x %d\n", a, a);

	a = a << 8;
	printf("31번 비트만 1인 값: %08x %d\n", a, a);

	return;
}
/* 파일명 Assignment-07.c
 * 작성자: 이은수
 * 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램 작성
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Squre(void)
{
	double value;
	printf("실수");
	scanf("%lf", &value);

	printf("제곱: %e\n", value * value);
	printf("세제곱: %e\n", value * value * value);
}

int main()
{
	Squre();
	return 0;
}
/*
 파일명: Assignment8-c
 내용: 비트 연산을 수행하는 계산기를 프로그램 하시오.
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BIT()
{
	unsigned int x, y, result = 0;
	char ch;
	printf("비트 연산식? ");
	scanf("%x %c %x", &x, &ch, &y);

	if (ch == '&')
	{
		result = x & y;
	}
	else if (ch == '^')
	{
		result = x ^ y;
	}
	else if (ch == '|')
		result = x | y;

	printf("%X %c %X = %8x", x, ch, y, result);
}

int main()
{

	BIT();
	return 0;
}
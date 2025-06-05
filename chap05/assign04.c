/*
 파일명: Assignment4-c
 내용: 연도를 입력받아 윤년이지 검사하는 프로그램을 작성하시오
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void year()
{
	int year;
	printf("연도? ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				printf("%d년은 윤년입니다.", year);
			else
				printf("%d년은 평년 입니다", year);
		}
		else
			printf("%d년은 윤년 입니다.", year);
	}
	else
		printf("%d년은 평년입니다", year);
	return;
}

int main()
{
	year();
	return 0;
}
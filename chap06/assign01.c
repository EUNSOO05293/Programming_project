/*
 파일명: Assignment1-c
 내용: 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
 작성자: 이은수
 날짜: 2025.05.20
 버전 : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int x, int y);

int main()
{
	int x, y;

	printf("가로?");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	printf("직사각형의 둘레: %d", get_perimeter(x, y));

	return 0;
}

int get_perimeter(int x, int y)
{
	int circumference;

	circumference = x * 2;
	circumference += y * 2;

	return circumference;
}
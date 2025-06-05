/*
 파일명: Assignment1-c
 내용: 점의 좌표(x,y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void Screen()
{
	int left, right, top, bottom, x, y;

	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && right < y < bottom)
		printf("직사각형 모양의 선택 영역 내의 점입니다.");
	else
		printf("직사각형 모양의 선택 영역 내의 점이 아닙니다.");

}

int main()
{
	Screen();
	return 0;
}
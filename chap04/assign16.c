/*
 파일명: Assignment16-c
 내용: 0~255 사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.11
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Rgb(void);

int main(void)
{
	Rgb();
	return 0;
}

void Rgb(void)
{
	int red, green, blue, value = 0;

	printf("red?");
	scanf("%d", &red);
	red %= 255;

	printf("green?");
	scanf("%d", &green);
	green %= 255;

	printf("blue?");
	scanf("%d", &blue);
	blue %= 255;

	value += blue * 255 * 255;
	value += green * 255;
	value += red;

	printf("RGB 트루컬러: %06X", value);
	return;
}
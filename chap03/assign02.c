/* 파일명 Assignment-02.c
 * 작성자: 이은수
 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램 작성
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Oblong(void)
{
	int width, height, result;

	printf("가로의 길이?");
	scanf("%d", &width);

	printf("세로의 길이?");
	scanf("%d", &height);

	result = width * height;
	printf("직사강형의 넓이: %d\n", result);

	result = 2 * (width + height);
	printf("직사각형의 둘레: %d\n", result);
}

int main()
{
	Oblong();
	return 0;
}
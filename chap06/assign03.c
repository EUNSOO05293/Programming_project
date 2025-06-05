/*
 파일명: Assignment3-c
 내용: distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.
 작성자: 이은수
 날짜: 2025.05.20
 버전 : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2);

int main()
{
	int x1, y1, x2, y2;
	printf("직선의 시작점 좌표?");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표?");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %.6f", x1, y1, x2, y2, distance(x1, y1, x2, y2));

	return 0;
}

float distance(int x1, int y1, int x2, int y2)
{
	int width = pow(x2 - x1, 2);
	int length = pow(y2 - y1, 2);

	return sqrt(width + length);

}
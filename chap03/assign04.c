/* 파일명 Assignment-04.c
 * 작성자: 이은수
 * 내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램 작성
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Calculate_work(void)
{
	double force, distance, work;

	printf("힘(N)?");
	scanf("%lf", &force);

	printf("이동거리(m)? ");
	scanf("%lf", &distance);

	work = force * distance;

	printf("일의 양: %.2lf", work);

	return;
}

int main()
{
	Calculate_work();
	return 0;
}
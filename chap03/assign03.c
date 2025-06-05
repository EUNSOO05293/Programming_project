/* 파일명 Assignment-03.c
 * 작성자: 이은수
 * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double CalcPositionEnergy(int weight, int height)
{
	double energy;
	energy = 9.8 * weight * height;
	return energy;
}

void Assignment03(void)
{
	int kg, m;
	double energy;


	printf("질랑(kg)?");
	scanf("%d", &kg);

	printf("높이(m)?");
	scanf("%d", &m);

	energy = CalcPositionEnergy(kg, m);
	printf("위치에너지: %6.1lf\n", energy);

	return;
}

int main()
{
	Assignment03();
	return 0;
}
/* 파일명 Assignment-06.c
 * 작성자: 이은수
 * 내용: 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램 작성
 * 날짜: 2025.04.02
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define m2 = 0.3025


void Convert_area(void)
{
	double squre_master = 0, pyeong = 0;

	printf("아파트의 면적(제곱미터)?");
	scanf("%lf", &squre_master);

	pyeong = squre_master * m2;

	printf("%.2f 제곱미터 = %.2f 평", squre_master, pyeong);

	return;
}
int main()
{
	Convert_area();
	return 0;
}
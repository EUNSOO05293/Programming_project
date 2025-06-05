/* 파일명 Assignment-11.c
 * 작성자: 이은수
 * 내용: PA11.원주율 파이값이 3.14159265 할때, 파이 값을 여러 가지 방법으로 출력하는 프로그램 작성
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Pi(void)
{
	double pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);

}

int main(void)
{
	Pi();
	return 0;

}
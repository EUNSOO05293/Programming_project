/* 파일명 Assignment-09.c
 * 작성자: 이은수
 * 내용: PA09. 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HexToint(void)
{
	int num;

	printf("16진수 정수?");
	scanf("%x", &num);
	printf("16진수 %x는 10진수로 %d입니다", num, num);

}

int main(void)
{
	HexToint();
	return 0;
}
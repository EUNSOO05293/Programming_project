/* 파일명 Assignment-10.c
 * 작성자: 이은수
 * 내용: PA10. 정수를 8진수, 10진수, 16진수, 16진수 중하나로 입력받아 8진수,
 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램 작성
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coverted_num(void)
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하면 0x12처럼 입력하세요.\n");
	printf("정수?");

	scanf("%x", &num);

	printf("8진수: 0%o\n", num);
	printf("10진수: %d\n", num);
	printf("16진수: 0x%x\n", num);
}

int main(void)
{
	Coverted_num();
	return 0;
}
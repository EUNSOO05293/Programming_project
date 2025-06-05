/* 파일명 Assignment-02.c
 * 작성자: 이은수
 * 내용 : PA02. 학생의 번호화 학점을 입력받아 출력하는 프로그램을 작성
 학생의 번호는 정수로, 학점은 실수로 입력받는다
 * 날짜: 2025.3.20
  버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Student(void) {

	int num;
	double grade;

	printf("번호?");
	scanf("%d", &num);
	printf("학점?");
	scanf("%6lf,", &grade);

	printf("%d 학생의 학점은 %.6f 입니다", num, grade);
	return;

}

int main(void)
{
	Student();
	return 0;
}
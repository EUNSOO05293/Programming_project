/*
 파일명: Assignment-5
 내용: 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Temp()
{
	double temp;
	char ch;
	printf("온도? ");
	scanf("%lf %c", &temp, &ch);

	if (ch == 'C')
	{
		printf("%.2lf C ==> %.2lf F", temp, (temp * (9.0 / 5.0)) + 32);
	}

	if (ch == 'F')
	{
		printf("%.2lf F ==> %.2lf C", temp, (temp - 32.0) * (5.0 / 9.0));
	}
}

int main()
{
	Temp();
	return 0;
}
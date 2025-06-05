/*
 파일명: Assignment13-c
 내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오. 직사각형은 좌하단점과 우상단점으로 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타낸다.
 직사각형 정보를 출력하는 print_rect함수를 정의하고, RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.
 작성자: 이은수
 날짜: 2025.06.04
 버전 : v0.1
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct POINT {
	int x;
	int y;
};

struct RECT {
	struct POINT left_bottom;  
	struct POINT right_top;  
};

void rect() {
	struct RECT r;

	printf("직사각형의 좌하단점(x y)? ");
	scanf("%d %d", &r.left_bottom.x, &r.left_bottom.y);

	printf("직사각형의 우상단점(x y)? ");
	scanf("%d %d", &r.right_top.x, &r.right_top.y);

	printf("[RECT 좌하단점: (%d, %d), 우상단점: (%d, %d)]\n",
		r.left_bottom.x, r.left_bottom.y,
		r.right_top.x, r.right_top.y);
}

int main() {
	rect();
	return 0;
}
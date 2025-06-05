/*
 ���ϸ�: Assignment13-c
 ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����.
 ���簢�� ������ ����ϴ� print_rect�Լ��� �����ϰ�, RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.06.04
 ���� : v0.1
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

	printf("���簢���� ���ϴ���(x y)? ");
	scanf("%d %d", &r.left_bottom.x, &r.left_bottom.y);

	printf("���簢���� ������(x y)? ");
	scanf("%d %d", &r.right_top.x, &r.right_top.y);

	printf("[RECT ���ϴ���: (%d, %d), ������: (%d, %d)]\n",
		r.left_bottom.x, r.left_bottom.y,
		r.right_top.x, r.right_top.y);
}

int main() {
	rect();
	return 0;
}
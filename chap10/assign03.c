/*
 ���ϸ�: Assignment3-c
 ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
���̵� �Է¹޾Ƽ� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�.
LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�. 
 �ۼ���: ������
 ��¥: 2025.06.04
 ���� : v0.1
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct login {
	char id[20];
	char pw[20];
} LOGIN;

void login() {
	LOGIN info[5] = {
		{"qwer", "1234"},
		{"asdf", "5678"},
		{"qpwoeiru", "zxcv"},
		{"guest", "idontknow"},
		{"������", "���̻��"}
	};
	LOGIN data;
	int num = 0;
	int a;

	while (1) {
		num = 0;
		printf("ID? ");
		scanf("%s", data.id);

		if (strcmp(data.id, ".") == 0) break;

		printf("PW: ");
		scanf("%s", data.pw);

		for (a = 0; a < 5; a++) {
			if (strcmp(info[a].id, data.id) == 0 && strcmp(info[a].pw, data.pw) == 0) {
				printf("�α��� ����\n");
				a = 1;
				break;
			}
		}
		if (num == 0)
			printf("�α��� ����\n");
	}
}
int main() {
	login(); 
	return 0;
}

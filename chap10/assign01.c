/*
 ���ϸ�: Assignment1-c
 ����: ���ͳ� ����Ʈ�� �α��� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
 ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
 �ۼ���: ������
 ��¥: 2025.06.04
 ���� : v0.1
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct login
{
	char id[21];
	char pw[21];
};

void Login() {
	struct login data;
	int a;

	printf("ID? ");
	scanf("%s", data.id);

	printf("Password? ");
	scanf("%s", data.pw);

	printf("ID : %s\n", data.id);
	printf("PW : ");
	for (a = 0; a < 20; a++) {
		if (data.pw[a] == '\0') 
			break;
		printf("*");
	}
	printf("\n");
}

int main()
{
	Login(); 
	return 0;
}

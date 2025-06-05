/*
 파일명: Assignment1-c
 내용: 인터넷 사이트에 로그할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
 아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
 작성자: 이은수
 날짜: 2025.06.04
 버전 : v0.1
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

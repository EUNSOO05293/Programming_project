/*
 파일명: Assignment3-c
 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
아이디를 입력받아서 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다.
LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다. 
 작성자: 이은수
 날짜: 2025.06.04
 버전 : v0.1
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
		{"가나다", "일이삼사"}
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
				printf("로그인 성공\n");
				a = 1;
				break;
			}
		}
		if (num == 0)
			printf("로그인 실패\n");
	}
}
int main() {
	login(); 
	return 0;
}

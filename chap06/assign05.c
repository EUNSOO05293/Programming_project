/*
 파일명: Assignment5-c
 내용: 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하시오.
       두 함수를 이용해서 0이 이력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.
 작성자: 이은수
 날짜: 2025.05.20
 버전 : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int is_odd(int n) {
    return n % 2 != 0;
}

int main()
{
    int val = 0, even = 0, odd = 0;
    printf("정수를 빈칸으로 구분해서 입력하세요 (마지막에 0 입력):\n");

    do
    {
        scanf("%d", &val);
        if (val == 0)
            break;

        if (is_even(val))
            even++;
        else if (is_odd(val))
            odd++;

    } while (1);

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even, odd);

    return 0;
}
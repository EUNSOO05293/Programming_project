/*
 파일명: Assignment9-c
 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를
 정의하시오. 앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의
 보색을 구해서 출력하는 프로그램 작성
 작성자: 이은수
 날짜: 2025.05.20
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(int rgb) {
    return (rgb >> 16) & 0xFF;
}

int get_green(int rgb) {
    return (rgb >> 8) & 0xFF;
}

int get_blue(int rgb) {
    return rgb & 0xFF;
}


int make_rgb(int r, int g, int b) {
    return (r << 16) | (g << 8) | b;
}

int main() {
    int rgb;
    printf("RGB 색상?");
    scanf("%x", &rgb);

    printf("RGB %06X의 보색: ", rgb);

    int r = get_red(rgb);
    int g = get_green(rgb);
    int b = get_blue(rgb);

    int comp_r = 255 - r;
    int comp_g = 255 - g;
    int comp_b = 255 - b;

    int comp_rgb = make_rgb(comp_r, comp_g, comp_b);

    printf("%06X\n", comp_rgb);

    return 0;
}
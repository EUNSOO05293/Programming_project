/*
 파일명: Assignment01-c
 내용: Chap-04-01 문제 - 질량과 속력을 입력 받아 운동에너지를 출력하는 프로그램
 작성자: 이은수
 날짜: 2025.04.09
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401(void);
double getMotionEnergy(double weight, double velocity);

int main(void)
{
    int r = assignment0401();
    return r;
}

/*
 * 함수명: assignment0401()
 * 기능: 질량, 속력을 입력받고, 운동 에너지를 계산해서 출력함
 * 입력: 없음
 * 반환: 0 (성공), 다른 값은 에러
 */
int assignment0401(void)
{
    // 1. 질량과 속도 입력 받아 저장
    double weight = 0.0, velocity = 0.0;
    printf("질량과 속도를 입력해주세요: ");
    scanf("%lf %lf", &weight, &velocity);

    // 2. 운동에너지 계산
    double result = getMotionEnergy(weight, velocity);

    // 3. 계산된 운동에너지 출력
    printf("질량 = %.2f kg, 속력 = %.2f m/s 의 운동에너지는 %.2f J입니다.\n", weight, velocity, result);
    return 0;
}

/*
 * 함수명: getMotionEnergy()
 * 기능: 질량과 속력을 받아 운동에너지를 계산하여 반환
 * 입력: 질량(kg), 속력(m/s)
 * 반환: 운동에너지 (J)
 */
double getMotionEnergy(double weight, double velocity)
{
    double energy = 0.0;
    //에너지 = 1/2 * 질량 * 속도 * 속도
    energy = 0.5 * weight * velocity * velocity;
    return energy;
}
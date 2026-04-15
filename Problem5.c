#include <stdio.h> // 표준 입출력 헤더 포함

int main() { // 프로그램 시작점
    int a = 5; // 정수형 변수 a 선언 및 5로 초기화
    int b = 2; // 정수형 변수 b 선언 및 2로 초기화
    float result; // 나눗셈 결과를 저장할 실수형 변수 선언

    result = (float)a / b; // a를 float으로 형변환 후 나눠 실수 나눗셈 수행 (원래 정수 나눗셈으로 2.0 반환하는 논리 오류)
    printf("5 나누기 2는 %f입니다.\n", result); // result를 소수점 형식으로 출력
    return 0; // 프로그램 정상 종료
}

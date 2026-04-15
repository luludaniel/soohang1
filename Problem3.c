#include <stdio.h>

int main() {
    int a = 10; // 세미콜론 추가 (원래 누락)
    int b = 20;
    int sum = a + b; // int 타입 선언 추가 (원래 sum 변수 미선언)
    printf("합계는 %d\n", sum); // 세미콜론 추가 (원래 누락)
    return 0;
}

#include <stdio.h>

int main() {
    char grade;
    printf("등급 입력: ");
    scanf("%c", &grade); // char형이므로 %c 사용 (원래 %d는 잘못된 포맷)
    printf("당신의 등급은 %c입니다.\n", grade);
    return 0;
}

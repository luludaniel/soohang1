#include <stdio.h>

int main() {
    int age;
    printf("나이 입력: ");
    scanf("%d", &age); // &age로 주소 전달 (원래 age만 있어 오류)
    printf("당신의 나이는 %d살입니다.\n", age);
    return 0;
}

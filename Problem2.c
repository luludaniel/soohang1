#include <stdio.h>

int main() {
    float height;
    printf("키 입력: ");
    scanf("%f", &height); // float형이므로 %f 사용 (원래 %d는 잘못된 포맷)
    printf("당신의 키는 %fcm입니다.\n", height);
    return 0;
}

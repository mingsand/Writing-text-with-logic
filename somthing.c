#include <stdio.h>
#include <unistd.h>  

void printWithDelay(const char *str, unsigned int delay);

int main() {
    const char *message = "나는 샌드위치다.";
    unsigned int delay = 200000;  // 0.2초 (200,000 마이크로초)

    printWithDelay(message, delay);

    return 0;
}

void printWithDelay(const char *str, unsigned int delay) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        fflush(stdout);  // 출력 버퍼를 비우기
        usleep(delay);  // 주어진 시간 만큼 대기
        i++;
    }
    printf("\n");  // 마지막에 줄바꿈 추강ㅇ
}
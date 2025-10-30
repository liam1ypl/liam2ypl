//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>

int main() {
    int num = 100; 
    int digit1, digit2, digit3;
    int first = 1; 
    while (num <= 999) {
        digit1 = num / 100;
        digit2 = (num / 10) % 10;
        digit3 = num % 10;
        if (digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == num) {
            if (first) {
                printf("%d", num);
                first = 0;         
            } else {
                printf(" %d", num); 
            }
        }

        num++; 
    }

    return 0;
}
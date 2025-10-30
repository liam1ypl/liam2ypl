//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3; 
    int first = 1; 
    for (num = 100; num <= 999; num++) {
        digit1 = num / 100;          
        digit2 = (num / 10) % 10;    
        digit3 = num % 10;           
        if (digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3 == num) {
            if (first) {
                printf("%d", num); 
                first = 0;
            } else {
                printf(" %d", num); 
            }
        }
    }

    return 0;
}
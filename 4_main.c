//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>

void increment(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        (*(arr + i))++;
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    increment(arr, 5); 
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


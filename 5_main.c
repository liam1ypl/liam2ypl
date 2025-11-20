//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
void shiftArray(int *ptr_arr, int len) {
    for (int i = len - 1; i > 0; i--) {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    *ptr_arr = 0; 
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    shiftArray(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

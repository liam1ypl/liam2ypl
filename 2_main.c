//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
int main() {
    int arr[5];
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr;
    for (i = 0; i < 5; i++) {
        *(p + i) *= 2;
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}
 

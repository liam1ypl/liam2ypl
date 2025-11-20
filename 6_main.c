//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
#include <stdlib.h> 
int main() {
    int *arr = (int *)malloc(5 * sizeof(int)); 
    for (int i = 0; i < 5; i++) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    free(arr); 
    arr = NULL;  
    return 0;
}

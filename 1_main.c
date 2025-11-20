//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;
    *p += 10;
    printf("%d,%d\n", a, *p);
    return 0;
}
 

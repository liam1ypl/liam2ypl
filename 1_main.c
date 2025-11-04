//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("请输入3*3矩阵(每行3个数字,共3行):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("输出：\n");
    for (int i = 0; i < 3; i++) {
        
        printf("%d", matrix[i][0]);
        
        for (int j = 1; j < 3; j++) {
            printf(" %d", matrix[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}
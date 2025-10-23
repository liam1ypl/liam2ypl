//202510304214
//647363360@qq.com
//杨攀亮
#include<stdio.h>
int main()
{
    int score;
    printf("请输入学生成绩：");
    scanf("%d",&score);
    if (score >= 90 && score <= 100){
        printf("A\n");
    } else if (score >= 80 && score <= 89){
        printf("B\n");
    } else if (score >= 70 && score <= 79){
        printf("C\n");
    } else if (score >= 60 && score <= 69){
        printf("D\n");
    } else if  (score >= 0 && score < 60){
        printf("E\n");
    } else {
        printf("成绩无效(请输入0-100之间的整数 \n)");
    }
    return 0;
}






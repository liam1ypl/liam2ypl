//202510304214
//647363360@qq.com
//杨攀亮
#include<stdio.h>
int arithmeticSum(int a1,int an,int step)
{
    int n=(an-a1)/step + 1;
    return n*(a1 + an) / 2;
}
int main()
{
    int result =arithmeticSum(1,100,1);
    printf("%d\n",result);
    return 0;
}
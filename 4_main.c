//202510304214
//647363360@qq.com
//杨攀亮
#include<stdio.h>
int power(int a,int b){
        int result=1;
        for(int i = 0;i < b;i++){
            result*=a;
        }
        return result;
 }
int main()
{
    int sum = 0;
    for(int i = 1;i <= 5;i++){
        sum +=power(i,2);
    }
    printf("输出:%d\n",sum);
    return 0;
}




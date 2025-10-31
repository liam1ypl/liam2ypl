//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    if(n <=1){
        return false;
    }if(n == 2){
        return true;
    }if(n % 2==0){
        return false;
    }
    for(int i=3;i * i <=n;i+=2){
        if(n % i==0){
            return false;
        }
    }
    return true;


}
int main()
{
    int n;
    printf("请输入一个小于50的正整数:");
    scanf("%d",&n);

}


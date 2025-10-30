#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n)
{
    if(n<2){
        return false;
    }
    for(int i=2;i * i <= n; i++){
        if(n % i ==0){
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
    if (n<=0 || n>=50){
        printf("请输入一个小于50的正整数");
        return 0;
    }
    if(isPrime(n)){
        printf("密钥正确，密码设置成功\n");
    } else{
        printf("密钥不安全，请重新输入\n");
    }
    return 0;

}
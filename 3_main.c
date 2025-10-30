#include <stdio.h>
int isPrime(int n)
{
    if(n<2){
        return 0;
    }
    int i=2;
    while(i*i <=n){
        if(n % i ==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int n;
    while(1){
    printf("请输入一个小于50的正整数:");
    scanf("%d",&n);
    if(n>0  && n< 50){
        break;
    }
       printf("输入不合法，请重新输入\n");
}
    if(isPrime(n)){
        printf("密钥正确，密码设置成功\n");
    } else{
        printf("密钥不安全，请重新输入\n");
    }
    return 0;

}
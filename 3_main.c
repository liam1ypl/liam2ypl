//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    int i = 3;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 2;  
    }
    return true;
}

int main() {
    int n;
    while (1) { 
        printf("请输入一个小于50的正整数作为密钥：");
        scanf("%d", &n);
        if (n >= 1 && n < 50) {
            break;
        }
        printf("输入无效，请输入1~49之间的正整数！\n");
    }
    if (isPrime(n)) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}

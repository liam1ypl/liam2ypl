//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("请输入一个小于50的正整数作为密钥：");
    scanf("%d", &n);
    if (n <= 0 || n >= 50) {
        printf("输入不符合要求，请输入一个大于0且小于50的正整数。\n");
        return 1; 
    }
    if (isPrime(n)) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}

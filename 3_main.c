//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("请输入两个整数和一个运算符:");
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
          printf("%d\n",a+b);
          break;
        case '-':
          printf("%d\n",a-b);
          break;
        case '*':
          printf("%d\n",a*b);
          break;
        case '/':
          if(b!=0){
            printf("%d\n",a/b);
          }else{
            printf("除数不能为0\n");
          }
            break;
        default:
            printf("无效的预算符\n");
    }
    return 0;
}
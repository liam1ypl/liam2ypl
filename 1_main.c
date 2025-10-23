//202510304214
//647363360@qq.com
//杨攀亮
#include <stdio.h>
int main()
{
    float celsius;
    printf("获取用户输入的摄氏温度:");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 9.0 / 5.0 + 32;
    printf("%.1f\n", fahrenheit);
    return 0;


}

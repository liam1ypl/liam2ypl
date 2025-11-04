//202510304214
//647363360@qq.com
//杨攀亮
#include<stdio.h>
int calculateSum(int arr[],int length){
    int sum=0;
    for(int i= 0;i< length;i++){
    sum +=arr[i];
    }
    return sum;
}
int calculateProduct(int arr[],int length){
    int product=1;
    for(int i =0;i<length;i++){
        product *=arr[i];
    }
    return product;
}
int main()
{
    int arr[5];
    for(int i = 0;i < 5;i++){
        scanf("%d",&arr[i]);
    }
    int sum =calculateSum(arr,5);
    int product =calculateProduct(arr,5);
    printf("%d %d\n",sum,product);
    return 0;
}

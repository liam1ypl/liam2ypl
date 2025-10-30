#include<stdio.h>
int main()
{
    int arr[5];
    int count=0;
    int num;
    while(count<5){
        scanf("%d",&num);
        if(num % 2 ==0){
            arr[count]=num;
            count++;
        }
    }
    for(int i=0;i<5;i++){
        if(i==0){
            printf("%d",arr[i]);
        }else{
            printf(" %d",arr[i]);
        }
    }
    return 0;


}
#include<stdio.h>
int main(){
    int num=0;
    int arr[10]={0};
    scanf("%d",&num);
    while(num){
        arr[num%10]++;
        num/=10;
    }
    int i=0;
    for(i=0;i<10;i++){
        if(arr[i]!=0){
            printf("%d出现过%d次\n",i,arr[i]);
        }
    }
    return 0;
}

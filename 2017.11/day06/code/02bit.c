#include<stdio.h>
int main(){
    int num=0;
    printf("请输入\n");
    scanf("%d",&num);
    int size=0;
    while(num){
        size++;
        num/=10;
    }
    //for(mum;num==0;num/=10){
    //size++;
    //}
    printf("您输入的是%d位数\n",size);
    return 0;
}


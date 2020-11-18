//话费
#include<stdio.h>
int main(){
    int tong=0,duan=0,liu=0;
    double sum=58;
    printf("请输入:");
    scanf("%d%d%d",&tong,&duan,&liu);
    if(tong>250){
        sum+=(tong-250)*0.25;
    }if(duan>100){
        sum+=(duan-100)*0.1;
    }if(liu>50){
        sum+=(liu-50)*0.3;
    }
    printf("应缴纳%lg元",sum);
       return 0;
}

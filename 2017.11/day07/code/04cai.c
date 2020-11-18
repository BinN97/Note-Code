//双色球
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int arr[7]={0};
    int i=0,j=0,k=0;
    for(i=0;i<6;){
        int a=rand()%33+1;
        for(j=0;j<i;j++){
            if(a==arr[i]){
                break;
            }
        }
        if(j==i){
            arr[i]=a;
            i++;
        }
    }
    arr[6]=rand()%16+1;
    int val[7]={0};
    for(i=0;i<7;i++){
        scanf("%d",&val[i]);
    }
    int red=0;
    int blue=0;
    for(i=0;i<6;i++){
        if(arr[i]==val[i]){
            red++;
        }
    }
    if(arr[6]==val[6]){
            blue=1;
    }
    if(red==6&&blue==1){
        printf("一等奖！\n");
    }
    else if(red==6){
        printf("二等奖！\n");
    }
    else if(red==5&&blue==1){
        printf("三等奖！\n");
    }
    else if(red==5||(red==4&&blue==1)){
        printf("四等奖！\n");
    }
    else if(red==4||(red==3&&blue==1)){
        printf("五等奖\n");
    }
    else if((red==2&&blue==1)||(red==1&&blue==1)||blue==1){
        printf("六等奖\n");
    }
    else{
        printf("0000\n");
    }


    return 0;
}

//猜数字
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(0));
    int val=rand()%100;
    for(int i=0;i<5;i++){
        int num=0;
        scanf("%d",&num);
        if(val>num){
            printf("小了\n");
        }
        else if(val<num){
            printf("大了\n");
        }
        else{
            printf("聪明\n");
            return 1;
        }
    }
    printf("加油！\n");
    return 0;
}

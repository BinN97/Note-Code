#include<stdio.h>
int main(){
    int i,j=0/*换行输出*/;
    for(i=1;i<=100;i++){
        if(!(i%10==7||i/10==7||i%7==0)){
            j++;
            printf("%d ",i);
            if(j%10==0){
                printf("\n");
            }
        }
    }
    return 0;
}

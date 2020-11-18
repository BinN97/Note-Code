#include<stdio.h>
int main(){
    int N=0;
    int i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=N/2;i++){
        printf(" ");
        printf(" ");
        for(j=1;j<=2*N-5;j++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}

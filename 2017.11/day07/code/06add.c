#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main(){
    printf("%d\n",add(12,14));
    printf("%d\n",sub(34,12));
    return 0;
}

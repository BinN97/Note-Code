#include<stdio.h>
int main(){
    int x,y,z;
    for(int n=100;n<1000;n++){
        x=n/100;
        y=n%10;
        z=(n/10)%10;
        if(x*x*x+y*y*y+z*z*z==n){
            printf("%d\n",n);
        }
    }
    return 0;
}

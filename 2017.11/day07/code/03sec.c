//下一秒
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=0,y=0,r=0;
    int s=0,f=0,m=0;
    scanf("%d%d%d%d%d%d",&n,&y,&r,&s,&f,&m);
    int moth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(1){
        m==59?m=0,f++:m++;
        f>59?f=0,s++:f;
        s>23?s=0,r++:s;
        moth[2]=(n%4==0&&n%100!=0||n%400==0)?29:28;
        r>moth[y]?r=1,y++:r;
        y>12?y=1,n++:y;
        printf("%04d-%02d-%02d %02d:%02d:%02d\r",n,y,r,s,f,m);
        sleep(1);
        fflush(stdout);
    }
    return 0;
}


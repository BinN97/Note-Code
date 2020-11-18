//拆分秒数
/*多行注释*/
#include <stdio.h>
int main(){
    int sum=0;
    scanf("%d",&sum);
    int s=sum/3600;//时
    int f=(sum-3600*s)/60;//time(0);
    int m=sum%60;
    printf("%02d:%02d:%02d\n",s,f,m);
    return 0;
}

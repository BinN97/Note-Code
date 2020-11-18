#include<stdio.h>
int main(){
    int i;
    long sum=0;
    char s[18];
    printf("请输入身份证\n");
    for(i=0;i<18;i++){
        scanf("%c",&s[i]);
    }
    int r[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char a[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    for(i=0;i<17;i++){
         sum+=r[i]*(s[i]-'0');
    }
    sum%=11;

    if(a[sum]==s[17])
        printf("OK 输入身份证无误！\n");
    else
        printf("Not OK 输入身份证有误！\n");

    return 0;
}

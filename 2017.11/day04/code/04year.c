//求平闰年
#include<stdio.h>
int main(){
    int year=0;
    printf("请输入:");
    scanf("%d",&year);
    (year%4==0&&year%100!=0)||(year%400==0)?printf("闰年\n"):printf("平年\n");
    return 0;
    }

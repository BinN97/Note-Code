#include<stdio.h>
int main(){
    int a1=0,a2=0,c=0;
    int sum=0;
    printf("********\n");
    printf("*1加法**\n");
    printf("*2减法**\n");
    printf("*3乘法**\n");
    printf("*4除法**\n");
    printf("*5取余**\n");
    printf("*0退出**\n");
    printf("********\n");
    scanf("%d%d%d",&a1,&c,&a2);
        switch(c)
        {
            case 1:
                sum=a1+a2;
                break;
            case 2:
                sum=a1-a2;
                break;
            case 3:
                sum=a1*a2;
                break;
            case 4:
                sum=a2?0:a1/a2;
                break;
            case 5:
                sum=a2?0:a1%a2;
            case 0:
                printf("88\n");
                return 1;
            default:
                printf("你是不是傻\n");
                break;
        }
}

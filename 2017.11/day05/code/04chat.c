#include<stdio.h>
int main(){
    printf("**************************\n");
    printf("*******1业务查询**********\n");
    printf("*******2手机充值**********\n");
    printf("*******3业务办理**********\n");
    printf("*******4密码服务与停机服务\n");
    printf("*******5宽带业务**********\n");
    printf("*******6手机号码激活******\n");
    printf("*******7集团业务**********\n");
    printf("*******8人工服务**********\n");
    printf("*******9退出**************\n");
    int c;
    scanf("%d",&c);
    switch(c){
    case 1:
        printf("您暂时没有其他业务\n");
        break;
    case 2:
        printf("已为你充值1000元\n");
        break;
    case 3:
        printf("暂无服务员，请稍后\n");
        break;
    case 4:
        printf("您的手机号密码为123456\n");
        break;
    case 5:
        printf("您所在的地区暂无法办理宽带业务\n");
        break;
    case 6:
        printf("您的手机号码已激活\n");
        break;
    case 7:
        printf("您无法直接联系集团业务\n");
        break;
    case 8:
        printf("人工服务繁忙，请稍后再试\n");
        break;
    case 9:
        printf("感谢您的致电，再见\n");
        break;
    }
        return 0;
}

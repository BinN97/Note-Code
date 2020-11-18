#include<stdio.h>
int main(){
    int m=0;
    int d=0;
    printf("请输入：");
    scanf("%2d,%2d",&m,&d);
    if(m>12||d>31){
        printf("请重新输入！\n");
    }
     else if((m==3&&d>=21)||(m==4&&d<=19)){
            printf("白羊座！\n");
            }
     else if((m==4&&d>=20)||(m==5&&d<=20)){
            printf("金牛座！\n");
            }
     else if((m==4&&d>=20)||(m==5&&d<=20)){
            printf("金牛座！\n");
            }
     else if((m==5&&d>=21)||(m==6&&d<=20)){
            printf("双子座！\n");
            }
     else if((m==6&&d>=21)||(m==7&&d<=22)){
            printf("巨蟹座！\n");
            }
     else if((m==7&&d>=23)||(m==8&&d<=22)){
            printf("狮子座！\n");
            }
     else if((m==8&&d>=23)||(m==9&&d<=22)){
            printf("处女座！\n");
            }
     else if((m==9&&d>=23)||(m==10&&d<=22)){
            printf("天秤座！\n");
            }
     else if((m==10&&d>=23)||(m==11&&d<=21)){
            printf("天蝎座！\n");
            }
     else if((m==11&&d>=22)||(m==12&&d<=21)){
            printf("射手座！\n");
            }
     else if((m==12&&d>=22)||(m==1&&d<=19)){
            printf("摩羯座！\n");
            }
     else if((m==1&&d>=20)||(m==2&&d<=18)){
            printf("水瓶座！\n");
            }
     else 
            {
            printf(" 双鱼座！\n");
            }
     return 0;
}

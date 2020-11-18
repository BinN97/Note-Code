#include<stdio.h>
int main(){
    int year,month,date,flag=0,year1,/*month1,date1,*/flag1=0;
    int sum,sum1=0/*,temp*/,i;
    printf("plese input the date(XXXX.XX.XX)\n");
    scanf("%4d.%2d.%2d",&year,&month,&date);
    for(year1=1970;year1<=year;year1++){
        if((year1%4==0&&year1%100!=0)||year1%400==0){
            flag+=1;
        }
        else{
            flag1+=1;
}
}
sum=366*flag+365*flag1;
int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for(i=0;i<month;i++){
    if((year%4==0&&year%100!=0)||year%400==0){
        sum1=sum1+a[i];
    }
    else{
        sum1=sum1+b[i];
    }
}
sum=sum+sum1+date;
/*int a;
for(a=12;a>=month;a--){
    switch(a)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12 : temp=31;break;
        case 4: case 6: case 9: case 11: temp=30;break;
        case 2: {
                    if((year%4==0&&year%100!=0)||year%400==0){
                    temp=29;
                }
                else{ temp=28;}
                break;
                }
        default: temp=0;
    }
    sum1+=temp;
}
sum=sum-sum1+date;*/
if(sum%5==0||sum%5==4){
    printf("在晒网!\n");
}
else{
    printf("在打鱼!\n");
}
return 0;
}

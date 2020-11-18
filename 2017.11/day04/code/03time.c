//求时间
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
   while(1){
   int sum= time(0);
   int s=sum/3600;
   int f=(sum-s*3600)/60;
   int m=sum%60;
   int ss=(s%24+8)%24;
   printf("%02d:%02d:%02d\r",ss,f,m);
   sleep(1);
   fflush(stdout);
    }
   return 0;
}

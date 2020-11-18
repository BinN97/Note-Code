#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0;
loop://goto标识
    i++;
    if(i==5)  goto k;
    printf("%d\n",i);
    sleep(1);
    goto loop;
k:  return 0;
}

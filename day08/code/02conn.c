#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<string.h>
int main(){
    //111.13.100.92
    //1建立socket
    int fd=socket(AF_INET,SOCK_STREAM,0);
    if(fd==-1){
        perror("socket:");
        exit(-1);
    }

    //2准备通信地址
    struct sockaddr_in addr;
    addr.sin_family=AF_INET;
    addr.sin_port=htons(80);
    addr.sin_addr.s_addr=inet_addr("111.13.100.92");
    //3链接服务器
    int res=connect(fd,(struct sockaddr*)&addr,sizeof(addr));
    if(res==-1){
        perror("connect:");
        exit(-1);
    }
    printf("链接服务器成功\n");
    //4通信
    char buf[1024]={0};
    strcpy(buf,"GET /index.html HTTP/1.1\r\n");
    strcat(buf,"HOST: www.baidu.com\r\n");
    strcat(buf,"Connection: close\r\n");
    strcat(buf,"\r\n");
    write(fd,buf,strlen(buf));
    char re[4096*100]={0};
    read(fd,re,sizeof(re));
    printf("%s\n",re);
    //5关闭
    close(fd);
    return 0;
}


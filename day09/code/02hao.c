#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
int fd=0;//socket描述符

//1连接服务器 return 1成功   0 失败
int conn(char* ip){

    //1创建socket
    fd=socket(AF_INET,SOCK_STREAM,0);
    if(fd==-1){
        perror("socket:");
        return 0;
    }

    //2准备通信地址
    struct sockaddr_in addr;
    addr.sin_family=AF_INET;
    addr.sin_port=htons(80);
    addr.sin_addr.s_addr=inet_addr(ip);
    
    //3连接服务器
    int res=connect(fd,(struct sockaddr*)&addr,sizeof(addr));
    if(res==-1){
        perror("connect");
        close(fd);
        return 0;
    }
    return 1;
}

//2发送请求包
int Send(char* url,char* host,char* Recv){
    //网页路径
    
    //1准备请求包
    char buf[1024]={0};
    sprintf(buf,"GET /%s HTTP/1.1\r\nHOST: %s\r\n",url,host);
    strcat(buf,"Connection: close\r\n");
    strcat(buf,"\r\n");
    
    //2送请求包
    write(fd,buf,strlen(buf));
    
    //3接收服务器响应
    int size=0;
    while(1){
        int i=read(fd,Recv+size,4096);
        if(i<=0)
            break;
        size+=i;
    }
}

//3处理内容
int StrHtml(char* Recv){
    printf("%s\n",Recv);
}
int main(){
    char* ip="120.92.201.157";
    char* host="www.iciba.com";
    char ch[64]={0};
    scanf("%s",ch);
    if(conn(ip)==0){
        printf("over");
        return -1;
    }
    char buf[100*4096]={0};
    Send(ch,host,buf);
    StrHtml(buf);
    return 0;
}


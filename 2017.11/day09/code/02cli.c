#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<pthread.h>
#include<string.h>

int fd=0;//socket描述符

//1链接服务器
int conn(char* ip,int port){

    //1创建socket
    fd=socket(AF_INET,SOCK_STREAM,0);
    if(fd==-1){
        perror("socket:");
        return -1;
    }

    //2准备通信地址
    struct sockaddr_in addr;
    addr.sin_family=AF_INET;
    addr.sin_port=htons(port);
    addr.sin_addr.s_addr=inet_addr(ip);
    
    //3链接服务器
    int r=connect(fd,(struct sockaddr*)&addr,sizeof(addr));
    if(r==-1){
        perror("connect:");
        close(fd);
        return -1;
    }
    return 0;
}

//2发送内容
void Send(char* buf){
    write(fd,buf,strlen(buf));
}

//3接受服务器的消息
void* Recv(void* p){
    while(1){
        char buf[521]={0};
        int r=read(fd,buf,521);
        if(r==-1){
            printf("异常终止\n");
            exit(-1);
        }
        printf("%s\n",buf);
    }
}
int main(){
    if(conn("127.0.0.1",8888)==-1){
        printf("链接失败\n");
        return -1;
    }
    pthread_t pid;
    pthread_create(&pid,0,Recv,0);
    while(1){
        char buf[521]={0};
        scanf("%s\n",buf);
        Send(buf);
    }
    return 0;
}

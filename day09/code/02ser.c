#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<string.h>
#include<pthread.h>
int fds[40]={0};//保存所以登陆的客户端
int size=1;//保存已登陆服务器的人数
void* Recv(void* p){//接受客户端发来的消息，广播给所有已登陆的客户
    int fd=fds[*(int*)p];//通信描述符
    while(1){
    char buf[1024]={0};
    int r=read(fd,buf,1024);
    if(!strcmp(buf,"bye12358"))
    {
        close(fd);
        printf("客户端退出\n");
    }
        for(int i=0;i<size;i++){
            write(fds[i],buf,strlen(buf));
        }
    }
}
int main(){
    //创建socket
    printf("服务器正在启动...\n");
    int fd=socket(AF_INET,SOCK_STREAM,0);
    if(fd==-1){
        perror("socket:");
        exit(-1);
    }
    //2准备通信地址
    struct sockaddr_in addr;
    addr.sin_family=AF_INET;
    addr.sin_port=htons(8888);
    addr.sin_addr.s_addr=inet_addr("127.0.0.1");
    //3绑定
    int res=bind(fd,(struct sockaddr*)&addr,sizeof(addr));
    if(res==-1){
        perror("bind:");
        close(fd);
        exit(-1);
    }
    sleep(1);
    printf("服务器启动成功\n");
    //4监听
    listen(fd,40);
    while(1){
    //5等待客户端链接
    struct sockaddr_in cli;
    socklen_t len=sizeof(cli);
    int clifd=accept(fd,(struct sockaddr*)&cli,&len);
    if(clifd==-1)   continue;
    printf("第%d客户端进来\n",size);
    fds[size++]=clifd;
    //6创建线程调用
    int i=size-1;
    pthread_t pid;
    pthread_create(&pid,NULL,Recv,&i);
    }
    //7关闭
    for(int i=0;i<size;i++){
        close(fds[i]);
    }
        close(fd);
        return 0;
}


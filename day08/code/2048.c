//2048.c
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdlib.h>
int map[4][4];//map
int fen;    //分数
void sui(); //产生随机数
void show();//打印地图
int empty();//判空
void init();//接收用户的输入
void up();  //
void down();
void left();
void right();
int pan(); //判断游戏失败
int main(){
    srand(time(0));
    sui();
    sui();
    show();
    while(1){
        init();
    }
    return 0;
}
void sui(){
    //如果没有空位置不再产生随机数
    if(!empty()) 
        return;
    while(1){
        int x=rand()%4;
        int y=rand()%4;
        if(map[x][y]==0){
            if(rand()%20==4){
                map[x][y]=4;
            }
            else{
                map[x][y]=2;
            }break;
        }
    }
}
void show(){
    system("clear");
    int x=0,y=0;
    printf("**********************\n");
    for(x=0;x<4;x++){
        printf("*");
        for(y=0;y<4;y++){
            printf("%4d ",map[x][y]);
        }
        printf("*\n");
    }
    printf("**********************\n");
    printf("*分数:%15d*\n",fen);
    printf("**********************\n");
}
int empty(){
    int x=0,y=0;
    for(x=0;x<4;x++){
        for(y=0;y<4;y++){
            if(map[x][y]==0)
                return 1;
        }
    }
    return 0;
}
void init(){
    char c=0;//保存用户的输入
    scanf("%c%*c",&c);
    switch(c){
        case 'w':
            up();
            break;
        case 's':
            down();
            break;
        case 'a':
            left();
            break;
        case 'd':
            right();
            break;
    }
}
void up(){
    int x=0,y=0,k=0;
    for(k=0;k<4;k++){
        for(x=1;x<4;x++){
            for(y=0;y<4;y++){
                if(map[x][y]){
                    if(!map[x-1][y]){
                        map[x-1][y]=map[x][y];
                        map[x][y]=0;
                    }
                    else{
                        if(map[x-1][y]==map[x][y]){
                            map[x-1][y]*=2;
                            map[x][y]=0;
                            fen=map[x-1][y]*4;
                        }
                    }
                }
            }
        }
        if(!pan()){
            exit(-1);
        }
        else{
            sui();
            show();
        }

    }
}

void down(){
    int x=0,y=0,k=0;
    for(k=0;k<4;k++){
        for(x=1;x<4;x++){
            for(y=0;y<4;y++){
                if(map[x][y]){
                    if(!map[x-1][y]){
                        map[x-1][y]=map[x][y];
                        map[x][y]=0;
                    }
                    else{
                        if(map[x-1][y]==map[x][y]){
                            map[x-1][y]*=2;
                            map[x][y]=0;
                            fen=map[x-1][y]*4;
                        }
                    }
                }
            }
        }
        if(!pan()){
            exit(-1);
        }
        else{
            sui();
            show();
        }
    }
}
void left(){
    int x=0,y=0,k=0;
    for(k=0;k<3;k++){
        for(x=0;x<3;x++){
            for(y=1;y<4;y++){
                if(map[x][y]){
                    if(!map[x][y-1]){
                        map[x][y-1]=map[x][y];
                        map[x][y]=0;
                    }
                    else{
                        if(map[x][y-1]==map[x][y]){
                            map[x][y-1]*=2;
                            map[x][y]=0;
                            fen=map[x][y-1]*4;
                        }
                    }
                }
            }
        }
        if(!pan()){
            exit(-1);
        }
        else{
            sui();
            show();
        }
    }
}
void right(){
    int x=0,y=0,k=0;
    for(k=0;k<3;k++){
        for(y=1;y<4;y++){
            for(x=0;x<4;x++){
                if(map[x][y]){
                    if(!map[x][y+1]){
                        map[x][y+1]=map[x][y];
                        map[x][y]=0;
                    }
                    else{
                        if(map[x][y+1]==map[x][y]){
                            map[x][y+1]*=2;
                            map[x][y]=0;
                            fen=map[x][y+1]*4;
                        }
                    }
                }
            }
        }
        if(!pan()){
            exit(-1);
        }
        else{
            sui();
            show();
        }
    }
}
int pan(){
    int n[4][4]={-1,0,0,-1,0,1,1,0};
    int x=0,y=0,k=0;
    for(x=0;x<4;x++){
        for(y=0;y<4;y++){
            if(map[x][y]==0){
                return 1;
            }
            //判断
            for(k=0;k<4;k++){
                int nx=n[k][0]+x;
                int ny=n[k][1]+y;
                if(nx<0||nx>3||ny<0||ny>3){
                    continue;
                }
                if(map[x][y]=map[nx][ny]){
                    return 1;
                }
            }
        }
    }
    return 0;
}

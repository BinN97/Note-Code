#include "showpice.h"
#include "ui_showpice.h"

ShowPice::ShowPice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowPice)
{
    ui->setupUi(this);
    ui->img->setScaledContents(true);
    size=1;
    play=new QMediaPlayer(this);
    play->setMedia(QUrl::fromLocalFile("/home/tarena/Music/12.mp3"));
    //play->play();
}

ShowPice::~ShowPice()
{
    delete ui;
}

void ShowPice::paintEvent(QPaintEvent *){
    QPixmap pix(":/images/"+QString::number(size)+".jpg");
    ui->img->setPixmap(pix);
}

void ShowPice::on_clo_clicked()
{//单击关闭按钮
     close();
}

void ShowPice::on_up_clicked()
{//单击上一张按钮
    if(size==0){
        size=9;
    }else{
        size--;
    }
    update();
}

void ShowPice::on_down_clicked()
{//单击下一张按钮
    if(size==9){
        size=0;
    }else{
        size++;
    }
    update();

}

void ShowPice::on_play_clicked()
{//单击播放按钮
    if(ui->play->text()=="播放"){
        play->play();
        ui->play->setText("暂停");
    }else{
        play->pause();
        ui->play->setText("播放");
    }
}

void ShowPice::on_val_sliderMoved(int position)
{//调整音量
    play->setVolume((position));
}

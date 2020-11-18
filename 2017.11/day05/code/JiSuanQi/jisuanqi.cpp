#include "jisuanqi.h"
#include "ui_jisuanqi.h"

JiSuanQi::JiSuanQi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JiSuanQi)
{
    ui->setupUi(this);
}

JiSuanQi::~JiSuanQi()
{
    delete ui;
}

void JiSuanQi::on_pushButton_clicked()
{//单击等号
    int a1=ui->a1->text().toInt();
    int a2=ui->a2->text().toInt();
    int c=ui->c->currentIndex();
    int sum=0;
    switch(c){
    case 0:
        sum=a1+a2;
        break;
    case 1:
        sum=a1-a2;
        break;
    case 2:
        sum=a1*a2;
        break;
    case 3:
        sum=a2?0:a1/a2;
        break;
    case 4:
        sum=a2?0:a1%a2;
        break;
    }
    ui->sum->setText(QString::number(sum));
}

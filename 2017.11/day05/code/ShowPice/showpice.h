#ifndef SHOWPICE_H
#define SHOWPICE_H
#include<QMediaPlayer>
#include <QDialog>

namespace Ui {
class ShowPice;
}

class ShowPice : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPice(QWidget *parent = 0);
    ~ShowPice();
    void paintEvent(QPaintEvent *);
private slots:
    void on_clo_clicked();

    void on_up_clicked();

    void on_down_clicked();

    void on_play_clicked();

    void on_val_sliderMoved(int position);

private:
    Ui::ShowPice *ui;
    int size;
    QMediaPlayer* play;
};

#endif // SHOWPICE_H

#ifndef JISUANQI_H
#define JISUANQI_H

#include <QDialog>

namespace Ui {
class JiSuanQi;
}

class JiSuanQi : public QDialog
{
    Q_OBJECT

public:
    explicit JiSuanQi(QWidget *parent = 0);
    ~JiSuanQi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::JiSuanQi *ui;
};

#endif // JISUANQI_H

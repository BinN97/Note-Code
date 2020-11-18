/********************************************************************************
** Form generated from reading UI file 'showpice.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPICE_H
#define UI_SHOWPICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_ShowPice
{
public:
    QPushButton *down;
    QPushButton *up;
    QPushButton *clo;
    QPushButton *play;
    QSlider *val;
    QLabel *img;

    void setupUi(QDialog *ShowPice)
    {
        if (ShowPice->objectName().isEmpty())
            ShowPice->setObjectName(QStringLiteral("ShowPice"));
        ShowPice->resize(705, 490);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        ShowPice->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/sx.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ShowPice->setWindowIcon(icon);
        down = new QPushButton(ShowPice);
        down->setObjectName(QStringLiteral("down"));
        down->setGeometry(QRect(390, 370, 99, 27));
        up = new QPushButton(ShowPice);
        up->setObjectName(QStringLiteral("up"));
        up->setGeometry(QRect(0, 370, 99, 27));
        up->setCursor(QCursor(Qt::ClosedHandCursor));
        clo = new QPushButton(ShowPice);
        clo->setObjectName(QStringLiteral("clo"));
        clo->setGeometry(QRect(250, 370, 99, 27));
        play = new QPushButton(ShowPice);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(120, 370, 99, 27));
        val = new QSlider(ShowPice);
        val->setObjectName(QStringLiteral("val"));
        val->setGeometry(QRect(530, 370, 160, 29));
        val->setValue(50);
        val->setOrientation(Qt::Horizontal);
        img = new QLabel(ShowPice);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(20, 40, 651, 301));

        retranslateUi(ShowPice);

        QMetaObject::connectSlotsByName(ShowPice);
    } // setupUi

    void retranslateUi(QDialog *ShowPice)
    {
        ShowPice->setWindowTitle(QApplication::translate("ShowPice", "ShowPice", 0));
        down->setText(QApplication::translate("ShowPice", "\344\270\213\344\270\200\345\274\240", 0));
        up->setText(QApplication::translate("ShowPice", "\344\270\212\344\270\200\345\274\240", 0));
        clo->setText(QApplication::translate("ShowPice", "\345\205\263\351\227\255", 0));
        play->setText(QApplication::translate("ShowPice", "\346\222\255\346\224\276", 0));
        img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowPice: public Ui_ShowPice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPICE_H

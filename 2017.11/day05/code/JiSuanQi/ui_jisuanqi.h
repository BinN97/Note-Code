/********************************************************************************
** Form generated from reading UI file 'jisuanqi.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JISUANQI_H
#define UI_JISUANQI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_JiSuanQi
{
public:
    QLabel *sum;
    QLineEdit *a1;
    QLineEdit *a2;
    QPushButton *pushButton;
    QComboBox *c;

    void setupUi(QDialog *JiSuanQi)
    {
        if (JiSuanQi->objectName().isEmpty())
            JiSuanQi->setObjectName(QStringLiteral("JiSuanQi"));
        JiSuanQi->resize(794, 566);
        sum = new QLabel(JiSuanQi);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setGeometry(QRect(510, 280, 131, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(254, 254, 254, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(169, 169, 169, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        sum->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        sum->setFont(font);
        sum->setAutoFillBackground(true);
        a1 = new QLineEdit(JiSuanQi);
        a1->setObjectName(QStringLiteral("a1"));
        a1->setGeometry(QRect(70, 280, 111, 61));
        a1->setMinimumSize(QSize(0, 61));
        a1->setFont(font);
        a2 = new QLineEdit(JiSuanQi);
        a2->setObjectName(QStringLiteral("a2"));
        a2->setGeometry(QRect(280, 280, 111, 61));
        a2->setFont(font);
        pushButton = new QPushButton(JiSuanQi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 280, 99, 60));
        pushButton->setFont(font);
        c = new QComboBox(JiSuanQi);
        c->setObjectName(QStringLiteral("c"));
        c->setGeometry(QRect(190, 280, 85, 60));
        c->setFont(font);

        retranslateUi(JiSuanQi);

        QMetaObject::connectSlotsByName(JiSuanQi);
    } // setupUi

    void retranslateUi(QDialog *JiSuanQi)
    {
        JiSuanQi->setWindowTitle(QApplication::translate("JiSuanQi", "JiSuanQi", 0));
        sum->setText(QString());
        pushButton->setText(QApplication::translate("JiSuanQi", "=", 0));
        c->clear();
        c->insertItems(0, QStringList()
         << QApplication::translate("JiSuanQi", "+", 0)
         << QApplication::translate("JiSuanQi", "-", 0)
         << QApplication::translate("JiSuanQi", "*", 0)
         << QApplication::translate("JiSuanQi", "/", 0)
         << QApplication::translate("JiSuanQi", "%", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class JiSuanQi: public Ui_JiSuanQi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JISUANQI_H

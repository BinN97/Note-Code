#include "showpice.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ShowPice w;
    w.show();

    return a.exec();
}

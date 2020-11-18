#include "jisuanqi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JiSuanQi w;
    w.show();

    return a.exec();
}

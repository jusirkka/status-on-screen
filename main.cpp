#include "osd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    OSD w;
    qApp->setStyleSheet("QLabel {color: green; font-size: 36pt; font-family: 'Arial Black'}");
    return app.exec();
}

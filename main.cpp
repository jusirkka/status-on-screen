#include "osd.h"
#include <QGuiApplication>
#include <QApplication>
#include <QScreen>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QRect g = QGuiApplication::primaryScreen()->availableGeometry();
    OSD w(QPoint(10, g.height() - 100));
    qApp->setStyleSheet("QLabel {color: #aaff00; font-size: 48pt; font-family: 'Arial Black'}");
    return app.exec();
}

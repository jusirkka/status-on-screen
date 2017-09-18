#include "osd.h"
#include <KModifierKeyInfo>
#include <QGraphicsDropShadowEffect>
#include <QDebug>

OSD::OSD(const QPoint& pos, QWidget *parent)
    : QLabel(parent)
    , m_CapsLock(new KModifierKeyInfo(this))
{
    setWindowFlags(Qt::WindowStaysOnTopHint |
                   Qt::X11BypassWindowManagerHint |
                   Qt::FramelessWindowHint
                   );
    setText("Capslock");
    setAutoFillBackground(false);
    setAttribute(Qt::WA_TranslucentBackground);
    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect(this);
    shadow->setColor("grey");
    shadow->setOffset(4, 4);
    shadow->setBlurRadius(1);
    setGraphicsEffect(shadow);
    move(pos);
    connect(m_CapsLock, SIGNAL(keyLocked(Qt::Key,bool)), this, SLOT(lockStateChanged(Qt::Key,bool)));
    setVisible(m_CapsLock->isKeyLocked(Qt::Key_CapsLock));
}

OSD::~OSD() {}



void OSD::lockStateChanged(Qt::Key key, bool locked) {
    if (key != Qt::Key_CapsLock) return;
    setVisible(locked);
}

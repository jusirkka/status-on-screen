#ifndef OSD_H
#define OSD_H

#include <QLabel>
#include <QPoint>

class KModifierKeyInfo;

class OSD : public QLabel
{
    Q_OBJECT

public:

    OSD(const QPoint& pos, QWidget* parent = 0);
    ~OSD();

private Q_SLOTS:

    void lockStateChanged(Qt::Key key, bool locked);

private:

    KModifierKeyInfo* m_CapsLock;

};

#endif // OSD_H

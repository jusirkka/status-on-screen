#ifndef OSD_H
#define OSD_H

#include <QLabel>

class KModifierKeyInfo;

class OSD : public QLabel
{
    Q_OBJECT

public:

    OSD(QWidget* parent = 0);
    ~OSD();

private Q_SLOTS:

    void lockStateChanged(Qt::Key key, bool locked);

private:

    KModifierKeyInfo* m_CapsLock;

};

#endif // OSD_H

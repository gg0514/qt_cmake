#ifndef SLOT_H
#define SLOT_H

#include <QObject>

class Slot : public QObject
{
    Q_OBJECT
public:
    explicit Slot(QObject *parent = nullptr);

signals:


public slots:
    void onSlotMessage();
};

#endif // SLOT_H

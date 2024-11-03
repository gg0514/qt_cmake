#include "slot.h"

Slot::Slot(QObject *parent)
    : QObject{parent}
{}

void Slot::onSlotMessage()
{
    qDebug("hi! slot message");
}

#include "signal.h"

Signal::Signal(QObject *parent)
    : QObject{parent}
{}

void Signal::generateTextSignal()
{
    emit textSignal();
}




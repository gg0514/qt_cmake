#ifndef SIGNAL_H
#define SIGNAL_H

#include <QObject>

class Signal : public QObject
{
    Q_OBJECT
public:
    explicit Signal(QObject *parent = nullptr);

    void generateTextSignal();

signals:
    void textSignal();

};

#endif // SIGNAL_H

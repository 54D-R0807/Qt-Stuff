#ifndef MYRUNNABLE_H
#define MYRUNNABLE_H

#include <QRunnable>
#include <QTcpSocket>
#include <QDebug>


class MyRunnable : public QRunnable
{
public:
    MyRunnable();
    qintptr SocketDescriptor();

protected:
    void run();
};

#endif // MYRUNNABLE_H

#ifndef CLIENT_H
#define CLIENT_H

#include <QtNetwork>

class Client
{

public:
    void start();
    Client();
    ~Client();
    void readData();
public slots:
void sendData(QString data);

private:QTcpSocket clients;

};

#endif // CLIENT_H

#include "client.h"
#include "QString"
#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>







void Client::start()
{
    clients.connectToHost("127.0.0.1", 8543);

}

Client::Client()
{

}

Client::~Client()
{
    clients.close();
}




void sendData(QString data)
{

}

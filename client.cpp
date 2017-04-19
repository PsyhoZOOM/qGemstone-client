#include "client.h"
#include "QString"
#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>







void Client::start()
{
    if(clients.isOpen())
        return;
    clients.connectToHost("127.0.0.1", 8543);
    qDebug() << "CONNECTEd"+clients.isOpen();

}

Client::Client()
{

}

Client::~Client()
{
    clients.close();
}

void Client::sendData(QString data)
{
    qDebug() << "SENDTING DATA";
    data  = data + "\n";
    clients.write(data.toUtf8());
    qDebug() << "READING DATA";
    Client::readData();

}


void Client::readData(){
    QByteArray localReadLine;
    clients.waitForReadyRead();
        localReadLine = clients.readAll();

    QJsonDocument itemdoc = QJsonDocument::fromJson(localReadLine);
    QJsonObject obj = itemdoc.object();

    qDebug() << obj.value("Message");
}





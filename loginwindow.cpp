#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "client.h"
#include "QString"
#include "QJsonObject"
#include "QDebug"
#include "QTextStream"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_bLogin_clicked()
{
    client.start();
    sendData();
}

void LoginWindow::sendData()
{
    QJsonObject json;
    json.insert("action", "login");
    json.insert("username", "baki");
    json.insert("password", QString(QCryptographicHash::hash(("baki"), QCryptographicHash::Md5).toHex()));

    QJsonDocument doc(json);
    QString a = doc.toJson(QJsonDocument::Compact);
    qDebug() << a;
    client.sendData(a);
    this->close();


}






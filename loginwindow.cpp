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
    json.insert("username", ui->luserName->text());
    QString pass = ui->lpassword->text();
    QString md5pass = QString(QCryptographicHash::hash((pass.toLocal8Bit()), QCryptographicHash::Md5).toHex());
    json.insert("password", md5pass);

    QJsonDocument doc(json);
    QString a = doc.toJson(QJsonDocument::Compact);
    qDebug() << a;
    client.sendData(a);
    loggedIn = true;
    this->close();


}






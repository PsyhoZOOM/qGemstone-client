#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "client.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
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
    Client client;
    client.start();
}

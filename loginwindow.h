#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "client.h"
#include "QLineEdit"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();
    bool loggedIn;



private slots:
    void on_bLogin_clicked();
    void sendData();


private:
    Ui::LoginWindow *ui;
    Client client;

};

#endif // LOGINWINDOW_H

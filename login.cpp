#include "login.h"
#include "ui_login.h"
#include "register.h"
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login) {
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}

void Login::on_loginButton_clicked() {
    // Implement login logic
    // For demonstration, assume login is always successful
    accept();
}

void Login::on_registerButton_clicked() {
    Register reg;
    reg.exec();
}

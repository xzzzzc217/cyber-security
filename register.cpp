#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register) {
    ui->setupUi(this);
}

Register::~Register() {
    delete ui;
}

void Register::on_registerButton_clicked() {
    // Implement registration logic
    // For demonstration, assume registration is always successful
    accept();
}

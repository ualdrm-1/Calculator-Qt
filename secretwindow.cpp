#include "secretwindow.h"
#include "Ui_SecretWindow.h"

SecretWindow::SecretWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecretWindow) {
    ui->setupUi(this);

    this->setWindowTitle("Секретное окно");
    ui->label->setText("Добро пожаловать в секретное окно!");
}

SecretWindow::~SecretWindow() {
    delete ui;
}

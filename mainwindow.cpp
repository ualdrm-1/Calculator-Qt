#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QStack>
#include <QTimer>
#include "secretwindow.h"

enum Operation { None, Add, Subtract, Multiply, Divide };
double num_first;
Operation current_operation = None;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    holdTimer(new QTimer(this)), inputTimer(new QTimer(this)),
    isHolding(false) {
    ui->setupUi(this);

    QPixmap topBarImage(":/image/image/1.png");
    ui->Image->setPixmap(topBarImage.scaled(ui->Image->width(), ui->Image->height(), Qt::KeepAspectRatio));

    for (int i = 0; i < 10; ++i) {
        QPushButton* button = findChild<QPushButton*>(QString("pushButton_%1").arg(i));
        connect(button, &QPushButton::clicked, this, &MainWindow::digits_numbers);
    }
    connect(ui->PlusMinus, &QPushButton::clicked, this, &MainWindow::operations);
    connect(ui->Percentage, &QPushButton::clicked, this, &MainWindow::operations);
    connect(ui->Division, &QPushButton::clicked, this, &MainWindow::setOperation);
    connect(ui->Plus, &QPushButton::clicked, this, &MainWindow::setOperation);
    connect(ui->Minus, &QPushButton::clicked, this, &MainWindow::setOperation);
    connect(ui->Multi, &QPushButton::clicked, this, &MainWindow::setOperation);

    ui->Division->setCheckable(true);
    ui->Multi->setCheckable(true);
    ui->Plus->setCheckable(true);
    ui->Minus->setCheckable(true);

    connect(holdTimer, &QTimer::timeout, this, &MainWindow::onHoldTimerTimeout);
    connect(inputTimer, &QTimer::timeout, this, &MainWindow::onInputTimerTimeout);
}

void MainWindow::digits_numbers() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString new_label = ui->Answer->text();
    if (new_label == "0") {
        if (button->text() != "0") {
            new_label = button->text();
        }
    } else {
        new_label += button->text();
    }
    ui->Answer->setText(new_label);

    if (isHolding) {
        inputBuffer += button->text();
        if (inputBuffer == "123") {
            SecretWindow *secretWindow = new SecretWindow();
            secretWindow->show();
            inputTimer->stop();
            holdTimer->stop();
            isHolding = false;
            inputBuffer.clear();
        }
    }
}

void MainWindow::operations() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    double all_numbers = ui->Answer->text().toDouble();
    QString new_label;
    if (button->text() == "+/-") {
        all_numbers *= -1;
    } else if (button->text() == "%") {
        all_numbers *= 0.01;
    }
    new_label = QString::number(all_numbers, 'g', 7);
    ui->Answer->setText(new_label);
}

void MainWindow::setOperation() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    num_first = ui->Answer->text().toDouble();
    ui->Answer->setText("");
    if (button == ui->Plus) {
        current_operation = Add;
    } else if (button == ui->Minus) {
        current_operation = Subtract;
    } else if (button == ui->Multi) {
        current_operation = Multiply;
    } else if (button == ui->Division) {
        current_operation = Divide;
    }
}

void MainWindow::on_Equil_pressed() {
    holdTimer->start(4000);
    inputBuffer.clear();
    isHolding = false;
}

void MainWindow::on_Equil_released() {
    holdTimer->stop();
    if (isHolding) {
        inputTimer->start(5000);
    }
}

void MainWindow::onHoldTimerTimeout() {
    isHolding = true;
    holdTimer->stop();
}

void MainWindow::onInputTimerTimeout() {
    inputBuffer.clear();
    inputTimer->stop();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_Clear_clicked() {
    current_operation = None;
    ui->Plus->setChecked(false);
    ui->Minus->setChecked(false);
    ui->Division->setChecked(false);
    ui->Multi->setChecked(false);
    ui->Answer->setText("0");
}

void MainWindow::on_Equil_clicked()
{
    double labelNumber, num_second;
    QString new_label;

    num_second=ui->Answer->text().toDouble();

    if(current_operation== Divide){
        labelNumber=num_first/num_second;
        new_label = QString::number(labelNumber, 'g', 7);

        ui->Answer->setText(new_label);
        ui->Division->setChecked(false); current_operation= None;
    }else if(current_operation== Add){
        labelNumber=num_first+num_second;
        new_label = QString::number(labelNumber, 'g', 7);

        ui->Answer->setText(new_label);
        ui->Plus->setChecked(false); current_operation= None;
    }else if(current_operation== Subtract){
        labelNumber=num_first-num_second;
        new_label = QString::number(labelNumber, 'g', 7);

        ui->Answer->setText(new_label);
        ui->Minus->setChecked(false); current_operation= None;
    }else if(current_operation== Multiply){
        labelNumber=num_first*num_second;
        new_label = QString::number(labelNumber, 'g', 7);

        ui->Answer->setText(new_label);
        ui->Multi->setChecked(false); current_operation= None;
    }
}


void MainWindow::on_pushButton_Doc_clicked()
{
    if(!(ui->Answer->text().contains('.'))){
        ui->Answer->setText(ui->Answer->text()+".");
    }
}


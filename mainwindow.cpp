#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QStack>

enum Operation { None, Add, Subtract, Multiply, Divide };

double num_first;
Operation current_operation = None; // Текущая операция

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Установка изображения в верхней панели
    QPixmap topBarImage(":/image/image/1.png");
    ui->Image->setPixmap(topBarImage.scaled(ui->Image->width(), ui->Image->height(), Qt::KeepAspectRatio));

    // Подключение кнопок к соответствующим слотам
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

    // Установка флагов для кнопок операций
    ui->Division->setCheckable(true);
    ui->Multi->setCheckable(true);
    ui->Plus->setCheckable(true);
    ui->Minus->setCheckable(true);
}

void MainWindow::digits_numbers()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString new_label = ui->Answer->text();

    // Проверяем, если текущее значение равно "0"
    if (new_label == "0") {
        if (button->text() != "0") {
            // Если нажата не кнопка "0", заменяем текст на нажатую цифру
            new_label = button->text();
        }
        // Если нажата кнопка "0", ничего не делаем
    } else {
        // Добавляем нажатую цифру к текущему значению
        new_label += button->text();
    }

    ui->Answer->setText(new_label);
}

void MainWindow::operations()
{
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

void MainWindow::setOperation()
{
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

void MainWindow::on_pushButton_Doc_clicked()
{
    if (!ui->Answer->text().contains('.')) {
        ui->Answer->setText(ui->Answer->text() + ".");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Equil_clicked()
{
    double labelNumber, num_second;
    QString new_label;
    num_second = ui->Answer->text().toDouble();

    switch (current_operation) {
    case Add:
        labelNumber = num_first + num_second;
        break;
    case Subtract:
        labelNumber = num_first - num_second;
        break;
    case Divide:
        if (num_second == 0) {
            QMessageBox::warning(this, "Ошибка", "Деление на ноль невозможно.");
            return;
        }
        labelNumber = num_first / num_second;
        break;
    case Multiply:
        labelNumber = num_first * num_second;
        break;
    default:
        return; // Нет операции
    }

    new_label = QString::number(labelNumber, 'g', 7);
    ui->Answer->setText(new_label);

    // Сбрасываем состояние всех операций
    current_operation = None;
    ui->Plus->setChecked(false);
    ui->Minus->setChecked(false);
    ui->Division->setChecked(false);
    ui->Multi->setChecked(false);
}

void MainWindow::on_Clear_clicked()
{
    // Сбрасываем состояние всех операций и очищаем ответ
    current_operation = None;
    ui->Plus->setChecked(false);
    ui->Minus->setChecked(false);
    ui->Division->setChecked(false);
    ui->Multi->setChecked(false);
    ui->Answer->setText("0");
}

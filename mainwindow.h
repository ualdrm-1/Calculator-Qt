#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digits_numbers();
    void operations();
    void setOperation();
    void on_Equil_pressed();
    void on_Equil_released();
    void on_Clear_clicked();
    void onHoldTimerTimeout();
    void onInputTimerTimeout();

private:
    Ui::MainWindow *ui;
    double num_first;
    enum Operation { None, Add, Subtract, Multiply, Divide };
    Operation current_operation;
    QTimer *holdTimer;
    QTimer *inputTimer;
    bool isHolding;
    QString inputBuffer;
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digits_numbers();
    void on_pushButton_Doc_clicked();
    void operations();
    void on_Equil_clicked();
    void setOperation();

    void on_Clear_clicked();

private:
    Ui::MainWindow *ui;
    double first_number;
    QString operation;
};
#endif // MAINWINDOW_H

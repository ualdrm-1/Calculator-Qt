#ifndef SECRETWINDOW_H
#define SECRETWINDOW_H

#include <QDialog>

namespace Ui {
class SecretWindow;
}

class SecretWindow : public QDialog {
    Q_OBJECT

public:
    explicit SecretWindow(QWidget *parent = nullptr);
    ~SecretWindow();

private:
    Ui::SecretWindow *ui;
};

#endif // SECRETWINDOW_H

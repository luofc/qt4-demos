#ifndef NUMPAD_H
#define NUMPAD_H

#include <QWidget>
#include <QtGui>
namespace Ui {
class NumPad;
}

class NumPad : public QWidget
{
    Q_OBJECT
    
public:
    explicit NumPad(QWidget *parent = 0);//(QPushButton *parentbutton);
    void setButton(QPushButton * );
    ~NumPad();

private slots:
    void ButtonHandler();
    void on_exitButton_clicked();

private:
    Ui::NumPad *ui;
    int count;
    int outputvalue;

    QString outputText;

    QPushButton *parentbutton;
};

#endif // NUMPAD_H

#ifndef POPUP_H
#define POPUP_H

#include <QWidget>
#include "keyboard/keyboard.h"

namespace Ui {
class Popup;
}

class Popup : public QWidget
{
    Q_OBJECT
    
public:
    explicit Popup(QWidget *parent = 0);
    ~Popup();
    
private slots:
    void on_closepopupButton_clicked();
    void on_keyboard();

private:
    Ui::Popup *ui;
    Keyboard *lineEditkeyboard;
};

#endif // POPUP_H

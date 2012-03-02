#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>
#include "popup.h"
#include "numpad.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    // Home Page Handler
    void FanSettingHandler();


    // Web Page Handlers
    void on_tiwebButton_clicked();
    void on_googlewebButton_clicked();
    void on_wifiButton_clicked();
    void on_zoompButton_clicked();
    void on_zoommButton_clicked();

    // Setting Page Handlers
    void on_exitButton_clicked();
    void on_changedateButton_clicked();
    void on_day1setButton_clicked();
    void on_day2setButton_clicked();
    void on_day3setButton_clicked();
    void on_serverButton_toggled(bool checked);


    //Timer Handlers
    void updateSlideshow();
    void updateServer();
    void updateDate();

    void LoadUInow();


private:
    Ui::Widget *ui;
    Popup *datepopup;
    NumPad *numpadpopup;
    QTimer *LoadUI;

    //Timer
    QTimer *dateTimer;
    int timerTick;
    QTimer *slideshowTimer;
    int slideshowTick;
    QTimer *serverTimer;
    int serverTick;

    //Pic vars
    QPixmap picimg;
    QString picfilepath, picfilename, totalfilename;
    QString filenames[100];
    int totalNums;

    //Home vars
    QString fanstate;
    int thesetpointfloat;
    QString StringOfTempinF;
    QString addfdegree;

    //Web vars
    float zoomfac;

    //Spplication height and width
    int frameHeight;
    int frameWidth;

};

#endif // WIDGET_H

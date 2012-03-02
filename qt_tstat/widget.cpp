/***********************************************
 **
 **    Demo Created by LT Thomas (ltjr@ti.com)
 **
 ***********************************************
 * Copyright (C) 2012 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/


#include "widget.h"
#include "ui_widget.h"

//custom QT widgets provided by Nokia
#include <QtScrollWheel>
#include <QtGui>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    qDebug() << " Start Creation";


    // Load UI
    ui->setupUi(this);

    // This delay is used because screen size cannot be detected until after this function has exited
    LoadUI = new QTimer(this);
    connect(LoadUI, SIGNAL(timeout()), this, SLOT(LoadUInow()));
    LoadUI->start(200);

}

Widget::~Widget()
{
    delete ui;
}
// create UI and use screen size to determine text sizes
void Widget::LoadUInow()
{

    LoadUI->stop();

    frameHeight = ui->tabWidget->height();
    frameWidth = ui->tabWidget->width();
    int bigtext = 72*frameHeight/470;
    int midtext = 18*frameHeight/470;
    qDebug() << ui->tabWidget->height();
    qDebug() << ui->tabWidget->width();

    //apply sprite to scrollwheel and startpoint
    ui->scrollWheel->setSkin("Beryl");
    ui->scrollWheel->setValue(75);

    //web zoom
    zoomfac=1.0;

    //Timers
    timerTick = 0;
    dateTimer = new QTimer(this);
    connect(dateTimer, SIGNAL(timeout()), this, SLOT(updateDate()));
    dateTimer->start(1000);

    slideshowTick=1;
    slideshowTimer = new QTimer(this);
    connect(slideshowTimer, SIGNAL(timeout()), this, SLOT(updateSlideshow()));
    slideshowTimer->start(5000);

    serverTick=0;
    serverTimer = new QTimer(this);
    connect(serverTimer, SIGNAL(timeout()),this,SLOT(updateServer()));
    serverTimer->start(200);

    addfdegree=trUtf8("\u00b0") + "F";

    //Update Text Size
    QFont fontbig;
    fontbig.setPointSize(bigtext);
    fontbig.setBold(true);

    QFont fontmid;
    fontmid.setPointSize(midtext);
    fontmid.setBold(true);

    QFont tabsize;
    tabsize.setPointSize(26*frameHeight/470);
    tabsize.setBold(true);
    ui->tabWidget->setFont(tabsize);


    ui->tempLabel->setFont(fontbig);
    ui->tempLabel->setText("75.0"+trUtf8("\u00b0") + "F");

    ui->timeLabel->setFont(fontmid);
    ui->dateLabel->setFont(fontmid);
    ui->centerinfolabel->setFont(fontmid);


    //connect the scrollwheel to LCD
    connect(ui->scrollWheel, SIGNAL(valueChanged(int)), ui->setpointlcdNumber, SLOT(display(int)));

    //Settings page
    ui->wdaylabel->setFont(fontmid);
    ui->wlowlabel->setFont(fontmid);
    ui->whighlabel->setFont(fontmid);
    ui->wsetlabel->setFont(fontmid);
    ui->day1label->setFont(fontmid);
    ui->day2label->setFont(fontmid);
    ui->day3label->setFont(fontmid);

    fontmid.setBold(false);

    ui->high1label->setFont(fontmid);
    ui->high2label->setFont(fontmid);
    ui->high3label->setFont(fontmid);
    ui->low1label->setFont(fontmid);
    ui->low2label->setFont(fontmid);
    ui->low3label->setFont(fontmid);




    // Get images from filesystem
    // store filenames in a file called filenames
    system("ls -1 /usr/share/matrix-gui-2.0/apps/qt_tstat/tstatimages > filenames");
    FILE *file;
    file = fopen("filenames", "r");
    int  i=0;
    char line[100];
    while(fgets(line, sizeof line, file)!=NULL) {
        filenames[i]=line;
        i++;
    }
    totalNums = i;
    fclose(file);


    // Connect FanSettingHangler
    // Multiple Signals to one Slot
    connect ( ui->autoButton, SIGNAL( clicked() ), this, SLOT( FanSettingHandler() ) );
    connect ( ui->highButton, SIGNAL( clicked() ), this, SLOT( FanSettingHandler() ) );
    connect ( ui->lowButton, SIGNAL( clicked() ), this, SLOT( FanSettingHandler() ) );
    connect ( ui->offButton, SIGNAL( clicked() ), this, SLOT( FanSettingHandler() ) );
    // name is needed to communicate with webserver
    ui->autoButton->setProperty("name","auto");
    ui->highButton->setProperty("name","high");
    ui->lowButton->setProperty("name","low");
    ui->offButton->setProperty("name","off");
    fanstate = "auto";


    // Update Logo Size
    qDebug() << ui->logoBox->geometry() << "  " << ui->logoBox->height();
    QString logofilepath;
    QPixmap piclogo;
    logofilepath = "/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/logo.png";
    piclogo.load( logofilepath);
    piclogo = piclogo.scaledToHeight( ui->logoBox->height()/2, Qt::SmoothTransformation ); //
    ui->logoLabel->setPixmap(piclogo);
    //ui->logoLabel->setMask(piclogo.mask());

}

void Widget::updateDate()
{
    ++timerTick;

    // Simulate Temp with sine wave
    double calc_at = (timerTick % 200) * 3.1415926535798932846 / 100;
    double value = ( 2*sin(calc_at)+72 );
    double upper = int(value) ;
    double lower = value-upper;
    double tensplace = int(lower *10);
    double total = upper + tensplace*.1;
    QString numstring;
    QString addzero=".0";

    if (tensplace==0)
    {
        StringOfTempinF= numstring.setNum(upper)+addzero+addfdegree;
    }
    else
    {
        StringOfTempinF= numstring.setNum(total)+addfdegree;
    }
    //Update the temp
    ui->tempLabel->setText(StringOfTempinF);

    //Change the date
    // Grabs the Current time off of the OS and format it to a string
    QDateTime date = QDateTime::currentDateTime();
    QString text = date.toString("dddd, d MMMM yyyy");
    QString text2 = date.toString("h:mm:ss ap");

    // Update the Labels on Home Page
    ui->dateLabel->setText(text);
    ui->timeLabel->setText(text2);

}

// changes the picutres every 5 seconds from images stored in tstatimages
// tstatimages located under /usr/share/matrix-gui-2.0/apps
void Widget::updateSlideshow()
{
    int onslide;
    onslide = ( slideshowTick % totalNums);

    picfilename = filenames[onslide];
    totalfilename = "/usr/share/matrix-gui-2.0/apps/qt_tstat/tstatimages/"+picfilename;
    totalfilename = totalfilename.trimmed();
    picimg.load( totalfilename);
    ui->photoLabel -> setPixmap (picimg );
    qDebug() << totalfilename;
    slideshowTick++;

}

void Widget::on_exitButton_clicked()
{
    qApp->exit();
}

void Widget::on_tiwebButton_clicked()
{
    ui->webView->load(QUrl("http://www.ti.com/"));
}


void Widget::on_googlewebButton_clicked()
{
    ui->webView->load(QUrl("http://www.google.com/"));
}

void Widget::on_wifiButton_clicked()
{
     system("/bin/sh /usr/bin/wpatest.sh wpa_gui-e");
}

void Widget::on_zoompButton_clicked()
{
    zoomfac-=.1;
    ui->webView->setZoomFactor(zoomfac);
}

void Widget::on_zoommButton_clicked()
{
    zoomfac+=.1;
    ui->webView->setZoomFactor(zoomfac);
}

void Widget::on_serverButton_toggled(bool checked)
{
    if (checked )
    {
        ui->serverButton->setText("Start");
        system("start-stop-daemon --stop --quiet --background --exec /usr/sbin/lighttpd2");

    }
    else
    {
        ui->serverButton->setText("Stop");
        system("cp /usr/sbin/lighttpd /usr/sbin/lighttpd2");
        system("start-stop-daemon --start -x /usr/sbin/lighttpd2 -- -f /usr/share/matrix-gui-2.0/apps/qt_tstat/lighttpd.conf");
    }
}


void Widget::FanSettingHandler()
{
    QPushButton *button = (QPushButton *)sender();

    if( button->property("name").toString() == "auto" )
    {
        qDebug() << "auto pressed";
        fanstate = "auto";
        ui->autoButton->setFocus(Qt::OtherFocusReason);
    }
    else if(button->property("name").toString() == "high")
    {
        qDebug() << "high pressed";
        fanstate = "high";
    }
    else if(button->property("name").toString() == "low")
    {
        qDebug() << "low pressed";
        fanstate = "low";
    }
    else if(button->property("name").toString() == "off")
    {
        qDebug() << "off pressed";
        fanstate = "off";
    }
    if (fanstate == "auto")
    {
        ui->autoButton->setFocus(Qt::OtherFocusReason);
    }
    else if (fanstate == "high")
    {
        ui->highButton->setFocus(Qt::OtherFocusReason);
    }
    else if (fanstate == "low")
    {
        ui->lowButton->setFocus(Qt::OtherFocusReason);
    }
    else if (fanstate == "off")
    {
        ui->offButton->setFocus(Qt::OtherFocusReason);
    }

    qDebug() << "in FanSettingHandler and state is : " << fanstate;

}

//for the http://xxx.xxx.xxx.xxx:8081 server
void Widget::updateServer()
{
    QFile fileread("/usr/share/matrix-gui-2.0/apps/qt_tstat/remotecont");
    if (!fileread.open(QIODevice::ReadOnly | QIODevice::Text))
             return;
    QTextStream in( &fileread );
    QString templine;
    QString newfansetting;
    templine = in.readLine();
    newfansetting = in.readLine();
    if (templine != "")
    {
        thesetpointfloat = templine.toInt();
        ui->scrollWheel->setValue(thesetpointfloat);

        if ( newfansetting != "")
        {
            fanstate = newfansetting;
            qDebug() << "the new fanstate is : " << newfansetting;
            FanSettingHandler();
        }
        fileread.close();
        system(" echo '' > /usr/share/matrix-gui-2.0/apps/qt_tstat/remotecont");


    }
    else
    {
        fileread.close();
    }

    QFile file("/usr/share/matrix-gui-2.0/apps/qt_tstat/thetemp");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
             return;

    QTextStream out(&file);
    out << ui->dateLabel->text() << "\n";
    out << ui->timeLabel->text() << "\n";
    out << StringOfTempinF << "\n";
    out << ui->setpointlcdNumber->value() << "\n";
    out << fanstate << "\n";
    file.close();
}

// Pop up windows
void Widget::on_changedateButton_clicked()
{
    datepopup = new Popup();
    datepopup->show();
}

void Widget::on_day1setButton_clicked()
{
    numpadpopup = new NumPad();
    numpadpopup->setButton(ui->day1setButton);
    numpadpopup->show();
}


void Widget::on_day2setButton_clicked()
{
    numpadpopup = new NumPad();
    numpadpopup->setButton(ui->day2setButton);
    numpadpopup->show();
}

void Widget::on_day3setButton_clicked()
{
    numpadpopup = new NumPad();
    numpadpopup->setButton(ui->day3setButton);
    numpadpopup->show();
}

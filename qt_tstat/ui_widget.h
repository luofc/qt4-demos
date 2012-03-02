/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Mon Feb 27 15:43:47 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>
#include "qtscrollwheel.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *fansettingslabel;
    QPushButton *autoButton;
    QPushButton *highButton;
    QPushButton *lowButton;
    QPushButton *offButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *setpointlabel;
    QHBoxLayout *horizontalLayout_5;
    QLCDNumber *setpointlcdNumber;
    QtScrollWheel *scrollWheel;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *dateLabel;
    QLabel *timeLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *tempLabel;
    QLabel *centerinfolabel;
    QSpacerItem *verticalSpacer;
    QGroupBox *logoBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *logoLabel;
    QWidget *settingTab;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_14;
    QPushButton *exitButton;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_6;
    QPushButton *changedateButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPushButton *serverButton;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_3;
    QLabel *wsetlabel;
    QLabel *wlowlabel;
    QLabel *whighlabel;
    QLabel *wdaylabel;
    QLabel *day1label;
    QLabel *day2label;
    QLabel *day3label;
    QLabel *high1label;
    QLabel *high2label;
    QLabel *high3label;
    QLabel *low1label;
    QLabel *low2label;
    QLabel *low3label;
    QPushButton *day1setButton;
    QPushButton *day2setButton;
    QPushButton *day3setButton;
    QWidget *webTab;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_8;
    QPushButton *tiwebButton;
    QPushButton *googlewebButton;
    QPushButton *wifiButton;
    QPushButton *zoompButton;
    QPushButton *zoommButton;
    QVBoxLayout *verticalLayout_13;
    QWebView *webView;
    QWidget *imgTab;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *photoLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        Widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #151B54;/*rgb(75,75,75);*/\n"
"    color: #151B54;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    /*border-top: 1px solid white;*//*rgb(180,180,180);*/\n"
"    position: absolute;\n"
"    border: 2px solid #151B54;\n"
"	\n"
"    \n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: white;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #151B54, stop:1 #151B54); /*rgb(116, 116, 118), stop:1 rgb(59, 57, 60));*/\n"
"    border: 2px solid #151B54; /*rgb(180,180,180);*/\n"
"    border-radius: 4px;\n"
"    padding: 4px;\n"
"    margin-left: 0.25em;\n"
"    margin-right: 0.25em;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    color: #151B54; /*black;*/\n"
"    background: white; /*rgb(180,180,180);*/\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    border-color: #151B54; /*rgb(180,180,180);*/\n"
"}\n"
"\n"
"QGroupBox { \n"
"    color: #151B54;\n"
"    background: white;\n"
"    bor"
                        "der-radius: 7px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0.4em 0.4em 0.1em 0.4em;\n"
"    background: transparent;\n"
"}\n"
"\n"
"QGroupBox[BackgroundImage=true] {\n"
"    color: black;\n"
"    background-color: #151B54;\n"
"    background-image: url(:/BackgroundImage.png);\n"
"}\n"
"\n"
"QGroupBox QLabel {\n"
"    color: #151B54;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"\n"
" QPushButton {\n"
"     font: bold 16pt;\n"
"     color: white ;\n"
"     background-color: transparent;\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushblueup.png);\n"
" 		border-top: 3px transparent;\n"
"     border-bottom: 3px transparent;\n"
"     border-right: 10px transparent;\n"
"     border-left: 10px transparent;\n"
" }\n"
"\n"
"QPushButton:focus {\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushbluedown.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/usr/"
                        "share/matrix-gui-2.0/apps/qt_tstat/appimages/pushbluedown.png);\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::South);
        homeTab = new QWidget();
        homeTab->setObjectName(QString::fromUtf8("homeTab"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(homeTab->sizePolicy().hasHeightForWidth());
        homeTab->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(homeTab);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget = new QWidget(homeTab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(25);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox { \n"
"    color: #151B54;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 white, stop:1 #E0FFFF);\n"
"    border: 2px solid #151B54; /*rgb(180, 180, 180); */\n"
"    border-radius: 7px;\n"
"    /*padding-top: 1.5em;*/\n"
"}\n"
"\n"
"QLabel{\n"
"	padding-bottom: 9px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 0);
        fansettingslabel = new QLabel(groupBox_2);
        fansettingslabel->setObjectName(QString::fromUtf8("fansettingslabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fansettingslabel->sizePolicy().hasHeightForWidth());
        fansettingslabel->setSizePolicy(sizePolicy2);
        fansettingslabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(fansettingslabel);

        autoButton = new QPushButton(groupBox_2);
        autoButton->setObjectName(QString::fromUtf8("autoButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(autoButton->sizePolicy().hasHeightForWidth());
        autoButton->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(autoButton);

        highButton = new QPushButton(groupBox_2);
        highButton->setObjectName(QString::fromUtf8("highButton"));
        sizePolicy3.setHeightForWidth(highButton->sizePolicy().hasHeightForWidth());
        highButton->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(highButton);

        lowButton = new QPushButton(groupBox_2);
        lowButton->setObjectName(QString::fromUtf8("lowButton"));
        sizePolicy3.setHeightForWidth(lowButton->sizePolicy().hasHeightForWidth());
        lowButton->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(lowButton);

        offButton = new QPushButton(groupBox_2);
        offButton->setObjectName(QString::fromUtf8("offButton"));
        sizePolicy3.setHeightForWidth(offButton->sizePolicy().hasHeightForWidth());
        offButton->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(offButton);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 2, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox { \n"
"    color: #151B54;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 white, stop:1 #E0FFFF);\n"
"    border: 2px solid #151B54; /*rgb(180, 180, 180); */\n"
"    border-radius: 7px;\n"
"    /*padding-top: 1.5em;*/\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        setpointlabel = new QLabel(groupBox_4);
        setpointlabel->setObjectName(QString::fromUtf8("setpointlabel"));
        sizePolicy2.setHeightForWidth(setpointlabel->sizePolicy().hasHeightForWidth());
        setpointlabel->setSizePolicy(sizePolicy2);
        setpointlabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(setpointlabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        setpointlcdNumber = new QLCDNumber(groupBox_4);
        setpointlcdNumber->setObjectName(QString::fromUtf8("setpointlcdNumber"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(setpointlcdNumber->sizePolicy().hasHeightForWidth());
        setpointlcdNumber->setSizePolicy(sizePolicy4);
        setpointlcdNumber->setMinimumSize(QSize(0, 50));
        setpointlcdNumber->setMaximumSize(QSize(16777215, 100));
        setpointlcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 127);\n"
"border-color: rgb(0, 0, 127);\n"
"\n"
""));
        setpointlcdNumber->setFrameShape(QFrame::Box);
        setpointlcdNumber->setFrameShadow(QFrame::Plain);
        setpointlcdNumber->setLineWidth(5);
        setpointlcdNumber->setMidLineWidth(0);
        setpointlcdNumber->setNumDigits(4);
        setpointlcdNumber->setProperty("intValue", QVariant(75));

        horizontalLayout_5->addWidget(setpointlcdNumber);


        verticalLayout_4->addLayout(horizontalLayout_5);

        scrollWheel = new QtScrollWheel(groupBox_4);
        scrollWheel->setObjectName(QString::fromUtf8("scrollWheel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(scrollWheel->sizePolicy().hasHeightForWidth());
        scrollWheel->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(scrollWheel);


        gridLayout_2->addWidget(groupBox_4, 0, 2, 2, 1);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(50);
        sizePolicy6.setVerticalStretch(80);
        sizePolicy6.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy6);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        dateLabel = new QLabel(groupBox_3);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bitstream Charter"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        dateLabel->setFont(font1);
        dateLabel->setStyleSheet(QString::fromUtf8(""));
        dateLabel->setFrameShape(QFrame::NoFrame);
        dateLabel->setScaledContents(true);
        dateLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(dateLabel);

        timeLabel = new QLabel(groupBox_3);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setFont(font1);
        timeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(timeLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tempLabel = new QLabel(groupBox_3);
        tempLabel->setObjectName(QString::fromUtf8("tempLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        tempLabel->setFont(font2);
        tempLabel->setStyleSheet(QString::fromUtf8(""));
        tempLabel->setScaledContents(true);
        tempLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(tempLabel);

        centerinfolabel = new QLabel(groupBox_3);
        centerinfolabel->setObjectName(QString::fromUtf8("centerinfolabel"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        centerinfolabel->setFont(font3);
        centerinfolabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(centerinfolabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout_2->addWidget(groupBox_3, 0, 1, 1, 1);

        logoBox = new QGroupBox(groupBox);
        logoBox->setObjectName(QString::fromUtf8("logoBox"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(50);
        sizePolicy7.setVerticalStretch(30);
        sizePolicy7.setHeightForWidth(logoBox->sizePolicy().hasHeightForWidth());
        logoBox->setSizePolicy(sizePolicy7);
        logoBox->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(255, 255, 255);\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(logoBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        logoLabel = new QLabel(logoBox);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy8);
        logoLabel->setMaximumSize(QSize(1000, 1000));
        logoLabel->setScaledContents(false);
        logoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(logoLabel);


        gridLayout_2->addWidget(logoBox, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_7->addWidget(widget);

        tabWidget->addTab(homeTab, QString());
        settingTab = new QWidget();
        settingTab->setObjectName(QString::fromUtf8("settingTab"));
        verticalLayout_11 = new QVBoxLayout(settingTab);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        widget_5 = new QWidget(settingTab);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_12 = new QVBoxLayout(widget_5);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBox_7 = new QGroupBox(widget_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"    color: #151B54;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 white, stop:1 #E0FFFF);\n"
"    border: 2px solid #151B54; /*rgb(180, 180, 180); */\n"
"    border-radius: 7px;\n"
"    /*padding-top: 1.5em;*/\n"
"}\n"
"QPushButton:focus {\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushblueup.png);\n"
"}"));
        gridLayout = new QGridLayout(groupBox_7);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(50);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy9);
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox { \n"
"    background-color: transparent;\n"
"\n"
"	border-color: transparent;\n"
"}\n"
""));
        verticalLayout_14 = new QVBoxLayout(groupBox_8);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        exitButton = new QPushButton(groupBox_8);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy3.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy3);
        exitButton->setMinimumSize(QSize(0, 50));

        verticalLayout_14->addWidget(exitButton);


        gridLayout->addWidget(groupBox_8, 2, 0, 1, 1);

        groupBox_10 = new QGroupBox(groupBox_7);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        sizePolicy9.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy9);
        verticalLayout_6 = new QVBoxLayout(groupBox_10);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(9, 9, 9, 9);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        changedateButton = new QPushButton(groupBox_10);
        changedateButton->setObjectName(QString::fromUtf8("changedateButton"));
        sizePolicy3.setHeightForWidth(changedateButton->sizePolicy().hasHeightForWidth());
        changedateButton->setSizePolicy(sizePolicy3);
        changedateButton->setMinimumSize(QSize(0, 25));

        verticalLayout_6->addWidget(changedateButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_10);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy10(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy10);

        horizontalLayout_3->addWidget(label);

        serverButton = new QPushButton(groupBox_10);
        serverButton->setObjectName(QString::fromUtf8("serverButton"));
        sizePolicy3.setHeightForWidth(serverButton->sizePolicy().hasHeightForWidth());
        serverButton->setSizePolicy(sizePolicy3);
        serverButton->setMinimumSize(QSize(100, 20));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        serverButton->setFont(font4);
        serverButton->setStyleSheet(QString::fromUtf8(""));
        serverButton->setCheckable(true);
        serverButton->setChecked(true);

        horizontalLayout_3->addWidget(serverButton);


        verticalLayout_6->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox_10, 0, 0, 2, 1);

        groupBox_11 = new QGroupBox(groupBox_7);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(50);
        sizePolicy11.setVerticalStretch(100);
        sizePolicy11.setHeightForWidth(groupBox_11->sizePolicy().hasHeightForWidth());
        groupBox_11->setSizePolicy(sizePolicy11);
        gridLayout_3 = new QGridLayout(groupBox_11);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        wsetlabel = new QLabel(groupBox_11);
        wsetlabel->setObjectName(QString::fromUtf8("wsetlabel"));
        sizePolicy5.setHeightForWidth(wsetlabel->sizePolicy().hasHeightForWidth());
        wsetlabel->setSizePolicy(sizePolicy5);
        wsetlabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wsetlabel, 0, 3, 1, 1);

        wlowlabel = new QLabel(groupBox_11);
        wlowlabel->setObjectName(QString::fromUtf8("wlowlabel"));
        sizePolicy2.setHeightForWidth(wlowlabel->sizePolicy().hasHeightForWidth());
        wlowlabel->setSizePolicy(sizePolicy2);
        wlowlabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wlowlabel, 0, 2, 1, 1);

        whighlabel = new QLabel(groupBox_11);
        whighlabel->setObjectName(QString::fromUtf8("whighlabel"));
        sizePolicy2.setHeightForWidth(whighlabel->sizePolicy().hasHeightForWidth());
        whighlabel->setSizePolicy(sizePolicy2);
        whighlabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(whighlabel, 0, 1, 1, 1);

        wdaylabel = new QLabel(groupBox_11);
        wdaylabel->setObjectName(QString::fromUtf8("wdaylabel"));
        sizePolicy2.setHeightForWidth(wdaylabel->sizePolicy().hasHeightForWidth());
        wdaylabel->setSizePolicy(sizePolicy2);
        wdaylabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(wdaylabel, 0, 0, 1, 1);

        day1label = new QLabel(groupBox_11);
        day1label->setObjectName(QString::fromUtf8("day1label"));
        sizePolicy2.setHeightForWidth(day1label->sizePolicy().hasHeightForWidth());
        day1label->setSizePolicy(sizePolicy2);
        day1label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day1label, 1, 0, 1, 1);

        day2label = new QLabel(groupBox_11);
        day2label->setObjectName(QString::fromUtf8("day2label"));
        sizePolicy2.setHeightForWidth(day2label->sizePolicy().hasHeightForWidth());
        day2label->setSizePolicy(sizePolicy2);
        day2label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day2label, 2, 0, 1, 1);

        day3label = new QLabel(groupBox_11);
        day3label->setObjectName(QString::fromUtf8("day3label"));
        sizePolicy2.setHeightForWidth(day3label->sizePolicy().hasHeightForWidth());
        day3label->setSizePolicy(sizePolicy2);
        day3label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day3label, 3, 0, 1, 1);

        high1label = new QLabel(groupBox_11);
        high1label->setObjectName(QString::fromUtf8("high1label"));
        high1label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high1label, 1, 1, 1, 1);

        high2label = new QLabel(groupBox_11);
        high2label->setObjectName(QString::fromUtf8("high2label"));
        high2label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high2label, 2, 1, 1, 1);

        high3label = new QLabel(groupBox_11);
        high3label->setObjectName(QString::fromUtf8("high3label"));
        high3label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high3label, 3, 1, 1, 1);

        low1label = new QLabel(groupBox_11);
        low1label->setObjectName(QString::fromUtf8("low1label"));
        low1label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low1label, 1, 2, 1, 1);

        low2label = new QLabel(groupBox_11);
        low2label->setObjectName(QString::fromUtf8("low2label"));
        low2label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low2label, 2, 2, 1, 1);

        low3label = new QLabel(groupBox_11);
        low3label->setObjectName(QString::fromUtf8("low3label"));
        low3label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low3label, 3, 2, 1, 1);

        day1setButton = new QPushButton(groupBox_11);
        day1setButton->setObjectName(QString::fromUtf8("day1setButton"));
        sizePolicy3.setHeightForWidth(day1setButton->sizePolicy().hasHeightForWidth());
        day1setButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(day1setButton, 1, 3, 1, 1);

        day2setButton = new QPushButton(groupBox_11);
        day2setButton->setObjectName(QString::fromUtf8("day2setButton"));
        sizePolicy3.setHeightForWidth(day2setButton->sizePolicy().hasHeightForWidth());
        day2setButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(day2setButton, 2, 3, 1, 1);

        day3setButton = new QPushButton(groupBox_11);
        day3setButton->setObjectName(QString::fromUtf8("day3setButton"));
        sizePolicy3.setHeightForWidth(day3setButton->sizePolicy().hasHeightForWidth());
        day3setButton->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(day3setButton, 3, 3, 1, 1);


        gridLayout->addWidget(groupBox_11, 0, 1, 3, 1);


        verticalLayout_12->addWidget(groupBox_7);


        verticalLayout_11->addWidget(widget_5);

        tabWidget->addTab(settingTab, QString());
        webTab = new QWidget();
        webTab->setObjectName(QString::fromUtf8("webTab"));
        webTab->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(webTab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_3 = new QWidget(webTab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"     color: #151B54;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 white, stop:1 #E0FFFF);\n"
"    border: 2px solid #151B54; /*rgb(180, 180, 180); */\n"
"    border-radius: 7px;\n"
"    /*padding-top: 1.5em;*/\n"
"}\n"
"\n"
"QWebView{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_6 = new QGroupBox(widget_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(10);
        groupBox_6->setFont(font5);
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border-radius: 0px;\n"
"	border-color: transparent;\n"
"    padding: 0px 0px;\n"
"	background-color: transparent;\n"
"}\n"
" QPushButton {\n"
"     font: bold 16pt;\n"
"     color: white ;\n"
"     background-color: transparent;\n"
"	 border-top: 3px transparent;\n"
"     border-bottom: 3px transparent;\n"
"     border-right: 10px transparent;\n"
"     border-left: 10px transparent;\n"
" }\n"
"QPushButton:focus {\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushblueup.png);\n"
"}\n"
"QPushButton:pressed {\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushbluedown.png);\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(groupBox_6);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tiwebButton = new QPushButton(groupBox_6);
        tiwebButton->setObjectName(QString::fromUtf8("tiwebButton"));
        sizePolicy3.setHeightForWidth(tiwebButton->sizePolicy().hasHeightForWidth());
        tiwebButton->setSizePolicy(sizePolicy3);
        tiwebButton->setFont(font4);

        verticalLayout_8->addWidget(tiwebButton);

        googlewebButton = new QPushButton(groupBox_6);
        googlewebButton->setObjectName(QString::fromUtf8("googlewebButton"));
        sizePolicy3.setHeightForWidth(googlewebButton->sizePolicy().hasHeightForWidth());
        googlewebButton->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(googlewebButton);

        wifiButton = new QPushButton(groupBox_6);
        wifiButton->setObjectName(QString::fromUtf8("wifiButton"));
        sizePolicy3.setHeightForWidth(wifiButton->sizePolicy().hasHeightForWidth());
        wifiButton->setSizePolicy(sizePolicy3);
        wifiButton->setFont(font4);

        verticalLayout_8->addWidget(wifiButton);

        zoompButton = new QPushButton(groupBox_6);
        zoompButton->setObjectName(QString::fromUtf8("zoompButton"));
        sizePolicy3.setHeightForWidth(zoompButton->sizePolicy().hasHeightForWidth());
        zoompButton->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(zoompButton);

        zoommButton = new QPushButton(groupBox_6);
        zoommButton->setObjectName(QString::fromUtf8("zoommButton"));
        sizePolicy3.setHeightForWidth(zoommButton->sizePolicy().hasHeightForWidth());
        zoommButton->setSizePolicy(sizePolicy3);

        verticalLayout_8->addWidget(zoommButton);

        wifiButton->raise();
        tiwebButton->raise();
        googlewebButton->raise();
        zoompButton->raise();
        zoommButton->raise();

        horizontalLayout_2->addWidget(groupBox_6);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 5, 5, 5);
        webView = new QWebView(widget_3);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl("http://www.ti.com/"));

        verticalLayout_13->addWidget(webView);


        horizontalLayout_2->addLayout(verticalLayout_13);


        horizontalLayout->addWidget(widget_3);

        tabWidget->addTab(webTab, QString());
        imgTab = new QWidget();
        imgTab->setObjectName(QString::fromUtf8("imgTab"));
        verticalLayout_9 = new QVBoxLayout(imgTab);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        widget_4 = new QWidget(imgTab);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color:white;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(widget_4);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        photoLabel = new QLabel(widget_4);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(photoLabel->sizePolicy().hasHeightForWidth());
        photoLabel->setSizePolicy(sizePolicy12);
        photoLabel->setMinimumSize(QSize(50, 50));
        photoLabel->setPixmap(QPixmap(QString::fromUtf8("../../../usr/share/matrix-gui-2.0/apps/qt_tstat/tstatimages/Ascent.jpg")));
        photoLabel->setScaledContents(true);
        photoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(photoLabel);


        verticalLayout_9->addWidget(widget_4);

        tabWidget->addTab(imgTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        fansettingslabel->setText(QApplication::translate("Widget", "Fan Settings", 0, QApplication::UnicodeUTF8));
        autoButton->setText(QApplication::translate("Widget", "Auto", 0, QApplication::UnicodeUTF8));
        highButton->setText(QApplication::translate("Widget", "High", 0, QApplication::UnicodeUTF8));
        lowButton->setText(QApplication::translate("Widget", "Low", 0, QApplication::UnicodeUTF8));
        offButton->setText(QApplication::translate("Widget", "Off", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QString());
        setpointlabel->setText(QApplication::translate("Widget", "Set Point", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        setpointlcdNumber->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_3->setTitle(QString());
        dateLabel->setText(QApplication::translate("Widget", "Wednesday, 15 February 2012", 0, QApplication::UnicodeUTF8));
        timeLabel->setText(QApplication::translate("Widget", "12:12:12 pm", 0, QApplication::UnicodeUTF8));
        tempLabel->setText(QApplication::translate("Widget", "70.3oF", 0, QApplication::UnicodeUTF8));
        centerinfolabel->setText(QApplication::translate("Widget", "Current Temperature", 0, QApplication::UnicodeUTF8));
        logoLabel->setText(QApplication::translate("Widget", "test", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("Widget", "Home", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QString());
        groupBox_8->setTitle(QString());
        exitButton->setText(QApplication::translate("Widget", "Exit", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QString());
        changedateButton->setText(QApplication::translate("Widget", "Date", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Server", 0, QApplication::UnicodeUTF8));
        serverButton->setText(QApplication::translate("Widget", "Start", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QString());
        wsetlabel->setText(QApplication::translate("Widget", "Set", 0, QApplication::UnicodeUTF8));
        wlowlabel->setText(QApplication::translate("Widget", "Low", 0, QApplication::UnicodeUTF8));
        whighlabel->setText(QApplication::translate("Widget", "High", 0, QApplication::UnicodeUTF8));
        wdaylabel->setText(QApplication::translate("Widget", "Day", 0, QApplication::UnicodeUTF8));
        day1label->setText(QApplication::translate("Widget", "Monday", 0, QApplication::UnicodeUTF8));
        day2label->setText(QApplication::translate("Widget", "Tuesday", 0, QApplication::UnicodeUTF8));
        day3label->setText(QApplication::translate("Widget", "Wensday", 0, QApplication::UnicodeUTF8));
        high1label->setText(QApplication::translate("Widget", "75", 0, QApplication::UnicodeUTF8));
        high2label->setText(QApplication::translate("Widget", "75", 0, QApplication::UnicodeUTF8));
        high3label->setText(QApplication::translate("Widget", "75", 0, QApplication::UnicodeUTF8));
        low1label->setText(QApplication::translate("Widget", "50", 0, QApplication::UnicodeUTF8));
        low2label->setText(QApplication::translate("Widget", "50", 0, QApplication::UnicodeUTF8));
        low3label->setText(QApplication::translate("Widget", "50", 0, QApplication::UnicodeUTF8));
        day1setButton->setText(QApplication::translate("Widget", "70", 0, QApplication::UnicodeUTF8));
        day2setButton->setText(QApplication::translate("Widget", "70", 0, QApplication::UnicodeUTF8));
        day3setButton->setText(QApplication::translate("Widget", "70", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(settingTab), QApplication::translate("Widget", "Settings", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QString());
        tiwebButton->setText(QApplication::translate("Widget", "TI", 0, QApplication::UnicodeUTF8));
        googlewebButton->setText(QApplication::translate("Widget", "Google", 0, QApplication::UnicodeUTF8));
        wifiButton->setText(QApplication::translate("Widget", "Wifi", 0, QApplication::UnicodeUTF8));
        zoompButton->setText(QApplication::translate("Widget", "Zoom -", 0, QApplication::UnicodeUTF8));
        zoommButton->setText(QApplication::translate("Widget", "Zoom +", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(webTab), QApplication::translate("Widget", "Web", 0, QApplication::UnicodeUTF8));
        photoLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(imgTab), QApplication::translate("Widget", "Img", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

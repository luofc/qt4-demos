/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created: Mon Feb 27 15:43:47 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Popup
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *closepopupButton;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QComboBox *monthcomboBox;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QComboBox *datecomboBox;

    void setupUi(QWidget *Popup)
    {
        if (Popup->objectName().isEmpty())
            Popup->setObjectName(QString::fromUtf8("Popup"));
        Popup->resize(502, 374);
        Popup->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: black;/*rgb(75,75,75);*/\n"
"\n"
"}\n"
""));
        gridLayout = new QGridLayout(Popup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(Popup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(300, 250));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #151B54;/*rgb(75,75,75);*/\n"
"    color: white;\n"
"  border: 2px solid white; /*rgb(180,180,180);*/\n"
"    border-radius: 4px;\n"
"}\n"
"QLabel{\n"
"border: 2px solid #151B54; /*rgb(180,180,180);*/\n"
"}\n"
"\n"
"QComboBox { \n"
"font: bold 14pt;\n"
"     border: 3px solid white;\n"
"     border-radius: 3px;\n"
"     padding: 1px 18px 1px 3px;\n"
"     min-width: 6em;\n"
"     min-height: 2em;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox { \n"
"    color: #151B54;\n"
"    background: white;\n"
"    border-radius: 7px;\n"
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
" QPushButton "
                        "{\n"
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
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushblueup.png);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushbluedown.png);\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(pushButton_2, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        gridLayout_2->addLayout(verticalLayout, 2, 0, 1, 1);

        closepopupButton = new QPushButton(widget);
        closepopupButton->setObjectName(QString::fromUtf8("closepopupButton"));
        closepopupButton->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(closepopupButton, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        monthcomboBox = new QComboBox(widget);
        monthcomboBox->setObjectName(QString::fromUtf8("monthcomboBox"));
        monthcomboBox->setMinimumSize(QSize(165, 54));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(21, 27, 84, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        monthcomboBox->setPalette(palette);
        monthcomboBox->setEditable(false);
        monthcomboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        monthcomboBox->setFrame(true);

        verticalLayout_2->addWidget(monthcomboBox);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        datecomboBox = new QComboBox(widget);
        datecomboBox->setObjectName(QString::fromUtf8("datecomboBox"));
        datecomboBox->setMinimumSize(QSize(165, 54));

        verticalLayout_2->addWidget(datecomboBox);


        gridLayout_2->addLayout(verticalLayout_2, 2, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(Popup);

        QMetaObject::connectSlotsByName(Popup);
    } // setupUi

    void retranslateUi(QWidget *Popup)
    {
        Popup->setWindowTitle(QApplication::translate("Popup", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Popup->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("Popup", "Change", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Popup", "Month", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Popup", "Date", 0, QApplication::UnicodeUTF8));
        closepopupButton->setText(QApplication::translate("Popup", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Popup: public Ui_Popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H

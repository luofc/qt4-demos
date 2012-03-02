/********************************************************************************
** Form generated from reading UI file 'numpad.ui'
**
** Created: Mon Feb 27 15:43:47 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPAD_H
#define UI_NUMPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumPad
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *displayLineEdit;
    QPushButton *deleteButton;
    QPushButton *exitButton;

    void setupUi(QWidget *NumPad)
    {
        if (NumPad->objectName().isEmpty())
            NumPad->setObjectName(QString::fromUtf8("NumPad"));
        NumPad->resize(200, 250);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NumPad->sizePolicy().hasHeightForWidth());
        NumPad->setSizePolicy(sizePolicy);
        NumPad->setStyleSheet(QString::fromUtf8("QWidget {\n"
"\n"
"    background-color: #151B54;/*rgb(75,75,75);*/\n"
"    color: white;\n"
"}\n"
"\n"
"QLineEdit{ \n"
"	font: bold 14pt;\n"
"     color: #151B54 ;\n"
"	background-color: white;\n"
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
" QPushButton {\n"
"     font: bold 16pt;\n"
"     color: white ;\n"
"     background-color: transparent;\n"
"	border-image: url(:/usr/share/matrix-gui-2.0/apps/qt_tstat/appimages/pushblueup.png);\n"
" 		border-top: 3px transparent;\n"
"     border-bottom: 3px"
                        " transparent;\n"
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
        gridLayout = new QGridLayout(NumPad);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_1 = new QPushButton(NumPad);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(NumPad);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(NumPad);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(NumPad);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(NumPad);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(NumPad);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(NumPad);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_8, 4, 1, 1, 1);

        pushButton_9 = new QPushButton(NumPad);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_9, 4, 2, 1, 1);

        pushButton_0 = new QPushButton(NumPad);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 1);

        pushButton_6 = new QPushButton(NumPad);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        displayLineEdit = new QLineEdit(NumPad);
        displayLineEdit->setObjectName(QString::fromUtf8("displayLineEdit"));
        displayLineEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(displayLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        deleteButton = new QPushButton(NumPad);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(deleteButton, 5, 0, 1, 1);

        exitButton = new QPushButton(NumPad);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(exitButton, 5, 2, 1, 1);


        retranslateUi(NumPad);

        QMetaObject::connectSlotsByName(NumPad);
    } // setupUi

    void retranslateUi(QWidget *NumPad)
    {
        NumPad->setWindowTitle(QApplication::translate("NumPad", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("NumPad", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("NumPad", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("NumPad", "3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("NumPad", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("NumPad", "5", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("NumPad", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("NumPad", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("NumPad", "9", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("NumPad", "0", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("NumPad", "6", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("NumPad", "C", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("NumPad", "X", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NumPad: public Ui_NumPad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPAD_H

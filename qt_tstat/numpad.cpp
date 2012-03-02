#include "numpad.h"
#include "ui_numpad.h"
#include <QtGui>
NumPad::NumPad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NumPad)
{
    ui->setupUi(this);
    connect ( ui->pushButton_1, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_2, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_3, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_4, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_5, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_6, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_7, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_8, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_9, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->pushButton_0, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    connect ( ui->deleteButton, SIGNAL( clicked() ), this, SLOT( ButtonHandler() ) );
    ui->pushButton_1->setProperty("value","1");
    ui->pushButton_2->setProperty("value","2");
    ui->pushButton_3->setProperty("value","3");
    ui->pushButton_4->setProperty("value","4");
    ui->pushButton_5->setProperty("value","5");
    ui->pushButton_6->setProperty("value","6");
    ui->pushButton_7->setProperty("value","7");
    ui->pushButton_8->setProperty("value","8");
    ui->pushButton_9->setProperty("value","9");
    ui->pushButton_0->setProperty("value","0");
    ui->deleteButton->setProperty("value","10");
    outputText = "";
    count= 0;
}
void NumPad::ButtonHandler()
{
    QPushButton *button = (QPushButton *)sender();

    if ( button->property("value").toString() == "10")
    {
        outputText = "";
        ui->displayLineEdit->setText(outputText);
    }
    else
    {
    outputText += button->property("value").toString();
    ui->displayLineEdit->setText(outputText);
    }
    /*if (count == 0 )
    {
        outputvalue = button->property("value").toInt()*10;
        ui->displayLineEdit->setText( button->property("value").toString() );
    }
    else
    {
        QString outputText;
        outputvalue += button->property("value").toInt();
        outputText.setNum(outputvalue);
        ui->displayLineEdit->setText( outputText );

    }

    count++;

    if ( button->property("value").toInt() ==10)
    {
        ui->displayLineEdit->setText("");
        count =0;
    }*/
}

NumPad::~NumPad()
{
    delete ui;
}


void NumPad::on_exitButton_clicked()
{
    outputvalue = outputText.toInt();
    parentbutton->setText(outputText);
    qDebug() << outputvalue;
    close();
}
void NumPad::setButton(QPushButton *button)
{
    parentbutton = button;

}

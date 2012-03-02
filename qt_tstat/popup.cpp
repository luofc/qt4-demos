#include "popup.h"
#include "ui_popup.h"

Popup::Popup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Popup)
{
    ui->setupUi(this);

    ui->monthcomboBox->addItem(tr("January"),   "01");
    ui->monthcomboBox->addItem(tr("Febuary"),   "02");
    ui->monthcomboBox->addItem(tr("March"),     "03");
    ui->monthcomboBox->addItem(tr("April"),     "04");
    ui->monthcomboBox->addItem(tr("May"),       "05");
    ui->monthcomboBox->addItem(tr("June"),      "06");
    ui->monthcomboBox->addItem(tr("July"),      "07");
    ui->monthcomboBox->addItem(tr("August"),    "08");
    ui->monthcomboBox->addItem(tr("September"), "09");
    ui->monthcomboBox->addItem(tr("October"),   "10");
    ui->monthcomboBox->addItem(tr("November"),  "11");
    ui->monthcomboBox->addItem(tr("December"),  "12");

    ui->datecomboBox->addItem(tr("1"),    "01");
    ui->datecomboBox->addItem(tr("2"),    "02");
    ui->datecomboBox->addItem(tr("3"),    "03");
    ui->datecomboBox->addItem(tr("4"),    "04");
    ui->datecomboBox->addItem(tr("5"),    "05");
    ui->datecomboBox->addItem(tr("6"),    "06");
    ui->datecomboBox->addItem(tr("7"),    "07");
    ui->datecomboBox->addItem(tr("8"),    "08");
    ui->datecomboBox->addItem(tr("9"),    "09");
    ui->datecomboBox->addItem(tr("10"),  "10");
    ui->datecomboBox->addItem(tr("11"),  "11");
    ui->datecomboBox->addItem(tr("12"),  "12");
    ui->datecomboBox->addItem(tr("13"),  "13");
    ui->datecomboBox->addItem(tr("14"),  "14");
    ui->datecomboBox->addItem(tr("15"),  "15");
    ui->datecomboBox->addItem(tr("16"),  "16");
    ui->datecomboBox->addItem(tr("17"),  "17");
    ui->datecomboBox->addItem(tr("18"),  "18");
    ui->datecomboBox->addItem(tr("19"),  "19");
    ui->datecomboBox->addItem(tr("20"),  "20");
    ui->datecomboBox->addItem(tr("21"),  "21");
    ui->datecomboBox->addItem(tr("22"),  "22");
    ui->datecomboBox->addItem(tr("23"),  "23");
    ui->datecomboBox->addItem(tr("24"),  "24");
    ui->datecomboBox->addItem(tr("25"),  "25");
    ui->datecomboBox->addItem(tr("26"),  "26");
    ui->datecomboBox->addItem(tr("27"),  "27");
    ui->datecomboBox->addItem(tr("28"),  "28");
    ui->datecomboBox->addItem(tr("29"),  "29");
    ui->datecomboBox->addItem(tr("30"),  "30");
    ui->datecomboBox->addItem(tr("31"),  "31");

    setWindowState(Qt::WindowFullScreen);

    // connect keyboard
    connect(ui->testlineEdit,SIGNAL(selectionChanged()),this,SLOT(on_keyboard()));
    lineEditkeyboard = new Keyboard();


}

Popup::~Popup()
{
    delete ui;
}

void Popup::on_closepopupButton_clicked()
{
    close();
}

void Popup::on_keyboard()
{
        QLineEdit *line = (QLineEdit *)sender();
        lineEditkeyboard->setLineEdit(line);
        //lineEditkeyboard->resize(200,200);
        lineEditkeyboard->show();
}


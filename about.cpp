#include "about.h"
#include "ui_about.h"
#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    //ui->label1->setText(MainWindow::shop()->s1);
    //int S1=1;
    //S1=Dialog::s1;
    ui->label1->setNum(Dialog::s1);
    ui->label2->setNum(Dialog::s2);
    ui->label3->setNum(Dialog::s3);
    ui->label4->setNum(Dialog::s4);
    ui->label5->setNum(Dialog::s5);
    ui->label6->setNum(Dialog::s6);
    ui->label7->setNum(Dialog::s7);
    ui->label8->setNum(Dialog::s8);
    ui->label9->setNum(Dialog::s9);
    ui->label10->setNum(Dialog::s10);
    ui->label11->setNum(Dialog::s11);
    ui->label12->setNum(Dialog::s12);
    ui->labelresult->setNum(Dialog::result);
    //QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

about::~about()
{
    delete ui;
}


void about::on_pushButton_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "提示", "结算成功");
    message.exec();
    this->close();
    Dialog::s1=0;
    Dialog::s2=0;
    Dialog::s3=0;
    Dialog::s4=0;
    Dialog::s5=0;
    Dialog::s6=0;
    Dialog::s7=0;
    Dialog::s8=0;
    Dialog::s9=0;
    Dialog::s10=0;
    Dialog::s11=0;
    Dialog::s12=0;

}

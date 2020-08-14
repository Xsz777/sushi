#include "mainwindow.h"
#include "dialog.h"
#include "about.h"
#include "ui_dialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMaximumSize(800,600);
    this->setMinimumSize(800,600);
}

int MainWindow::k=1;
//int MainWindow::k2=1;

MainWindow::~MainWindow()
{
    delete ui;

}

/*void MainWindow::on_pushButton_clicked()
{
    this->close();
}*/

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "关于我们", "您的意见反馈是对我们最大的帮助^_^");
    message.exec();
}

void MainWindow::on_pushButton3_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "使用说明", "点击’点餐‘进入点餐界面，添加商品到购物车，确认订单并回到主界面，然后在购物车查看订单并结算。");
    message.exec();
}

void MainWindow::on_pushButton1_clicked()
{
    k--;
    if(k==0)
    {
        Dialog *dialog = new Dialog;
        dialog->setAttribute(Qt::WA_DeleteOnClose);
        dialog->setWindowTitle(tr("寿司点单"));
        dialog->show();
        dialog->exec();
    }
    k++;
}



void MainWindow::on_pushButton2_clicked()//shop car
{
    if(Dialog::result==0)
    {
        QMessageBox message(QMessageBox::NoIcon, "温馨提示", "您还什么都没有挑选哦，^_^");
        message.exec();
    }
    else
    {
    k--;
    if(k==0)
    {
        about *dialo=new about;
        dialo->setAttribute(Qt::WA_DeleteOnClose);
        dialo->setWindowTitle(tr("购物车"));
        dialo->show();
        dialo->exec();
    }
    k++;
    }
}

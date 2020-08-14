#include "about.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <QDialog>
#include <QWidget>
#include <QMessageBox>
#include <QString>

int Dialog::s1=0;
int Dialog::s2=0;
int Dialog::s3=0;
int Dialog::s4=0;
int Dialog::s5=0;
int Dialog::s6=0;
int Dialog::s7=0;
int Dialog::s8=0;
int Dialog::s9=0;
int Dialog::s10=0;
int Dialog::s11=0;
int Dialog::s12=0;
int Dialog::result=0;

Dialog::Dialog(QWidget *parent) :
 QDialog(parent),
 ui_dialog(new Ui::Dialog)
{

    ui_dialog->setupUi(this);// 新增
    ui_dialog->spinBoxs1->setValue(s1);
    ui_dialog->spinBoxs2->setValue(s2);
    ui_dialog->spinBoxs3->setValue(s3);
    ui_dialog->spinBoxs4->setValue(s4);
    ui_dialog->spinBoxs5->setValue(s5);
    ui_dialog->spinBoxs6->setValue(s6);
    ui_dialog->spinBoxs7->setValue(s7);
    ui_dialog->spinBoxs8->setValue(s8);
    ui_dialog->spinBoxs9->setValue(s9);
    ui_dialog->spinBoxs10->setValue(s10);
    ui_dialog->spinBoxs11->setValue(s11);
    ui_dialog->spinBoxs12->setValue(s12);
    this->setMaximumSize(800,600);
    this->setMinimumSize(800,600);

}



Dialog::~Dialog()
{
    delete ui_dialog;
}


void Dialog::on_pushButtons1_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "黑、蓝、白、三色交织在一起构成一只萌萌的大眼睛，视觉美感的同时也给味蕾带来美妙的刺激……");
    message.exec();
}

void Dialog::on_pushButtons2_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "黑黑的、亮亮的、弹弹的、让我们一起在舌尖上跳舞吧……");
    message.exec();
}

void Dialog::on_pushButtons4_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "尘埃被钙化，那些潜行于云彩之下的诱惑，被雨水冲散，骨骼深处，显示出少有的坚韧……");
    message.exec();
}

void Dialog::on_pushButtons3_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "她美丽的身躯就像那朵蔷薇花，贴着大地温柔的诉说着她的情话，告诉世界，我将用它亲吻你的脸颊……");
    message.exec();
}

void Dialog::on_pushButtons5_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "你是一条虫子，停泊在花心，喜欢打听，风跳动的旋律，记录着心的声音……");
    message.exec();
}

void Dialog::on_pushButtons9_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "金龟子用诗意构成的小房子，爬在窗户上，踩着行人走，我该怎样与它相遇，变成美丽的王子、小仙女……");
    message.exec();
}

void Dialog::on_pushButtons6_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "当你将我当作天使，也许我更像天使，可天使之心或藏着蠢蠢欲动的恶魔。当你将我当作恶魔，也许我更像恶魔，可天使之芽有时从恶魔之土钻出。 天使或恶魔也许是诱逼的结果，我的天性是自然、平和与无罪过……");
    message.exec();
}

void Dialog::on_pushButtons7_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "×××××××××××××××××××××××××××××××××××××××××\n×××××××××××××××××××××××××××××××……");
    message.exec();
}

void Dialog::on_pushButtons8_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "只是红霉素罢了……");
    message.exec();
}

void Dialog::on_pushButtons10_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "一枚橙子，它有着漂亮的抛光的外表，金黄的大衣包裹多汁的身体，这一个多么饱满的小月亮，一只兴奋的小气球，仿佛，它从来就是如此甜美，不曾青涩……");
    message.exec();
}

void Dialog::on_pushButtons11_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "所有的蝴蝶，都曾经是一只小小的毛毛虫……");
    message.exec();
}

void Dialog::on_pushButtons12_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, "寿司详情", "一枚小小的红宝石，璀璨的红在我手指跳舞，依稀中看见了工匠的切割打磨身影……");
    message.exec();
}

void Dialog::on_pushButton_clicked()
{
    s1=ui_dialog->spinBoxs1->text().toInt();
    s2=ui_dialog->spinBoxs2->text().toInt();
    s3=ui_dialog->spinBoxs3->text().toInt();
    s4=ui_dialog->spinBoxs4->text().toInt();
    s5=ui_dialog->spinBoxs5->text().toInt();
    s6=ui_dialog->spinBoxs6->text().toInt();
    s7=ui_dialog->spinBoxs7->text().toInt();
    s8=ui_dialog->spinBoxs8->text().toInt();
    s9=ui_dialog->spinBoxs9->text().toInt();
    s10=ui_dialog->spinBoxs10->text().toInt();
    s11=ui_dialog->spinBoxs11->text().toInt();
    s12=ui_dialog->spinBoxs12->text().toInt();
    result=s1*55+s2*35+s3*99+s4*60+s5*80+s6*66+s7*70+s8*50+s9*80+s10*77+s11*10+s12*90;
    /*if(result!=0)
    {
        about *dialo=new about;
        dialo->setAttribute(Qt::WA_DeleteOnClose);
        dialo->setWindowTitle(tr("寿司清单"));
        dialo->show();
        dialo->exec();
     //QMessageBox::information(this,"总价",QString::number(result));
    }*/
    if(result==0)
    {
        QMessageBox::information(this,"温馨提示","您还什么都没有挑选哦，^_^" );
    }
    else
    {
        this->close();
    }

}

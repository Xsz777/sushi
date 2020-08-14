#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    friend class about;
    friend class MainWindow;
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:


    void on_pushButtons1_clicked();

    void on_pushButtons2_clicked();

    void on_pushButtons3_clicked();

    void on_pushButtons4_clicked();


    void on_pushButtons5_clicked();

    void on_pushButtons9_clicked();

    void on_pushButtons6_clicked();

    void on_pushButtons7_clicked();

    void on_pushButtons8_clicked();

    void on_pushButtons10_clicked();

    void on_pushButtons11_clicked();

    void on_pushButtons12_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog  *ui_dialog;

    int static s1;
    int static s2;
    int static s3;
    int static s4;
    int static s5;
    int static s6;
    int static s7;
    int static s8;
    int static s9;
    int static s10;
    int static s11;
    int static s12;
    int static result;
    //QDialog  *m_dialog;


};

#endif // DIALOG_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_0_clicked();
    void on_Button_1_clicked();
    void on_Button_2_clicked();
    void on_Button_3_clicked();
    void on_Button_4_clicked();
    void on_Button_5_clicked();
    void on_Button_6_clicked();
    void on_Button_7_clicked();
    void on_Button_8_clicked();
    void on_Button_9_clicked();
    void on_Button_Clear_clicked();
    void on_Button_Backspase_clicked();
    void on_Button_Equal_clicked();
    void on_Button_Plus_clicked();
    void on_Button_Minus_clicked();
    void on_Button_Mult_clicked();
    void on_Button_Div_clicked();
    void on_Button_Sign_clicked();

    void updateLcdOperand();

private:
    Ui::MainWindow *ui;
    double  operand = 0;
};
#endif // MAINWINDOW_H

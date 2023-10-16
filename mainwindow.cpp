#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_0_clicked()
{
    operand = operand * 10;
    updateLcdOperand();
}


void MainWindow::on_Button_1_clicked()
{
    operand = operand * 10 + 1;
    updateLcdOperand();
}


void MainWindow::on_Button_2_clicked()
{
    operand = operand * 10 + 2;
    updateLcdOperand();
}


void MainWindow::on_Button_3_clicked()
{
    operand = operand * 10 + 3;
    updateLcdOperand();
}


void MainWindow::on_Button_4_clicked()
{
    operand = operand * 10 + 4;
    updateLcdOperand();
}


void MainWindow::on_Button_5_clicked()
{
    operand = operand * 10 + 5;
    updateLcdOperand();
}


void MainWindow::on_Button_6_clicked()
{
    operand = operand * 10 + 6;
    updateLcdOperand();
}


void MainWindow::on_Button_7_clicked()
{
    operand = operand * 10 + 7;
    updateLcdOperand();
}


void MainWindow::on_Button_8_clicked()
{
    operand = operand * 10 + 8;
    updateLcdOperand();
}


void MainWindow::on_Button_9_clicked()
{
    operand = operand * 10 + 9;
    updateLcdOperand();
}


void MainWindow::on_Button_Clear_clicked()
{
    operand = 0;
    updateLcdOperand();
}


void MainWindow::on_Button_Backspase_clicked()
{
    operand = (int)operand / 10;
    updateLcdOperand();
}


void MainWindow::on_Button_Equal_clicked()
{

}


void MainWindow::on_Button_Plus_clicked()
{

}


void MainWindow::on_Button_Minus_clicked()
{

}


void MainWindow::on_Button_Mult_clicked()
{

}


void MainWindow::on_Button_Div_clicked()
{

}


void MainWindow::on_Button_Sign_clicked()
{
    operand *= -1;
}

void MainWindow::updateLcdOperand()
{
    ui->lcdOperand->display(operand);
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numClicked(QString num)
{
    if (m_mainDisplay == "0")
    {
        m_mainDisplay = num;
        ui->textEdit_maindisplay->setText(m_mainDisplay);
    }
    else
    {
        m_mainDisplay += num;
        ui->textEdit_maindisplay->setText(m_mainDisplay);
    }
}

void MainWindow::on_pushButton_add_clicked()
{
    if (operatorPressed == add)
        return;
    //
    m_firstNum = m_mainDisplay.toDouble();
    operatorPressed = add;
    m_mainDisplay = "";
    ui->textEdit_maindisplay->setText(m_mainDisplay);
    // Update textEdit_subdisplay
    m_subDisplay = QString::number(m_firstNum) + " + ";
    ui->textEdit_subdisplay->setText(m_subDisplay);
}

void MainWindow::on_pushButton_minus_clicked()
{
    if (operatorPressed == subtract)
        return;
    //
    m_firstNum = m_mainDisplay.toDouble();
    operatorPressed = subtract;
    m_mainDisplay = "";
    ui->textEdit_maindisplay->setText(m_mainDisplay);
    // Update textEdit_subdisplay
    m_subDisplay = QString::number(m_firstNum) + " - ";
    ui->textEdit_subdisplay->setText(m_subDisplay);
}

void MainWindow::on_pushButton_multiply_clicked()
{
    if (operatorPressed == multiply)
        return;
    //
    m_firstNum = m_mainDisplay.toDouble();
    operatorPressed = multiply;
    m_mainDisplay = "";
    ui->textEdit_maindisplay->setText(m_mainDisplay);
    // Update textEdit_subdisplay
    m_subDisplay = QString::number(m_firstNum) + " * ";
    ui->textEdit_subdisplay->setText(m_subDisplay);
}

void MainWindow::on_pushButton_divide_clicked()
{
    if (operatorPressed == divide)
        return;
    //
    m_firstNum = m_mainDisplay.toDouble();
    operatorPressed = divide;
    m_mainDisplay = "";
    ui->textEdit_maindisplay->setText(m_mainDisplay);
    // Update textEdit_subdisplay
    m_subDisplay = QString::number(m_firstNum) + " / ";
    ui->textEdit_subdisplay->setText(m_subDisplay);
}

void MainWindow::on_pushButton_equals_clicked()
{
    if (operatorPressed == equals)
        return;

    m_secondNum = m_mainDisplay.toDouble();

    // Clear textEdit_subdisplay
    m_subDisplay = "";
    ui->textEdit_subdisplay->setText("");

    switch (operatorPressed)
    {
        case add:
            m_result = m_firstNum + m_secondNum;
            m_mainDisplay = QString::number(m_result);
            ui->textEdit_maindisplay->setText(m_mainDisplay);
            break;
        case subtract:
            m_result = m_firstNum - m_secondNum;
            m_mainDisplay = QString::number(m_result);
            ui->textEdit_maindisplay->setText(m_mainDisplay);
            break;
        case multiply:
            m_result = m_firstNum * m_secondNum;
            m_mainDisplay = QString::number(m_result);
            ui->textEdit_maindisplay->setText(m_mainDisplay);
            break;
        case divide:
            m_result = m_firstNum / m_secondNum;
            m_mainDisplay = QString::number(m_result);
            ui->textEdit_maindisplay->setText(m_mainDisplay);
            break;
    }
    operatorPressed = equals;
}

void MainWindow::on_pushButton_1_clicked()
{
    numClicked("1");
}

void MainWindow::on_pushButton_2_clicked()
{
    numClicked("2");
}

void MainWindow::on_pushButton_3_clicked()
{
    numClicked("3");
}

void MainWindow::on_pushButton_4_clicked()
{
    numClicked("4");
}

void MainWindow::on_pushButton_5_clicked()
{
    numClicked("5");
}

void MainWindow::on_pushButton_6_clicked()
{
    numClicked("6");
}

void MainWindow::on_pushButton_7_clicked()
{
    numClicked("7");
}

void MainWindow::on_pushButton_8_clicked()
{
    numClicked("8");
}

void MainWindow::on_pushButton_9_clicked()
{
    numClicked("9");
}

void MainWindow::on_pushButton_0_clicked()
{
    numClicked("0");
}

void MainWindow::on_pushButton_c_clicked()
{
    m_mainDisplay = "0";
    ui->textEdit_maindisplay->setText(m_mainDisplay);
    m_subDisplay = "";
    ui->textEdit_subdisplay->setText(m_subDisplay);
    m_firstNum = 0;
    m_secondNum = 0;
    m_result = 0;
}

void MainWindow::on_pushButton_ce_clicked()
{
    m_mainDisplay = "0";
    ui->textEdit_maindisplay->setText(m_mainDisplay);
}

void MainWindow::on_pushButton_point_clicked()
{
    if (!m_mainDisplay.contains('.'))
    {
        m_mainDisplay += '.';
        ui->textEdit_maindisplay->setText(m_mainDisplay);
    }
}

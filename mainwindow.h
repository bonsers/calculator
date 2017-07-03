#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_equals_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_c_clicked();

    void on_pushButton_ce_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_divide_clicked();

    void on_pushButton_point_clicked();

private:
    Ui::MainWindow *ui;

    double m_firstNum;
    double m_secondNum;
    double m_result;
    QString m_mainDisplay = "0";
    QString m_subDisplay = "";
    enum OPERATOR {
        initial,
        add,
        subtract,
        multiply,
        divide,
        equals
    };
    OPERATOR operatorPressed = initial;
    void numClicked(QString num);
};

#endif // MAINWINDOW_H

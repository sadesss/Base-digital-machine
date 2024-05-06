#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#define BASE 0
#define ENTER 1
#define ILL 2
#define PRISON 3

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
    int on_pushButton_clicked();

    int on_pushButton2_clicked();

    int on_pushButton3_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

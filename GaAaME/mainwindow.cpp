#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    movie(":/res/img/IIINTROOO.gif")
{
    ui->setupUi(this);

    ui->label->setMovie(&movie);
    movie.setScaledSize(QSize(1201, 751));
    movie.start();

    gameWindow = new Game();

    settingsWindow = new Settings();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    gameWindow->show();
    this->close();

}

void MainWindow::on_pushButton_2_clicked()
{
    gameWindow->show();
    this->close();
}

void MainWindow::on_pushButton_3_clicked()
{
    settingsWindow->show();
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this,"DOLBYDIGITALMAZAFAKA", " lol \t\t\t lol \n СВОБОДНОЕ МЕСТО ДЛЯ РЕКЛАМЫ \n lol \t\t\t lol"
                                         "\n\t КУРЕНИЕ ЭТ ПЛОХО");
}

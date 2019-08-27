#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    movie(":/res/img/IIINTROOO.gif")
{
    ui->setupUi(this);

    ui->label->setMovie(&movie);
    movie.setScaledSize(QSize(1201, 751));
    movie.start();






}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{

}

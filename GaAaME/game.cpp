#include "game.h"
#include "ui_game.h"
#include <QMovie>
#include <QPixmap>

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);

    QPixmap pixmap(":/img/PANDA.png"); //будет карта
    QSize PicSize(1000,1000);
    pixmap = pixmap.scaled(PicSize, Qt::KeepAspectRatio);

    scene = new QGraphicsScene();
    scene->addPixmap(pixmap);


    ui->graphicsView->setScene(scene);
    scene->setSceneRect(-2500,-2500,5000,5000);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    scene->addLine(-2500,0,2500,0,QPen(Qt::black));
    scene->addLine(0,-2500,0,2500,QPen(Qt::black));

}

Game::~Game()
{
    delete ui;
}

void Game::on_pushButton_clicked()
{
    close();
}

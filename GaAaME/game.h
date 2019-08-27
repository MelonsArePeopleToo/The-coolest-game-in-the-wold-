#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QWidget>
#include <QShortcut>
#include <QTimer>

namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Game *ui;
    QGraphicsScene *scene;
    QTimer *timer;

};

#endif // GAME_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QSizePolicy>
#include <QWidget>
#include <QMainWindow>
#include <QMovie>
#include <game.h>
#include <settings.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QMovie movie;
    Game *gameWindow;
    Settings *settingsWindow;


};

#endif // MAINWINDOW_H

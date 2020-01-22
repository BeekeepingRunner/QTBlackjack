#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "helpwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class GamePlay;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    friend class GamePlay;
    friend class Deck;

private slots:
    void on_helpButton_clicked();

    void on_startButton_clicked();

    void on_hitButton_clicked();

    void on_standButton_clicked();

private:
    Ui::MainWindow *ui;
    GamePlay *gamePlay;
    int gameResult;
};
#endif // MAINWINDOW_H

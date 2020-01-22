#include "mainwindow.h"
#include "helpwindow.h"
#include "gamePlay.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->hitButton->setVisible(0);
    ui->standButton->setVisible(0);
    ui->resultLabel->setVisible(0);
    ui->againButton->setVisible(0);
    ui->turnLabel->setVisible(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete gamePlay;
}

// wyswietla okno pomocy
void MainWindow::on_helpButton_clicked()
{
    HelpWindow rulesWin;
    rulesWin.setModal(true);
    rulesWin.exec();
}

// rozpoczyna gre
void MainWindow::on_startButton_clicked()
{
    gamePlay = new GamePlay;
    gamePlay->startBlackJack(this);
}

void MainWindow::on_hitButton_clicked()
{
    gamePlay->playerHit(this);
}

void MainWindow::on_standButton_clicked()
{
    gamePlay->playerStand(this);
}

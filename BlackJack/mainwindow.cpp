#include "mainwindow.h"
#include "helpwindow.h"
#include "gamePlay.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gamePlay = new GamePlay;
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
    ui->againButton->setVisible(0);
    ui->startButton->setVisible(0);
    ui->hitButton->setVisible(1);
    ui->standButton->setVisible(1);

    GamePlay *gamePlay = new GamePlay;
    gamePlay->main(this);

    ui->startButton->setVisible(1);
    ui->againButton->setVisible(1);
    ui->hitButton->setVisible(0);
    ui->standButton->setVisible(0);
    ui->turnLabel->setVisible(0);
}

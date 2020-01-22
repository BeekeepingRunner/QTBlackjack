#include "gameplay.h"
#include "deck.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

#include "timeDelay.h"

#include <QDebug>

GamePlay::GamePlay()
    : m_userScore{ 0 }, m_dealerScore{ 0 }, m_cardCounter{ 0 }
{
}

void GamePlay::displayCard(int index, BlackjackTurn turn, MainWindow *mainWin)
{
    switch (turn)
    {
        case BLACKJACK_USER_TURN:
            m_deck->printUserCard(m_deck->cards[index].id, mainWin);
            break;

        case BLACKJACK_DEALER_TURN:
            m_deck->printDealerCard(m_deck->cards[index].id , mainWin);
            break;
    }
}

void GamePlay::startBlackJack(MainWindow *mainWin)
{
    // Wybiela pola graczy i zeruje punkty
    mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/green_back.png"));
    mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/green_back.png"));

    mainWin->ui->userPointsCounter->setText(QString::number(m_userScore));
    mainWin->ui->dealerPointsCounter->setText(QString::number(m_dealerScore));

    // Przygotowuje otoczenie
    mainWin->ui->againButton->setVisible(0);
    mainWin->ui->startButton->setVisible(0);

    mainWin->ui->hitButton->setVisible(1);
    mainWin->ui->hitButton->setEnabled(0);
    mainWin->ui->standButton->setVisible(1);
    mainWin->ui->standButton->setEnabled(0);

    mainWin->ui->resultLabel->setVisible(0);
    mainWin->ui->turnLabel->setVisible(1);
    mainWin->ui->turnLabel->setText("Start phase...");

    delay(1000);

    m_deck = new Deck;
    m_deck->giveIds();
    m_deck->shuffle();

    m_userScore = 0;
    m_dealerScore = 0;
    m_cardCounter = 0;

    // Gracze dobieraja po jednej karcie, dealer zaczyna
    // (W prawdziwej grze w oczko dealer bierze dwie karty)

    displayCard(m_cardCounter, BLACKJACK_DEALER_TURN, mainWin);
    m_dealerScore += m_deck->getCardValue(m_cardCounter++);
    mainWin->ui->dealerPointsCounter->setText(QString::number(m_dealerScore));  delay(1000);

    displayCard(m_cardCounter, BLACKJACK_USER_TURN, mainWin);
    m_userScore += m_deck->getCardValue(m_cardCounter++);
    mainWin->ui->userPointsCounter->setText(QString::number(m_userScore));      delay(1000);

    // Nastepuje tura gracza
    mainWin->ui->turnLabel->setText("Your turn ...");
    mainWin->ui->hitButton->setEnabled(1);
    mainWin->ui->standButton->setEnabled(1);
    delay(1000);
}

void GamePlay::playerHit(MainWindow *mainWin)
{
    mainWin->ui->hitButton->setEnabled(0);
    mainWin->ui->standButton->setEnabled(0);


    // Zmienna potrzebna do zdecydowania czy as ma wartosc 11 czy 1
    int diff{ m_userScore };

    // Gracz dobiera karte
    displayCard(m_cardCounter, BLACKJACK_USER_TURN, mainWin);
    m_userScore += m_deck->getCardValue(m_cardCounter++);
    mainWin->ui->userPointsCounter->setText(QString::number(m_userScore));      delay(1000);

    // Decyzja o wartosci asa
    diff = m_userScore - diff;
    if (diff == 11)
    {
        if (m_userScore - 11 == 20)
            m_userScore = 21;
    }

    if (m_userScore > 21)
        gameResult(BLACKJACK_DEALER_WIN, mainWin);

    mainWin->ui->hitButton->setEnabled(1);
    mainWin->ui->standButton->setEnabled(1);
}

void GamePlay::playerStand(MainWindow *mainWin)
{
    mainWin->ui->hitButton->setEnabled(0);
    mainWin->ui->standButton->setEnabled(0);


    // Nastepuje tura dealera
    mainWin->ui->turnLabel->setText("Dealer's turn ...");

    delay(1000);
    // dealer dobiera dopoki nie osiagnie >=17 punktow
    while (m_dealerScore < 17)
    {
        // Dobranie
        displayCard(m_cardCounter, BLACKJACK_DEALER_TURN, mainWin);
        m_dealerScore += m_deck->getCardValue(m_cardCounter++);
        mainWin->ui->dealerPointsCounter->setText(QString::number(m_dealerScore));  delay(1000);

        delay(1000);

        if (m_dealerScore >= 21)
        {
            gameResult(BLACKJACK_PLAYER_WIN, mainWin);
            mainWin->ui->hitButton->setEnabled(1);
            mainWin->ui->standButton->setEnabled(1);
            return;
        }
    }

    mainWin->ui->hitButton->setEnabled(1);
    mainWin->ui->standButton->setEnabled(1);

    // Ostateczna ocena wynikow
    if (m_userScore > m_dealerScore)
        gameResult(BLACKJACK_PLAYER_WIN, mainWin);

    else if (m_userScore == m_dealerScore)
        gameResult(BLACKJACK_TIE, mainWin);

    else
        gameResult(BLACKJACK_DEALER_WIN, mainWin);
}

void GamePlay::gameClear(MainWindow *mainWin)
{
    delete m_deck;
    m_userScore = 0;
    m_dealerScore = 0;
    m_cardCounter = 0;

    // Przygotowuje otoczenie do rozpoczecia nowej gry
    mainWin->ui->startButton->setVisible(1);
    mainWin->ui->againButton->setVisible(1);

    mainWin->ui->hitButton->setVisible(0);
    mainWin->ui->standButton->setVisible(0);
    mainWin->ui->turnLabel->setVisible(0);
}

void GamePlay::gameResult(BlackjackResult result, MainWindow *mainWin)
{
    switch (result)
    {
        case BLACKJACK_PLAYER_WIN:
            mainWin->ui->resultLabel->setVisible(1);
            mainWin->ui->resultLabel->setText("You win!");

            gameClear(mainWin);
            break;

        case BLACKJACK_DEALER_WIN:
            mainWin->ui->resultLabel->setVisible(1);
            mainWin->ui->resultLabel->setText("Dealer wins!");

            gameClear(mainWin);
            break;

        case BLACKJACK_TIE:
            mainWin->ui->resultLabel->setVisible(1);
            mainWin->ui->resultLabel->setText("Nobody wins!");

            gameClear(mainWin);
            break;
    }
}

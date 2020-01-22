#include "gameplay.h"
#include "deck.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

#include "timeDelay.h"

void GamePlay::displayCard(Deck &deck, int index, BlackjackTurn turn, MainWindow *mainWin)
{
    switch (turn)
    {
        case BLACKJACK_USER_TURN:
            deck.printUserCard(deck.cards[index].id, mainWin);
            break;

        case BLACKJACK_DEALER_TURN:
            deck.printDealerCard(deck.cards[index].id , mainWin);
            break;
    }
}

// TO DO
GamePlay::BlackjackResult GamePlay::playBlackJack(Deck &deck, MainWindow *mainWin)
{
    delay(1000);
    int userScore{ 0 };
    int dealerScore{ 0 };
    int cardCounter{ 0 };

    mainWin->ui->turnLabel->setVisible(1);
    mainWin->ui->turnLabel->setText("Start phase...");
    displayCard(deck, cardCounter, BLACKJACK_DEALER_TURN, mainWin);
    dealerScore += deck.getCardValue(cardCounter++);
    mainWin->ui->dealerPointsCounter->setText(QString::number(dealerScore));

    delay(1000);

    displayCard(deck, cardCounter, BLACKJACK_USER_TURN, mainWin);
    userScore += deck.getCardValue(cardCounter++);
    mainWin->ui->userPointsCounter->setText(QString::number(userScore));    delay(1000);

    displayCard(deck, cardCounter, BLACKJACK_USER_TURN, mainWin);
    userScore += deck.getCardValue(cardCounter++);
    mainWin->ui->userPointsCounter->setText(QString::number(userScore));    delay(1000);


    return BLACKJACK_TIE;
}

void GamePlay::gameResult(BlackjackResult result, MainWindow *mainWin)
{
    switch (result)
    {
        case BLACKJACK_PLAYER_WIN:
            mainWin->ui->resultLabel->setVisible(1);
            mainWin->ui->resultLabel->setText("You win!");
            break;

        case BLACKJACK_DEALER_WIN:
            mainWin->ui->resultLabel->setVisible(1);
            mainWin->ui->resultLabel->setText("Dealer wins!");
            break;

        case BLACKJACK_TIE:
            mainWin->ui->resultLabel->setVisible(1);
            mainWin->ui->resultLabel->setText("Nobody wins!");
            break;
    }
}

void GamePlay::main(MainWindow *mainWin)
{
    Deck deck;
    deck.giveIds();
    deck.shuffle();

    BlackjackResult result{ playBlackJack(deck, mainWin) };

    gameResult(result, mainWin);
}

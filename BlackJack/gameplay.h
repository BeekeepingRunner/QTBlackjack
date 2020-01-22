#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include "deck.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

struct Card;

class GamePlay
{
public:
    enum BlackjackResult
    {
        BLACKJACK_PLAYER_WIN,   // 0
        BLACKJACK_DEALER_WIN,   // 1
        BLACKJACK_TIE           // 2
    };

    enum BlackjackTurn
    {
        BLACKJACK_USER_TURN,    // 0
        BLACKJACK_DEALER_TURN   // 1
    };

private:
    Deck *m_deck;
    int m_userScore{ 0 };
    int m_dealerScore{ 0 };
    int m_cardCounter{ 0 };

public:
    GamePlay();

    // rozgrywka
    void displayCard(int index, BlackjackTurn turn, MainWindow *mainWin);

    void startBlackJack(MainWindow *mainWin);
    void playerHit(MainWindow *mainWin);
    void playerStand(MainWindow *mainWin);
    void isExceed(MainWindow *mainWin);

    // efekt zakonczenia rozgrywki
    void gameResult(BlackjackResult result, MainWindow *mainWin);
    void gameClear(MainWindow *mainWin);

    // funkcja glowna gry
    void main(MainWindow *mainWin);

    friend class MainWindow;
};

#endif // GAMEPLAY_H


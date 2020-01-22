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

    // rozgrywka
    void displayCard(Deck &deck, int index, BlackjackTurn turn, MainWindow *mainWin);

    BlackjackResult playBlackJack(Deck &deck, MainWindow *mainWin);

    // efekt zakonczenia rozgrywki
    void gameResult(BlackjackResult result, MainWindow *mainWin);

    // funkcja glowna gry
    void main(MainWindow *mainWin);
};

#endif // GAMEPLAY_H


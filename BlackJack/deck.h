#ifndef DECK_H
#define DECK_H

#include <array>
#include "mainwindow.h"
#include "ui_mainwindow.h"

// talia kart
class Deck
{
public:
    enum CardId
    {
        CARD_2C, // 0
        CARD_3C,
        CARD_4C,
        CARD_5C,
        CARD_6C,
        CARD_7C,
        CARD_8C,
        CARD_9C,
        CARD_10C,
        CARD_JC,
        CARD_QC,
        CARD_KC,
        CARD_AC,    // 12
        CARD_2D,    // 13
        CARD_3D,
        CARD_4D,
        CARD_5D,
        CARD_6D,
        CARD_7D,
        CARD_8D,
        CARD_9D,
        CARD_10D,
        CARD_JD,
        CARD_QD,
        CARD_KD,
        CARD_AD,    // 25
        CARD_2H,    // 26
        CARD_3H,
        CARD_4H,
        CARD_5H,
        CARD_6H,
        CARD_7H,
        CARD_8H,
        CARD_9H,
        CARD_10H,
        CARD_JH,
        CARD_QH,
        CARD_KH,
        CARD_AH,    // 38
        CARD_2S,    // 39
        CARD_3S,
        CARD_4S,
        CARD_5S,
        CARD_6S,
        CARD_7S,
        CARD_8S,
        CARD_9S,
        CARD_10S,
        CARD_JS,
        CARD_QS,
        CARD_KS,
        CARD_AS,    // 51
        MAX_ID
    };

    enum CardSuit
    {
        SUIT_CLUB,
        SUIT_DIAMOND,
        SUIT_HEART,
        SUIT_SPADE,
        MAX_SUITS
    };

    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,
        MAX_RANKS
    };

    struct Card
    {
        CardRank rank;
        CardSuit suit;
        CardId id;
    };

private:
    std::array<Card, 52> cards;
public:
    // tworzy posortowana talie kart
    Deck();

    void giveIds();
    // funkcje do przetasowania talii
    void swapCards(Card &card1, Card &card2);
    void shuffle();

    //
    int getCardValue(int index) const;

    // wyswietlanie karty
    void printUserCard(CardId id, MainWindow *mainWin);
    void printDealerCard(CardId id, MainWindow *mainWin);

    friend class GamePlay;
};

#endif // DECK_H

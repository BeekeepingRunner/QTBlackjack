#include "deck.h"
#include <random>
#include <ctime>
#include <QBitmap>

Deck::Deck()
{
    std::array<Card, 52>::size_type card = 0;

    for (int suit{ 0 }; suit < MAX_SUITS; ++suit)
    {
        for (int rank{ 0 }; rank < MAX_RANKS; ++rank)
        {
            cards[card].suit = static_cast<CardSuit>(suit);
            cards[card].rank = static_cast<CardRank>(rank);
            ++card;
        }
    }
}

void Deck::giveIds()
{
    for (int i{ 0 }; i < MAX_ID; ++i)
    {
        cards[i].id = static_cast<CardId>(i);
    }
}

// Generator liczb pseudolosowych
// *
namespace MyRandom
{
    std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
}

int getRandomNumber(int min, int max)
{
    std::uniform_int_distribution<> num(min, max);

    return num(MyRandom::mersenne);
}
// *

void Deck::swapCards(Card &card1, Card &card2)
{
    Card tempCard;

    tempCard = card1;
    card1 = card2;
    card2 = tempCard;
}

void Deck::shuffle()
{
    using index = std::array<Card, 52>::size_type;

    for (index i{ 0 }; i < 52; ++i)
    {
        index swapIndex = getRandomNumber(0, 51);
        swapCards(cards[i], cards[swapIndex]);
    }
}

int Deck::getCardValue(int index) const
{
    switch (cards[index].rank)
    {
        case RANK_2: return 2; break;
        case RANK_3: return 3; break;
        case RANK_4: return 4; break;
        case RANK_5: return 5; break;
        case RANK_6: return 6; break;
        case RANK_7: return 7; break;
        case RANK_8: return 8; break;
        case RANK_9: return 9; break;
        case RANK_10: return 10; break;
        case RANK_JACK: return 10; break;
        case RANK_QUEEN: return 10; break;
        case RANK_KING: return 10; break;
        case RANK_ACE: return 11; break;

        default: return 0; break;
    }
}

// przepraszam za te funkcje

void Deck::printUserCard(CardId id, MainWindow *mainWin)
{
    switch (id)
    {
        case CARD_2C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/2C.png"));     break;
        case CARD_3C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/3C.png"));     break;
        case CARD_4C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/4C.png"));     break;
        case CARD_5C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/5C.png"));     break;
        case CARD_6C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/6C.png"));     break;
        case CARD_7C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/7C.png"));     break;
        case CARD_8C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/8C.png"));     break;
        case CARD_9C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/9C.png"));     break;
        case CARD_10C:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/10C.png"));   break;
        case CARD_JC:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/JC.png"));     break;
        case CARD_QC:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/QC.png"));     break;
        case CARD_KC:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/KC.png"));     break;
        case CARD_AC:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/AC.png"));     break;
        case CARD_2D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/2D.png"));     break;
        case CARD_3D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/3D.png"));     break;
        case CARD_4D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/4D.png"));     break;
        case CARD_5D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/5D.png"));     break;
        case CARD_6D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/6D.png"));     break;
        case CARD_7D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/7D.png"));     break;
        case CARD_8D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/8D.png"));     break;
        case CARD_9D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/9D.png"));     break;
        case CARD_10D:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/10D.png"));   break;
        case CARD_JD:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/JD.png"));     break;
        case CARD_QD:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/QD.png"));     break;
        case CARD_KD:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/KD.png"));     break;
        case CARD_AD:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/AD.png"));     break;
        case CARD_2H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/2H.png"));     break;
        case CARD_3H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/3H.png"));     break;
        case CARD_4H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/4H.png"));     break;
        case CARD_5H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/5H.png"));     break;
        case CARD_6H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/6H.png"));     break;
        case CARD_7H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/7H.png"));     break;
        case CARD_8H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/8H.png"));     break;
        case CARD_9H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/9H.png"));     break;
        case CARD_10H:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/10H.png"));   break;
        case CARD_JH:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/JH.png"));     break;
        case CARD_QH:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/QH.png"));     break;
        case CARD_KH:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/KH.png"));     break;
        case CARD_AH:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/AH.png"));     break;
        case CARD_2S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/2S.png"));     break;
        case CARD_3S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/3S.png"));     break;
        case CARD_4S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/4S.png"));     break;
        case CARD_5S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/5S.png"));     break;
        case CARD_6S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/6S.png"));     break;
        case CARD_7S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/7S.png"));     break;
        case CARD_8S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/8S.png"));     break;
        case CARD_9S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/9S.png"));     break;
        case CARD_10S:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/10S.png"));   break;
        case CARD_JS:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/JS.png"));     break;
        case CARD_QS:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/QS.png"));     break;
        case CARD_KS:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/KS.png"));     break;
        case CARD_AS:   mainWin->ui->userCardSlot->setPixmap(QPixmap(":/cardImgs/AS.png"));     break;
    }
}

void Deck::printDealerCard(CardId id, MainWindow *mainWin)
{
    switch (id)
    {
        case CARD_2C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/2C.png"));     break;
        case CARD_3C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/3C.png"));     break;
        case CARD_4C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/4C.png"));     break;
        case CARD_5C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/5C.png"));     break;
        case CARD_6C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/6C.png"));     break;
        case CARD_7C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/7C.png"));     break;
        case CARD_8C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/8C.png"));     break;
        case CARD_9C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/9C.png"));     break;
        case CARD_10C:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/10C.png"));   break;
        case CARD_JC:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/JC.png"));     break;
        case CARD_QC:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/QC.png"));     break;
        case CARD_KC:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/KC.png"));     break;
        case CARD_AC:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/AC.png"));     break;
        case CARD_2D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/2D.png"));     break;
        case CARD_3D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/3D.png"));     break;
        case CARD_4D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/4D.png"));     break;
        case CARD_5D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/5D.png"));     break;
        case CARD_6D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/6D.png"));     break;
        case CARD_7D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/7D.png"));     break;
        case CARD_8D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/8D.png"));     break;
        case CARD_9D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/9D.png"));     break;
        case CARD_10D:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/10D.png"));   break;
        case CARD_JD:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/JD.png"));     break;
        case CARD_QD:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/QD.png"));     break;
        case CARD_KD:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/KD.png"));     break;
        case CARD_AD:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/AD.png"));     break;
        case CARD_2H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/2H.png"));     break;
        case CARD_3H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/3H.png"));     break;
        case CARD_4H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/4H.png"));     break;
        case CARD_5H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/5H.png"));     break;
        case CARD_6H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/6H.png"));     break;
        case CARD_7H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/7H.png"));     break;
        case CARD_8H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/8H.png"));     break;
        case CARD_9H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/9H.png"));     break;
        case CARD_10H:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/10H.png"));   break;
        case CARD_JH:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/JH.png"));     break;
        case CARD_QH:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/QH.png"));     break;
        case CARD_KH:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/KH.png"));     break;
        case CARD_AH:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/AH.png"));     break;
        case CARD_2S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/2S.png"));     break;
        case CARD_3S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/3S.png"));     break;
        case CARD_4S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/4S.png"));     break;
        case CARD_5S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/5S.png"));     break;
        case CARD_6S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/6S.png"));     break;
        case CARD_7S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/7S.png"));     break;
        case CARD_8S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/8S.png"));     break;
        case CARD_9S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/9S.png"));     break;
        case CARD_10S:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/10S.png"));   break;
        case CARD_JS:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/JS.png"));     break;
        case CARD_QS:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/QS.png"));     break;
        case CARD_KS:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/KS.png"));     break;
        case CARD_AS:   mainWin->ui->dealerCardSlot->setPixmap(QPixmap(":/cardImgs/AS.png"));     break;
    }
}

#ifndef BLINDMANSBLUFF_DECK_H
#define BLINDMANSBLUFF_DECK_H

#include "Card.h"

class Deck {
public:
    Deck();
    ~Deck();
    Deck(const Deck& deckC);
    Deck& operator=(const Deck& deckCopy);
    void PopuDeck();
    void Shuffle();
    bool AddCard(Card newCard);
private:
    Card* cards;
    int arraySize;
    int cardsLeft;
};


#endif //BLINDMANSBLUFF_DECK_H

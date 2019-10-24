#include "Deck.h"
#include "Card.h"
#include <cmath>
#include <ctime>

using namespace std;

Deck::Deck() {
    arraySize = 52;
    cards = new Card[arraySize];
    cardsLeft = 52;
}

Deck::Deck(const Deck& deckC) {
    cards = new Card[arraySize];
    *cards = *(deckC.cards);
    arraySize = deckC.arraySize;
    cardsLeft = deckC.cardsLeft;
    for (int i = 0; i < arraySize;i ++){
        cards[i] = deckC.cards[i];
    }
}

Deck& Deck::operator=(const Deck& deckCopy) {
    Deck temp(deckCopy);
    swap(cards, temp.cards);
    return *this;
}

Deck::~Deck() {
    delete[] cards;
}

void Deck::PopuDeck() {
    int numCard = 0;
    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            Card card = Card(i, j);
            cards[numCard] = Card(i, j);
            numCard++;
        }
        if (numCard > 50) {
            break;
        }
    }
}


    void Deck::Shuffle() {
        srand(time(0));
        for (int i = 0; i < cardsLeft * cardsLeft; i++) {
            swap(cards[rand() % cardsLeft], cards[rand() % cardsLeft]);
        }
    }

    bool Deck::AddCard(Card newCard){
        if (cardsLeft < arraySize) {
            cards[++cardsLeft] = newCard;
        }
    }


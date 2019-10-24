#include "Card.h"
using namespace std;

Card::Card() {
    rank = 0;
    suit = 0;
}

Card::Card(int initRank, int initSuit) {
    this->rank = initRank;
    this->suit = initSuit;
}

bool Card::operator>(Card user) {
    if (this->rank > user.rank) {
        return true;
    }
    else return (this->rank == user.rank) && (this->suit > user.suit) ? true : false;
}

string Card::cardName() {
    return ranks[rank] + " of " + suits[suit];
}
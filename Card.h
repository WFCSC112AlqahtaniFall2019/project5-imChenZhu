#ifndef BLINDMANSBLUFF_CARD_H
#define BLINDMANSBLUFF_CARD_H
#include <string>
using namespace std;

// ranks are ordered Ace-low and Queen-high
const string ranks[] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","King","Queen"};
// suits are ordered alphabetically
const string suits[] = {"Clubs","Diamonds","Hearts","Spades"};

class Card {
public:
    Card();
    Card(int initRank, int initSuit);
    bool operator> (Card user); //Overloaded Comparison Operator
    string cardName();
private:
    int rank;
    int suit;

};


#endif //BLINDMANSBLUFF_CARD_H

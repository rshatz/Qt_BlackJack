#include "Deck.h"

void Deck::shuffle()
{
    emptyDeck(); // Empty the deck so new cards can be added.
    QVector<QString> vect;

    QSet<QString>::const_iterator iset;
    for(iset = cards.begin(); iset != cards.end(); iset++) {
        vect.push_back(*iset);
    }

    /// must reimplement //random_shuffle(vect.begin(), vect.end());

    QVector<QString>::const_iterator ivect = vect.begin();
    while(ivect != vect.end()) {
        deck.push_back(*ivect);
        ivect++;
    }
}

QString& Deck::popCard()
{
    if(deck.empty()) {
        shuffle();
    }
    QString& temp = deck.front();
    deck.pop_front();
    return temp;
}

void Deck::emptyDeck() {

    while(!(deck.empty())) {
        deck.pop_front();
    }
}

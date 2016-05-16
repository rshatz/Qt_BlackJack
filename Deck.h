#ifndef DECK_H
#define DECK_H

#include <QDebug>

#include <QQueue>
#include <QVector>
#include <QImage>
#include <QLabel>
#include <algorithm> // needed for std::random_shuffle

class Deck
{
public:

    Deck();
    void shuffle();    // Creates new deck and shuffles it.
    QImage &popCard(); // Removes first card off deck.

private:

    void emptyDeck(); // Empty the deck so new cards can be added

    QVector<QImage> cards;
    QQueue<QImage> deck;

    QLabel* c[52];
};

#endif // DECK_H

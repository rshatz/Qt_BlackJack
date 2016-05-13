#ifndef DECK_H
#define DECK_H

#include <QSet>
#include <QQueue>
#include <QString>
#include <QVector>

class Deck
{
public:

    Deck() {}
    void shuffle();    // Creates new deck and shuffles it.
    QString &popCard(); // Removes first card off deck.

private:

    void emptyDeck(); // Empty the deck so new cards can be added

    const QSet<QString> cards = {  // Hearts
                         "AH", "2H", "3H", "4H", "5H"
                        ,"6H", "7H", "8H", "9H", "10H"
                        ,"JH", "QH", "KH"
                           // Diamonds
                        ,"AD", "2D", "3D", "4D", "5D"
                        ,"6D", "7D", "8D", "9D", "10D"
                        ,"JD", "QD", "KD"
                           // Spades
                        ,"AS", "2S", "3S", "4S", "5S"
                        ,"6S", "7S", "8S", "9S", "10S"
                        ,"JS", "QS", "KS"
                           // Clubs
                        ,"AC", "2C", "3C", "4C", "5C"
                        ,"6C", "7C", "8C", "9C", "10C"
                        ,"JC", "QC", "KC"};

    QQueue<QString> deck; // Store the deck of cards.
};

#endif // DECK_H

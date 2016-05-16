#include "Deck.h"

Deck::Deck()
{
    cards.push_back(QImage(":/Cards/Clubs 1.png"));
    cards.push_back(QImage(":/Cards/Clubs 2.png"));
    cards.push_back(QImage(":/Cards/Clubs 3.png"));
    cards.push_back(QImage(":/Cards/Clubs 4.png"));
    cards.push_back(QImage(":/Cards/Clubs 5.png"));
    cards.push_back(QImage(":/Cards/Clubs 6.png"));
    cards.push_back(QImage(":/Cards/Clubs 7.png"));
    cards.push_back(QImage(":/Cards/Clubs 8.png"));
    cards.push_back(QImage(":/Cards/Clubs 9.png"));
    cards.push_back(QImage(":/Cards/Clubs 10.png"));
    cards.push_back(QImage(":/Cards/Clubs 11.png"));
    cards.push_back(QImage(":/Cards/Clubs 12.png"));
    cards.push_back(QImage(":/Cards/Clubs 13.png"));
    cards.push_back(QImage(":/Cards/Diamonds 1.png"));
    cards.push_back(QImage(":/Cards/Diamonds 2.png"));
    cards.push_back(QImage(":/Cards/Diamonds 3.png"));
    cards.push_back(QImage(":/Cards/Diamonds 4.png"));
    cards.push_back(QImage(":/Cards/Diamonds 5.png"));
    cards.push_back(QImage(":/Cards/Diamonds 6.png"));
    cards.push_back(QImage(":/Cards/Diamonds 7.png"));
    cards.push_back(QImage(":/Cards/Diamonds 8.png"));
    cards.push_back(QImage(":/Cards/Diamonds 9.png"));
    cards.push_back(QImage(":/Cards/Diamonds 10.png"));
    cards.push_back(QImage(":/Cards/Diamonds 11.png"));
    cards.push_back(QImage(":/Cards/Diamonds 12.png"));
    cards.push_back(QImage(":/Cards/Diamonds 13.png"));
    cards.push_back(QImage(":/Cards/Hearts 1.png"));
    cards.push_back(QImage(":/Cards/Hearts 2.png"));
    cards.push_back(QImage(":/Cards/Hearts 3.png"));
    cards.push_back(QImage(":/Cards/Hearts 4.png"));
    cards.push_back(QImage(":/Cards/Hearts 5.png"));
    cards.push_back(QImage(":/Cards/Hearts 6.png"));
    cards.push_back(QImage(":/Cards/Hearts 7.png"));
    cards.push_back(QImage(":/Cards/Hearts 8.png"));
    cards.push_back(QImage(":/Cards/Hearts 9.png"));
    cards.push_back(QImage(":/Cards/Hearts 10.png"));
    cards.push_back(QImage(":/Cards/Hearts 11.png"));
    cards.push_back(QImage(":/Cards/Hearts 12.png"));
    cards.push_back(QImage(":/Cards/Hearts 13.png"));
    cards.push_back(QImage(":/Cards/Spades 1.png"));
    cards.push_back(QImage(":/Cards/Spades 2.png"));
    cards.push_back(QImage(":/Cards/Spades 3.png"));
    cards.push_back(QImage(":/Cards/Spades 4.png"));
    cards.push_back(QImage(":/Cards/Spades 5.png"));
    cards.push_back(QImage(":/Cards/Spades 6.png"));
    cards.push_back(QImage(":/Cards/Spades 7.png"));
    cards.push_back(QImage(":/Cards/Spades 8.png"));
    cards.push_back(QImage(":/Cards/Spades 9.png"));
    cards.push_back(QImage(":/Cards/Spades 10.png"));
    cards.push_back(QImage(":/Cards/Spades 11.png"));
    cards.push_back(QImage(":/Cards/Spades 12.png"));
    cards.push_back(QImage(":/Cards/Spades 13.png"));

    shuffle();
}

void Deck::shuffle()
{
    //emptyDeck(); // Empty the deck so new cards can be added.
    QVector<QImage> vect;

    QVector<QImage>::const_iterator icards;
    for(icards = cards.begin(); icards != cards.end(); icards++) {
        vect.push_back(*icards);
    }

    std::random_shuffle(vect.begin(), vect.end());

    QVector<QImage>::const_iterator ivect = vect.begin();
    while(ivect != vect.end()) {
        deck.push_back(*ivect);
        ivect++;
    }
    // for testing only
    for(int i = 0; i < 52; i++) {
        c[i] = new QLabel;
        c[i]->setPixmap(QPixmap::fromImage(vect.at(i)));
        c[i]->show();
    }
}

//QString& Deck::popCard()
//{
//    if(deck.empty()) {
//        shuffle();
//    }
//    QString& temp = deck.front();
//    deck.pop_front();
//    return temp;
//}

//void Deck::emptyDeck() {

//    while(!(deck.empty())) {
//        deck.pop_front();
//    }
//}

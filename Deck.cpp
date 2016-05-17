#include "Deck.h"
#include <ctime>

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
    srand(std::time(0)); // Random Seed
    emptyDeck(); // Empty the deck so new cards can be added.
    populateDeck(); // Add cards to the deck
    std::random_shuffle(deck.begin(), deck.end());

    // for testing only
    for(int i = 0; i < 52; i++) {
        c[i] = new QLabel;
        c[i]->setPixmap(QPixmap::fromImage(deck.at(i)));
        c[i]->show();
    }
}

void Deck::emptyDeck() {

    while(!(deck.empty())) {
        deck.pop_front();
    }
}

void Deck::populateDeck()
{
    QVector<QImage>::const_iterator icards;
    for(icards = cards.begin(); icards != cards.end(); icards++) {
        deck.push_back(*icards);
    }
}

QImage& Deck::popCard()
{
    if(deck.empty()) {
        shuffle();
    }
    QImage& temp = deck.front();
    deck.pop_front();
    return temp;
}

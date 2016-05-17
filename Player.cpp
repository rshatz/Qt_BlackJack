#include "Player.h"

void Player::pushCard(const QImage card)
{
    hand.push_back(card);
    tallyHand(card);
}

void Player::tallyHand(const QImage card)
{
//    QMap<QString, int>::const_iterator imap;
//    imap = cards.find(card);

//    handTotal += imap.value();

//    if(imap.value() == 11) {
//        aceCount++;
//    }

//    while(aceCount && handTotal > 21) {
//        handTotal -= 10; // Ace now is equal to 1.
//        --aceCount;
//    }
}

//void Player::showHand() const
//{
//    QList<QString>::const_iterator iter = hand.begin();

//    while(iter != hand.end()) {
//        iter++;
//    }
//}

//void Player::win()
//{
//    balance += bet;
//}

//void Player::lose()
//{
//    balance -= bet;
//}

//void Player::clearHand()
//{
//    hand.clear();
//    handTotal = 0;
//}

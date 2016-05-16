//#include "BlackJack.h"

//BlackJack::BlackJack()
//    : hideCard(true)
//    , control(true)
//{
//    newRound();
//}

//void BlackJack::newRound()
//{
//    deck.shuffle();
//    dealCards();
//    showCards();

//    while(control) {
//        menu();
//    }

//    checkWin();
//    newDeal();
//}

//void BlackJack::newDeal()
//{
//    player.clearHand();
//    dealer.clearHand();
//    hideCard = true;

//    if(!player.getBalance()) {
//        exitGame();
//    }
//}

//void BlackJack::menu()
//{
//    char choice;
//    switch (tolower(choice)) {
//    case 'h':

//        playerHit();
//        showCards();
//        control = true; // Run menu() again.
//        break;

//    case 's':

//        dealerHit();
//        hideCard = false; // Player's turn is complete. Show dealer's hand.
//        control = false; // menu() terminates.
//        break;

//    default:


//        control = true; // Run menu() again.
//        break;
//    }
//}


//void BlackJack::dealCards()
//{
//    for(int i = 0; i < 2; i++) {
//        player.pushCard(deck.popCard());
//        dealer.pushCard(deck.popCard());
//    }
//}

//void BlackJack::showCards()
//{
//    player.showHand();

//    if(hideCard) {
//        dealer.hideCard();
//    }
//    else {
//        dealer.showHand();
//    }
//}

//void BlackJack::playerHit()
//{
//    player.pushCard(deck.popCard());

//    if(player.getHandTotal() > 21) {
//        dealerWins();
//    }
//}

//void BlackJack::dealerHit()
//{
//    while(dealer.getHandTotal() < 17) {
//        dealer.pushCard(deck.popCard());
//    }
//    if(dealer.getHandTotal() > 21) {
//        playerWins();
//    }
//}

//void BlackJack::checkWin()
//{
//    if(player.getHandTotal() > dealer.getHandTotal()) {
//        playerWins();
//    }
//    else if(dealer.getHandTotal() > player.getHandTotal()) {
//        dealerWins();
//    }
//    else {
//        showCards();
//        newDeal();
//    }
//}

//void BlackJack::playerWins()
//{
//    hideCard = false;
//    showCards();
//    player.win();
//    newDeal();
//}

//void BlackJack::dealerWins()
//{
//    hideCard = false;
//    showCards();
//    player.lose();
//    newDeal();
//}

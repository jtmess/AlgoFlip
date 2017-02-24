//
//  main.cpp
//  Project2
//
//  Created by Jack Magrath on 2/7/17.
//  Copyright © 2017 Jack Magrath. All rights reserved.
//

#include <iostream>
#include "card.h"
#include "deck.h"
#include "node.h"

int main(int argc, const char * argv[]) {
    
    //creates, shuffles, and prints the deck
    deck deck;
    deck.shuffle();
    //void playFlip(deck);
    cout << deck << endl;
    deck.shuffle();
    cout << deck << endl;
}

void playFlip(deck) {
    deck deck;
    cout << "To play, type 'd' for deal or 'e' for end" << endl;
    int score = 0;
    while (true) {
        char command;
        cin >> command;
        if (command=='d') {
            //call deal then replace
            card card = deck.deal()
            deck.reaplce(card);
            if (<#condition#>){
                score = score+10;
            }
            else if (<#condition#>) {
                score = score+5;
            }
            else if (<#condition#>) {
                score = score / 2;
            }
            else if (<#condition#>) {
                score = 0;
            }
            if (<#condition#>) {
                score++;
            }
        }
        else if (command=='e') {
            break;
        }
        else {
            cout << "Error: you must enter 'd' or 'e'" << endl;
        }
        cout << "Your current score is" << score << endl;
    }
    //read instructions from keyboard (deal or quit)
    //call deal if deal
    //print current hand after flipping card
    //keep track of score and show it at end
    //at end, print all cards
}

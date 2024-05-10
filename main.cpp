/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:31 PM
 */

#include <cstdlib>
#include "Deck.hpp"
#include "CircleList.hpp"
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    Deck *deck = new Deck();

    cout<<"How many players are?"<<endl;
    int numPlayers;
    cin>>numPlayers;

    deck->dealCards(numPlayers);
    deck->play();
    return 0;
    
}


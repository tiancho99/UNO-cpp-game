/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.hpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:59 PM
 */

#ifndef DECK_HPP
#define DECK_HPP

#include "CircleList.hpp"
#include "CircleList.cpp"
#include "vector"
#include "Card.hpp"
#include "Player.hpp"
#include "string"

class Deck {
public:
    Deck();
    void dealCards(int players);
    void play();  
    virtual ~Deck();
    
private:
    CircleList<Player> game;
    std::vector<Card> cards;
    Card top;
    int acumulated;
    bool direction;
    bool isSkipped;
    void clear();
    void waitPlayer();
    void displayHand(vector<Card>* hand);
    void changeColor(string number);
    bool isValidSelection(Card card, Card top);
    bool isSpecial(Card card);
    bool isAvailableCards(vector<Card> hand);
};

#endif /* BARAJA_HPP */


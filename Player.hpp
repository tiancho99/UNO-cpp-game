/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Jugador.hpp
 * Author: tianc
 *
 * Created on 7 de octubre de 2018, 12:29 PM
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <vector>
#include "Card.hpp"
#include "Card.hpp"

class Player {
public:
    Player();
    Player(string, string, vector<Card>);
    virtual ~Player();
    string getName();
    string getNumber();
    vector<Card> getCards();
    vector<Card>* getCardsPtr();
    void dropCard(int index);
    void drawCard(vector<Card> *deck);
private:
    vector<Card> cards;
    string name;
    string playerNumber;
};

#endif /* JUGADOR_HPP */


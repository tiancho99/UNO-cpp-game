/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.cpp
 * Author: tianc
 * 
 * Created on 7 de octubre de 2018, 12:29 PM
 */

#include "Player.hpp"

Player::Player(string name, string number, vector<Card> cards) {
    this->name=name;
    this->playerNumber=number;
    this->cards=cards;
}

Player::Player() {

}


vector<Card> Player::getCards() {
    return cards;
}

vector<Card>* Player::getCardsPtr() {
    return &cards;
}

void Player::dropCard(int index)
{
    cards.erase(cards.begin() + (index));
}

void Player::drawCard(vector<Card> *deck)
{ 
    int index = rand() % deck->size();
    cards.push_back(deck->at(index));
    deck->erase(deck->begin() + (index));
}

string Player::getName() {
    return name;
}

string Player::getNumber() {
    return playerNumber;
}


Player::~Player() {
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.hpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:58 PM
 */

#ifndef CARD_HPP
#define CARD_HPP
#include<iostream>

using namespace std;

class Card {
public:
    Card();
    Card(char color, string number);
    char getColor();
    string getNumber();
    string toString();
    virtual ~Card();
private:
    char color; 
    string number;
};

#endif /* CARTA_HPP */


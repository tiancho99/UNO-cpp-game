/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.hpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:58 PM
 */

#ifndef CARTA_HPP
#define CARTA_HPP
#include<iostream>
using namespace std;
class Carta {
public:
    Carta();
    Carta(char color, string numero);
    char getColor();
    string getNumero();
    string toString();
    virtual ~Carta();
private:
    char color; 
    string numero;
};

#endif /* CARTA_HPP */


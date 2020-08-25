/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.cpp
 * Author: tianc
 * 
 * Created on 30 de septiembre de 2018, 03:58 PM
 */

#include "Carta.hpp"

Carta::Carta(char color, string numero) {
    this->color = color;
    this->numero= numero;
}

Carta::Carta() {

}


char Carta::getColor() {
    return color;
}

string Carta::getNumero() {
    return numero;
}

string Carta::toString() {
    string color;
    switch(this->color){
        case 'b':{
            color="blue";
            break;
        }
        case 'g':{
            color="green";
            break;
        }
        case 'r':{
            color="red";
            break;
        }
        case 'y':{
            color="yellow";
            break;
        }
        case 's':{
            color="special";
            break;
        }
    }
    return "Color "+ color+" Numero "+numero+"\n";
}


Carta::~Carta() {
}


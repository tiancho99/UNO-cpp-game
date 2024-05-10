/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.cpp
 * Author: tianc
 * 
 * Created on 30 de septiembre de 2018, 03:58 PM
 */

#include "Card.hpp"

Card::Card(char color, string number) {
    this->color = color;
    this->number= number;
}

Card::Card() {

}


char Card::getColor() {
    return color;
}

string Card::getNumber() {
    return number;
}

string Card::toString() {
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
    return ""+ color + " " + number +"\n";
}


Card::~Card() {
}


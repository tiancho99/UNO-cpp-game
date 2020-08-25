/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Jugador.cpp
 * Author: tianc
 * 
 * Created on 7 de octubre de 2018, 12:29 PM
 */

#include "Jugador.hpp"

Jugador::Jugador(string nombre, string numero, vector<Carta> cartas) {
    this->nombre=nombre;
    this->numeroJugador=numero;
    this->cartas=cartas;
}

Jugador::Jugador() {

}

vector<Carta> Jugador::getCartas() {
    return cartas;
}

vector<Carta>* Jugador::getDir() {
    return &cartas;
}

string Jugador::getNombre() {
    return nombre;
}

string Jugador::getNumero() {
    return numeroJugador;
}


Jugador::~Jugador() {
}


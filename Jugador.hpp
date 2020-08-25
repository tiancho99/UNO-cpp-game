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

#ifndef JUGADOR_HPP
#define JUGADOR_HPP
#include<vector>
#include"Carta.hpp"


#include "Carta.hpp"
class Jugador {
public:
    Jugador();
    Jugador(string, string, vector<Carta>);
    virtual ~Jugador();
    string getNombre();
    string getNumero();
    vector<Carta> getCartas();
    vector<Carta>* getDir();
private:
    vector<Carta> cartas;
    string nombre;
    string numeroJugador;
};

#endif /* JUGADOR_HPP */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Baraja.hpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:59 PM
 */

#ifndef BARAJA_HPP
#define BARAJA_HPP
#include "CircleList.hpp"
#include"CircleList.cpp"
#include"vector"
#include"Carta.hpp"
#include "Jugador.hpp"
class Baraja {
public:
    Baraja();
    void barajar();
    void start(int);
    void jugar();  
    void imprimir();
    virtual ~Baraja();
    
private:
    CircleList<Jugador> game;
    vector<Carta> cartas;
    Carta top;
    int acumulado;
    bool sentido;
    bool comparar(Carta);
    bool revisar(vector<Carta>);
    void continuar();
    void analizar(Carta);
    void proceso(vector<Carta>, bool*, int, bool*);
    bool defenderse();
};

#endif /* BARAJA_HPP */


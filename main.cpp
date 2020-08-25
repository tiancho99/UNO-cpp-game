/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tianc
 *
 * Created on 30 de septiembre de 2018, 03:31 PM
 */

#include <cstdlib>
#include "Carta.hpp"
#include "Baraja.hpp"

using namespace std;

/*
 * 
 */
int main() {
    Baraja* baraja = new Baraja();
    cout<<"Digite el numero de jugadores"<<endl;
    int numeroJugadores;
    cin>>numeroJugadores;
    baraja->start(numeroJugadores);
    
    return 0;
    
}


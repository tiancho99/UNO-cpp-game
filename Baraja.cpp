/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Baraja.cpp
 * Author: tianc
 * 
 * Created on 30 de septiembre de 2018, 03:59 PM
 */

#include <vector>
#include<ctime>
#include "Baraja.hpp"
#include<iostream>
#include<stdlib.h>
#include <sstream>

using namespace std;

Baraja::Baraja() {
srand(time(NULL));
   int num;
   sentido=false;
   acumulado=0;
   cartas.push_back(Carta('b', "0"));
   cartas.push_back(Carta('b', "1"));
   cartas.push_back(Carta('b', "2"));
   cartas.push_back(Carta('b', "3"));
   cartas.push_back(Carta('b', "4"));
   cartas.push_back(Carta('b', "5"));
   cartas.push_back(Carta('b', "6"));
   cartas.push_back(Carta('b', "7"));
   cartas.push_back(Carta('b', "8"));
   cartas.push_back(Carta('b', "9"));
   cartas.push_back(Carta('b', "draw2"));
   cartas.push_back(Carta('b', "skip"));
   cartas.push_back(Carta('b', "reverse"));
   cartas.push_back(Carta('b', "1"));
   cartas.push_back(Carta('b', "2"));
   cartas.push_back(Carta('b', "3"));
   cartas.push_back(Carta('b', "4"));
   cartas.push_back(Carta('b', "5"));
   cartas.push_back(Carta('b', "6"));
   cartas.push_back(Carta('b', "7"));
   cartas.push_back(Carta('b', "8"));
   cartas.push_back(Carta('b', "9"));
   cartas.push_back(Carta('b', "draw2"));
   cartas.push_back(Carta('b', "skip"));
   cartas.push_back(Carta('b', "reverse"));
   
   cartas.push_back(Carta('r', "0"));
   cartas.push_back(Carta('r', "1"));
   cartas.push_back(Carta('r', "2"));
   cartas.push_back(Carta('r', "3"));
   cartas.push_back(Carta('r', "4"));
   cartas.push_back(Carta('r', "5"));
   cartas.push_back(Carta('r', "6"));
   cartas.push_back(Carta('r', "7"));
   cartas.push_back(Carta('r', "8"));
   cartas.push_back(Carta('r', "9"));
   cartas.push_back(Carta('r', "draw2"));
   cartas.push_back(Carta('r', "skip"));
   cartas.push_back(Carta('r', "reverse"));
   cartas.push_back(Carta('r', "1"));
   cartas.push_back(Carta('r', "2"));
   cartas.push_back(Carta('r', "3"));
   cartas.push_back(Carta('r', "4"));
   cartas.push_back(Carta('r', "5"));
   cartas.push_back(Carta('r', "6"));
   cartas.push_back(Carta('r', "7"));
   cartas.push_back(Carta('r', "8"));
   cartas.push_back(Carta('r', "9"));
   cartas.push_back(Carta('r', "draw2"));
   cartas.push_back(Carta('r', "skip"));
   cartas.push_back(Carta('r', "reverse"));
 
   cartas.push_back(Carta('g', "0"));
   cartas.push_back(Carta('g', "1"));
   cartas.push_back(Carta('g', "2"));
   cartas.push_back(Carta('g', "3"));
   cartas.push_back(Carta('g', "4"));
   cartas.push_back(Carta('g', "5"));
   cartas.push_back(Carta('g', "6"));
   cartas.push_back(Carta('g', "7"));
   cartas.push_back(Carta('g', "8"));
   cartas.push_back(Carta('g', "9"));
   cartas.push_back(Carta('g', "draw2"));
   cartas.push_back(Carta('g', "skip"));
   cartas.push_back(Carta('g', "reverse"));
   cartas.push_back(Carta('g', "1"));
   cartas.push_back(Carta('g', "2"));
   cartas.push_back(Carta('g', "3"));
   cartas.push_back(Carta('g', "4"));
   cartas.push_back(Carta('g', "5"));
   cartas.push_back(Carta('g', "6"));
   cartas.push_back(Carta('g', "7"));
   cartas.push_back(Carta('g', "8"));
   cartas.push_back(Carta('g', "9"));
   cartas.push_back(Carta('g', "draw2"));
   cartas.push_back(Carta('g', "skip"));
   cartas.push_back(Carta('g', "reverse"));
   
   cartas.push_back(Carta('y', "0"));
   cartas.push_back(Carta('y', "1"));
   cartas.push_back(Carta('y', "2"));
   cartas.push_back(Carta('y', "3"));
   cartas.push_back(Carta('y', "4"));
   cartas.push_back(Carta('y', "5"));
   cartas.push_back(Carta('y', "6"));
   cartas.push_back(Carta('y', "7"));
   cartas.push_back(Carta('y', "8"));
   cartas.push_back(Carta('y', "9"));
   cartas.push_back(Carta('y', "draw2"));
   cartas.push_back(Carta('y', "skip"));
   cartas.push_back(Carta('y', "reverse"));
   cartas.push_back(Carta('y', "1"));
   cartas.push_back(Carta('y', "2"));
   cartas.push_back(Carta('y', "3"));
   cartas.push_back(Carta('y', "4"));
   cartas.push_back(Carta('y', "5"));
   cartas.push_back(Carta('y', "6"));
   cartas.push_back(Carta('y', "7"));
   cartas.push_back(Carta('y', "8"));
   cartas.push_back(Carta('y', "9"));
   cartas.push_back(Carta('y', "draw2"));
   cartas.push_back(Carta('y', "skip"));
   cartas.push_back(Carta('y', "reverse"));
   
   cartas.push_back(Carta('s', "draw4"));
   cartas.push_back(Carta('s', "draw4"));
   cartas.push_back(Carta('s', "draw4"));
   cartas.push_back(Carta('s', "draw4"));
   cartas.push_back(Carta('s', "color"));
   cartas.push_back(Carta('s', "color"));
   cartas.push_back(Carta('s', "color"));
   cartas.push_back(Carta('s', "color"));
    
}




void Baraja::start(int jugadores) {    
     srand(time(NULL));
    
    for(int i=0; i<jugadores;i++){
        vector<Carta> cards;
        int ind;
        for(int j=0; j<7;j++){
            ind=rand()%cartas.size();
            cards.push_back(cartas.at(ind));
            cartas.erase(cartas.begin()+(ind));
            
        }
        string nombre;
        ostringstream s;
        s<<i;
        cout<<"Digite el nombre de jugador "<<i+1<<" ";
        cin>>nombre;
        
         game.addFirst(Jugador(nombre,s.str(), cards));
         
         
    }
    
     jugar();
}

void Baraja::jugar() {
    getchar();
    system("clear");
   cout<<"Press 'Enter' to continue...\n";
    continuar();
    system("clear");
    int ind=rand()%(cartas.size()-8);
    top=cartas.at(ind);
    cartas.erase(cartas.begin()+ind);
    
    bool isEnd=false;

    while(!isEnd){
        getchar();   
        vector<Carta> vec = game.getActual().getCartas();
        cout<<"jugador "<<game.getActual().getNombre()<<"\n";
        cout<<"Press 'Enter' to continue...\n";
        continuar();
        system("clear");       
        cout<<"jugador "<<game.getActual().getNombre()<<"\ncarta en top: "<<top.toString()<<"\n";
        for (int i = 0; i < vec.size(); i++) {
            cout<<i+1<<")"<<vec.at(i).toString();
        }

        if(revisar(vec)){
            bool cont=false;
            do{
                cout<<"\nSeleccione la carta que desea lanzar"<<endl;
                cin>>ind;
               if(acumulado == 0){
                   proceso(vec,  &cont, ind, &isEnd);
                }else{
                   if (vec.at(ind-1).getColor() == 's' && vec.at(ind-1).getNumero() == "draw4") {
                        proceso(vec,  &cont, ind, &isEnd);
                    }else if (vec.at(ind-1).getNumero() == "draw2" && top.getNumero() == "draw2") {
                        proceso(vec,  &cont, ind, &isEnd);
                    }
                   else {
                    cout<<"carta invalida"<<endl;
                    
                    }

                }
            }while(!cont);
            
        }else{
            
                cout<<"\nno tiene cartas compatibles. robas carta:\n"<<endl;
                int ind=rand()%cartas.size();
                game.getJugador()->getDir()->push_back(cartas.at(ind));
                cartas.erase(cartas.begin()+(ind));
                vec=game.getActual().getCartas();
                for (int i = 0; i < vec.size(); i++) {
                cout<<i+1<<")"<<vec.at(i).toString();
                }
                cout<<"Press 'ENTER' to continue...\n";
                continuar();
                system("clear");

                game.siguiente(sentido);
                //procedo pendiente
            
        }

    }
}
void Baraja::proceso(vector<Carta> vec, bool* cont, int ind, bool* isEnd){
     if (comparar(vec.at(ind-1))) {
                        Jugador* jug = game.getJugador();
                        jug->getDir()->erase(jug->getDir()->begin()+(ind-1));
                        top=vec.at(ind-1);
                        if (vec.empty()) {
                            cout<<"FELICITACIONES "<<game.getActual().getNombre()<<" HAS GANADO";
                            *isEnd=true;
                        }
                        game.siguiente(sentido);
                        analizar(vec.at(ind-1));
                        system("clear");
                        *cont =true;
                    
                    }else {
                    cout<<"carta invalida"<<endl;
                    }
    
}
void Baraja::continuar() {
        while ( getchar() != '\n');
        
}

void Baraja::analizar(Carta carta) {
    
    srand(time(NULL));
    string numero = carta.getNumero();
    char color = carta.getColor();
    if (color=='s') {
        if (numero.compare("draw4")==0) {
            acumulado+=4;
            if(!defenderse()){
                for (int i = 0; i < acumulado; i++) {
                    int ind=rand()%cartas.size();
                    game.getJugador()->getDir()->push_back(cartas.at(ind));
                    cartas.erase(cartas.begin()+(ind));
                    
                }
                acumulado=0;
            }
               
            
        }
        cout<<"seleccione el color al que desea cambiar"
                "\n1)green"
                "\n2)red"
                "\n3)yellow"
                "\n4)blue"<<endl;
        int seleccion;
        cin>>seleccion;
        switch(seleccion){
            case 1:{
                top=Carta('g',numero);
            }break;
            case 2:{
                top=Carta('r',numero);
            }break;
            case 3:{
                top=Carta('y',numero);
            }break;
            case 4:{
                top=Carta('b',numero);
            }break;
        }
    }else{
        if (numero.compare("draw2")==0) {
            acumulado+=2;
            if(!defenderse()){
                for (int i = 0; i < acumulado; i++) {
                int ind=rand()%cartas.size();
                game.getJugador()->getDir()->push_back(cartas.at(ind));
                cartas.erase(cartas.begin()+(ind));
                }
                acumulado=0;
                
            }
            
            
        } else if(numero.compare("skip")==0){
            game.siguiente(sentido);
        }else if(numero.compare("reverse")==0){
            if (sentido) {
                sentido=false;
            } else {
                sentido=true;
            }
            game.siguiente(sentido);
            game.siguiente(sentido);
        }

    }

}

bool Baraja::revisar(vector<Carta> vec){
    
    for(int i=0;i<vec.size();i++){
        if (vec.at(i).getColor()==top.getColor()) {
            return true;
        } else if(vec.at(i).getNumero().compare(top.getNumero())==0){
            return true;
        }else if(vec.at(i).getColor()=='s'){
            return true;
        }
    }
    
            return false;
}

bool Baraja::comparar(Carta carta){
    if (carta.getColor()==top.getColor()||carta.getColor()=='s') {
        return true;
    }
    else if (top.getNumero().compare(carta.getNumero())==0) {
        return true;
    }else{
        return false;
    }

}

bool Baraja::defenderse() {
    vector<Carta> vec = game.getActual().getCartas();
       
    if (top.getNumero().compare("draw4")==0) {
        for (int i = 0; i < vec.size(); i++) {
            if (vec.at(i).getNumero().compare("draw4")==0) {
                 cout<<"\ntiene defensa\n";
            return true;
            }
        }
    }else if(top.getNumero().compare("draw2")==0){
         for (int i = 0; i < vec.size(); i++) {
            if (vec.at(i).getNumero().compare("draw4")==0||vec.at(i).getNumero().compare("draw2")==0) {
             cout<<"\ntiene defensa\n";
            return true;
            }
        }     
    }
      cout<<"\nno tiene defensa\n";
    return false;
    
}




Baraja::~Baraja() {
}


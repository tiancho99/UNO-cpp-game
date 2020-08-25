/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircleList.hpp
 * Author: tianc
 *
 * Created on 1 de octubre de 2018, 09:18 PM
 */

#ifndef CIRCLELIST_HPP
#define CIRCLELIST_HPP
#include<string>
#include"ListNode.hpp"

using namespace std;
template<class T>
class CircleList {
public:
    CircleList();
    bool isEmpty();
    ListNode<T>* findNode(string);
    T* findBankAccount(string);
    void addFirst(T info);
    void addLast(T info);
    void addSort(T info);
    void addAfterTo(ListNode<T>* direction, T info);
    void addBeforeTo(ListNode<T>* direction, T info);
    void sentido(int);
    void siguiente(bool);
    T getFirst();
    T getLast();
    T getActual();
    T* getJugador();
    T deleteNode(ListNode<T>* direction);
    T* printNode();
    vector<T> printList();
    virtual ~CircleList();
private:
    ListNode<T>* head;
    ListNode<T>* actual;
};

#endif /* CIRCLELIST_HPP */


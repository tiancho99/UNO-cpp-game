/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircleList.cpp
 * Author: tianc
 * 
 * Created on 1 de octubre de 2018, 09:18 PM
 */


#include "CircleList.hpp"
using namespace std;
template<class T>
CircleList<T>::CircleList() {
    actual=head;
    head=NULL;
}

template<class T>
bool CircleList<T>::isEmpty() {
    return head==NULL;
}

template<class T>
void CircleList<T>::addFirst(T info) {
    ListNode<T>* node = new ListNode<T>(info);
    if (isEmpty()) {
        head=node;
        node->next=head;
        node->prev=head->next;
    } else {
        node->next=head->next;
        node->prev=head;
        head->next=node;
        ListNode<T>* aux = node->next;
        aux->prev=node;
    }
      actual=head;

}

template<class T>
void CircleList<T>::addLast(T info) {
    ListNode<T>* node = new ListNode<T>(info);    
    if (isEmpty()) {
        head=node;
        node->next=head;
        node->prev=head->next;
    } else {
        node->prev=head;
        node->next=head->next;
        head->next=node;
        head=node;
        ListNode<T>* aux = node->next;
        aux->prev=node;
    }
  
    
}

template<class T>
void CircleList<T>::addSort(T info) {

}

template<class T>
void CircleList<T>::addAfterTo(ListNode<T>* direction, T info) {

}

template<class T>
void CircleList<T>::addBeforeTo(ListNode<T>* direction, T info) {

}

template<class T>
void CircleList<T>::sentido(int sentido) {
    
}

template<class T>
void CircleList<T>::siguiente(bool sentido) {
    if (sentido) {
        actual=actual->next;
    } else {
        actual=actual->prev;
    }

    
}


template<class T>
ListNode<T>* CircleList<T>::findNode(string) {

}

template<class T>
T* CircleList<T>::findBankAccount(string) {

}

template<class T>
T CircleList<T>::getFirst() {

}

template<class T>
T CircleList<T>::getLast() {

}

template<class T>
T CircleList<T>::getActual() {
    return actual->info;
}

template<class T>
T* CircleList<T>::getJugador() {
    return &actual->info;
}


template<class T>
T CircleList<T>::deleteNode(ListNode<T>* direction) {

}

template<class T>
vector<T> CircleList<T>::printList() {
    vector<T> vec;  
    ListNode<T>* aux;
    aux=head;
    do{
        vec.push_back(aux->info);
        aux=aux->next;
    }while(aux!=head);
    return vec;
}

template<class T>
T* CircleList<T>::printNode() {    
    return &actual->info;
}

template<class T>
CircleList<T>::~CircleList() {

}



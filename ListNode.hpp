/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListNode.hpp
 * Author: tianc
 *
 * Created on 1 de octubre de 2018, 09:17 PM
 */

#ifndef LISTNODE_HPP
#define LISTNODE_HPP

#include<cstdlib>
#include "CircleList.hpp"
#include <vector>

template<class T> class CircleList;
template<class T>
class ListNode {
public:
    ListNode();
    ListNode(T);
    friend class CircleList<T>;
    virtual ~ListNode();
private:
    T info;
    ListNode<T>* prev;
    ListNode<T>* next;
};
template<class T>
ListNode<T>::ListNode(){
    next=NULL;
    prev=NULL;
}

template<class T>
ListNode<T>::ListNode(T info){
    this->info=info;
    next=NULL;
    prev=NULL;
}

template<class T>
ListNode<T>::~ListNode(){
    
}
#endif /* LISTNODE_HPP */


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
#include <string>
#include <vector>
#include "ListNode.hpp"

template <typename T>
class CircleList {
public:
    CircleList();
    bool isEmpty();
    ListNode<T>* findNode(std::string);
    void addFirst(T info);
    void addLast(T info);
    void addSort(T info);
    void addAfterTo(ListNode<T>* direction, T info);
    void addBeforeTo(ListNode<T>* direction, T info);
    void direction(int);
    void next(bool);
    T getFirst();
    T getLast();
    T getCurrent();
    T* getPlayer();
    T deleteNode(ListNode<T>* direction);
    T* printNode();
    std::vector<T> printList();
    virtual ~CircleList();
private:
    ListNode<T>* head;
    ListNode<T>* current;
};

#endif /* CIRCLELIST_HPP */
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

template <typename T>
CircleList<T>::CircleList()
{
    current = head;
    head = NULL;
}

template <typename T>
bool CircleList<T>::isEmpty()
{
    return head == NULL;
}

template <typename T>
void CircleList<T>::addFirst(T info)
{
    ListNode<T> *node = new ListNode<T>(info);
    if (isEmpty())
    {
        head = node;
        node->next = head;
        node->prev = head->next;
    }
    else
    {
        node->next = head->next;
        node->prev = head;
        head->next = node;
        ListNode<T> *aux = node->next;
        aux->prev = node;
    }
    current = head;
}

template <typename T>
void CircleList<T>::addLast(T info)
{
    ListNode<T> *node = new ListNode<T>(info);
    if (isEmpty())
    {
        head = node;
        node->next = head;
        node->prev = head->next;
    }
    else
    {
        node->prev = head;
        node->next = head->next;
        head->next = node;
        head = node;
        ListNode<T> *aux = node->next;
        aux->prev = node;
    }
}

template <typename T>
void CircleList<T>::addSort(T info)
{
}

template <typename T>
void CircleList<T>::addAfterTo(ListNode<T> *direction, T info)
{
}

template <typename T>
void CircleList<T>::addBeforeTo(ListNode<T> *direction, T info)
{
}

template <typename T>
void CircleList<T>::direction(int sentido)
{
}

template <typename T>
void CircleList<T>::next(bool sentido)
{
    if (sentido)
    {
        current = current->next;
    }
    else
    {
        current = current->prev;
    }
}

template <typename T>
ListNode<T> *CircleList<T>::findNode(std::string)
{
}

template <typename T>
T CircleList<T>::getFirst()
{
}

template <typename T>
T CircleList<T>::getLast()
{
}

template <typename T>
T CircleList<T>::getCurrent()
{
    return current->info;
}

template <typename T>
T *CircleList<T>::getPlayer()
{
    return &current->info;
}

template <typename T>
T CircleList<T>::deleteNode(ListNode<T> *direction)
{
}

template <typename T>
std::vector<T> CircleList<T>::printList()
{
    std::vector<T> vec;
    ListNode<T> *aux;
    aux = head;
    do
    {
        vec.push_back(aux->info);
        aux = aux->next;
    } while (aux != head);
    return vec;
}

template <typename T>
T *CircleList<T>::printNode()
{
    return &current->info;
}

template <typename T>
CircleList<T>::~CircleList()
{
}

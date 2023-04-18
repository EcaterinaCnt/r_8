//
// Created by camel on 3/20/2022.
//

#include "Iterator.h"

template<class T>
Iterator<T>::Iterator(const Multime<T> &m)
{
    this->m = m;
    this->current_node = m.get_head();
    this->currentPosition = 0;
}

template<class T>
bool Iterator<T>::valid() {
    return (this->currentPosition < m.size() && this->current_node->next != nullptr);
}

template<class T>
void Iterator<T>::first() {
    this->current_node = this->m.get_head();
}

template<class T>
void Iterator<T>::next() {
    if(this->m.size() > 0 && this->current_node->next != nullptr)
    {   this->currentPosition++;
        this->current_node = this->current_node->next;
    }
}

template<class T>
T Iterator<T>::current() {
    if(valid())
        return this->current_node->value;
}





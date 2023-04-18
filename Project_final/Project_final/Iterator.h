#pragma once
#include "Multime.h"


template<class T>
class Iterator {
private:Multime<T> m;
    SLLNode<T> *current_node;
    int currentPosition;
public:
    Iterator(const Multime<T>& m); // discutieMultime

    //  this ESTE UN ITERATOR pe multimea M
    // return: ð‘¡ð‘Ÿð‘¢ð‘’, daca iteratorul prefera un element valid din multime
    bool valid();

    // pozitioneaza cursorul pe primul element
    void first();

    // pozitioneaza cursorul pe elementul urmator daca acesta exista
    void next();

    //returneaza elementul curent referit de cursor
    T current();
};



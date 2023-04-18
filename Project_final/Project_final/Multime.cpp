#include "Multime.h"


template<class T>
Multime<T>::Multime(){
    this->head->next = nullptr;
    this->noElems=0;
}

template<class T>
Multime<T>::Multime(const Multime<T>& m){
    SLLNode<T>* nod_curent = m.head;
    Multime<int> m2;

    while(nod_curent->next!=nullptr) {
        m2.add(nod_curent->value);
        nod_curent = nod_curent->next;
    }

    nod_curent = m2.get_head();

    while(nod_curent->next!=nullptr) {
        this->add(nod_curent->value);
        nod_curent = nod_curent->next;
    }

}

template<class T>
void Multime<T>::add(T e)
{
    SLLNode<T> *noul_nod = new SLLNode<T>;
    noul_nod->value = e;
    noul_nod->next = this->head;
    this->head = noul_nod;
    this->noElems++;
}

template<class T>
SLLNode<T>* Multime<T>::search(T e) {
    SLLNode<T>* nod_curent = this->head;
    while(nod_curent->next!=nullptr) {
        if (nod_curent->value == e)
            return nod_curent;
        nod_curent = nod_curent->next;
    }
    return new SLLNode<T>;
}

template<class T>
bool Multime<T>::ifExist(T e) {
    SLLNode<T>* nod_curent = this->head;
    while(nod_curent->next!=nullptr) {
        if (nod_curent->value == e)
            return true;
        nod_curent = nod_curent->next;
    }
    return false;
}
template<class T>
SLLNode<T>* Multime<T>::get_head() const
{
    return this->head;
}

template<class T>
int Multime<T>::size(){
    return this->noElems;
}

template<class T>
int Multime<T>::remove(T elem) {
    SLLNode<T>* current = this->head;
    SLLNode<T>* prev = nullptr;

    while(current!= nullptr && current->value != elem)
    {
        prev = current;
        current = current->next;

    }
    if(current!= nullptr && prev == nullptr)
    {
        this->head = this->head->next;
        delete current;
        return true;
    }
    else if(current!= nullptr)
    {
        prev->next = current->next;
        current->next = nullptr;
        delete current;
        return true;

    }
    delete current;
    return false;
}





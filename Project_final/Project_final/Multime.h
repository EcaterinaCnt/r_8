#pragma once

#include <iostream>
using namespace std;


template <typename T> struct SLLNode{
    T value;
    SLLNode* next;
};

template <class T> class Multime{
protected:
    SLLNode<T> *head;

private:
    int noElems; //data membru
    void resize();
public:
    ///constructorul va initializa datele membru
    /// (in specificare TAD Multime metoda init(m) este constructorul Multime()
    Multime();

    Multime(const Multime& m);

    ///adauga un element la multime
    /// \param e - elementul de adaugat
    ///         prec: e este de tip Telem
    ///         postc: m'=m+{e}, daca e nu apartine multimii, altfel e nu este adaugat
    void add(T e);


    /// determina pozitia elem e in multimea ordonata
    /// \param e elementul cautat
    /// \return returneaza pozitia pe care se poate adauga elementul e in multimea ordonata

    SLLNode<T>* get_head ()const;

    SLLNode<T>* search(T e);

    /// cauta un element in multime
    /// \param e
    /// \return true daca e apartine multimii, false altfel
    bool ifExist(T e);

    ///
    /// \return numarul de elemente din multime
    int size();

    /// sterge elementul e din multime
    /// \param e  elementul pe care vrem sa-l stergem
    /// \return 1 daca l-a sters, 0 daca nu l-a sters
    int remove(T e);
};

#pragma once

#include "Prieteni.h"
#include "Mesaj.h"
#include "Multidictionar.h"
#include "Multime.h"

class Utilizator{
private:
    char* nume = new char [20];
    Multime<RelatiePrietenie> relatie;
    Multimap<char*, Mesaj> mesaje;
public:
    Utilizator();
    Utilizator(char * nume);
    Utilizator(Utilizator& utiliz);
    char* get_nume();
    void set_nume(char* n);
    Multime<RelatiePrietenie> get_relatie();
    void set_relatie(Multime<RelatiePrietenie> rel);
    Multimap<char*, Mesaj> get_mesaje();
    void set_mesaje(Multimap<char*, Mesaj> msg);
    void add_prieteni(Utilizator p1);
    void remove_prieteni(Utilizator p1);
    void add_mesaje(Utilizator p1, char *mesaj);
    void remove_mesaje(Utilizator p1, char *mesaj);
};
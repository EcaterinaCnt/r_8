#pragma once

#include "Prieteni.h"
#include "Multime.h"
#include "Mesaj.h"
#include "Multidictionar.h"

class Retea{
private:
    Multime<RelatiePrietenie> relatie;
    Multimap<char*, Mesaj> mesaj;
public:
    Retea();
    Multime<RelatiePrietenie> get_relatie();
    void set_relatie(Multime<RelatiePrietenie> rel);
    Multimap<char*, Mesaj> get_mesaje();
    void set_mesaje(Multimap<char*, Mesaj> msg);
};
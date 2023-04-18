//
// Created by bianc on 5/14/2022.
//

#include "Retea.h"

Retea::Retea() =default;

Multime<RelatiePrietenie> Retea::get_relatie() {
    return this->relatie;
}

void Retea::set_relatie(Multime<RelatiePrietenie> rel) {
    this->relatie = rel;
}

Multimap<char *, Mesaj> Retea::get_mesaje() {
    return this->mesaj;
}

void Retea::set_mesaje(Multimap<char *, Mesaj> msg) {
    this->mesaj = msg;
}

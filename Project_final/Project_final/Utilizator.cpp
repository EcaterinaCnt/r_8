
#include <cstring>
#include "Utilizator.h"

Utilizator::Utilizator(char *nume) {
    this->nume = new char[strlen(nume) + 1];
    strcpy_s(this->nume, strlen(nume)+1, nume);
}

Utilizator::Utilizator(Utilizator &utiliz) {
    this->nume = new char[strlen(utiliz.nume) + 1];
    strcpy_s(this->nume, strlen(utiliz.nume)+1, utiliz.nume);

}

char *Utilizator::get_nume() {
    return this->nume;
}

void Utilizator::set_nume(char* n) {
    this->nume = new char[strlen(n) + 1];
    strcpy_s(this->nume, strlen(n)+1, n);
}

Utilizator::Utilizator() {
}

Multime<RelatiePrietenie> Utilizator::get_relatie() {
    return this->relatie;
}

void Utilizator::set_relatie(Multime<RelatiePrietenie> rel) {
    this->relatie = rel;
}

Multimap<char *, Mesaj> Utilizator::get_mesaje() {
    return this->mesaje;
}

void Utilizator::set_mesaje(Multimap<char *, Mesaj> msg) {
    this->mesaje = msg;
}

void Utilizator::add_prieteni(Utilizator p1) {
    RelatiePrietenie e;
    e.set_user1(this);
    e.set_user2(p1);
    this->relatie.add(e);

}

void Utilizator::remove_prieteni(Utilizator p1) {
    RelatiePrietenie e;
    e.set_user1(this);
    e.set_user2(p1);
    this->relatie.remove(e);
}

void Utilizator::add_mesaje(Utilizator p1, char *mesaj) {
    Mesaj msg;
    msg.set_destinatar(p1);
    msg.set_expeditor(this);
    msg.set_mesaj(mesaj);
    this->mesaje.put(this, msg);
}

void Utilizator::remove_mesaje(Utilizator p1, char* mesaj) {
    Mesaj msg;
    msg.set_destinatar(p1);
    msg.set_expeditor(this);
    msg.set_mesaj(mesaj);
    this->mesaje.remove(this, msg);
}

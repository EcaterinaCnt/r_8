//
// Created by bianc on 5/12/2022.
//

#include <cstring>
#include "Mesaj.h"


Mesaj::Mesaj(Utilizator exp, Utilizator dest, char *mesaj) {
    this->expeditor = exp;
    this->destinatar = dest;
    this->mesaj = new char[strlen(mesaj) + 1];
    strcpy_s(this->mesaj, strlen(mesaj)+1, mesaj);
}

Mesaj::Mesaj(Mesaj &ms) {
    this->expeditor = ms.expeditor;
    this->destinatar = ms.destinatar;
    this->mesaj = new char[strlen(ms.mesaj) + 1];
    strcpy_s(this->mesaj, strlen(ms.mesaj)+1, ms.mesaj);

}

Utilizator Mesaj::get_expeditor() {
    return this->expeditor;
}

Utilizator Mesaj::get_destinatar() {
    return this->destinatar;
}

char *Mesaj::get_mesaj() {
    return this->mesaj;
}

void Mesaj::set_expeditor(Utilizator exp) {
    this->expeditor = exp;
}

void Mesaj::set_destinatar(Utilizator dest) {
    this->destinatar = dest;
}

void Mesaj::set_mesaj(char* mesaj) {
    this->mesaj = new char[strlen(mesaj) + 1];
    strcpy_s(this->mesaj, strlen(mesaj)+1, mesaj);

}

Mesaj::Mesaj() {

}

#pragma once

#include "Utilizator.h"

class Mesaj{
private:
    Utilizator expeditor;
    Utilizator destinatar;
    char* mesaj = new char[25];
public:
    Mesaj(Utilizator exp, Utilizator dest, char* mesaj);
    Mesaj(Mesaj& ms);
    Utilizator get_expeditor();
    Utilizator get_destinatar();
    char* get_mesaj();
    void set_expeditor(Utilizator exp);
    void set_destinatar(Utilizator dest);
    void set_mesaj(char* mesaj);
    Mesaj();
};
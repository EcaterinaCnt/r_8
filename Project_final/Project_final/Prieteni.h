#pragma once

#include "Utilizator.h"


class RelatiePrietenie{
private:
    Utilizator user1;
    Utilizator user2;
public:
    RelatiePrietenie(Utilizator u1, Utilizator u2);
    RelatiePrietenie(RelatiePrietenie &rp);
    Utilizator get_user1();
    Utilizator get_user2();
    void set_user1(Utilizator user1);
    void set_user2(Utilizator user2);
    RelatiePrietenie();
};
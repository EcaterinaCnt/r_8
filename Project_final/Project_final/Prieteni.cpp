#include "Prieteni.h"


Utilizator RelatiePrietenie::get_user1() {
    return this->user1;
}

Utilizator RelatiePrietenie::get_user2() {
    return this->user2;
}

void RelatiePrietenie::set_user1(Utilizator user1) {
    this->user1 = user1;
}

void RelatiePrietenie::set_user2(Utilizator user2) {
    this->user2 = user2;
}

RelatiePrietenie::RelatiePrietenie(Utilizator u1, Utilizator u2) {
    this->user1 = u1;
    this->user2 = u2;
}

RelatiePrietenie::RelatiePrietenie(RelatiePrietenie &rp) {
    this->user1 = rp.user1;
    this->user2 = rp.user2;
}

RelatiePrietenie::RelatiePrietenie() {
}



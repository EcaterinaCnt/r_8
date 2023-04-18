#include "RepoFile.h"

RepoFile::RepoFile() = default;

RepoFile::RepoFile(Multime<Utilizator> util) {
    this->utilizatori = util;
}

Multime<Utilizator> RepoFile::get_utilizatori() {
    return this->utilizatori;
}

void RepoFile::set_utilizatori(Multime<Utilizator> util) {
    this->utilizatori = util;

}

void RepoFile::add_utilizatori(char *nume) {
    Utilizator user(nume);
    this->utilizatori.add(user);
}

void RepoFile::remove_utilizatori(char *nume) {
    Utilizator user(nume);
    this->utilizatori.remove(user);
}

void RepoFile::update_utilizatori(char *nume, char *new_nume) {
    Utilizator user_vechi(nume);
    Utilizator user_nou(new_nume);
    SLLNode<Utilizator> *user_vechi_nod = this->utilizatori.search(user_vechi);
    user_vechi_nod->value = user_nou;
}

bool RepoFile::find_utilizatori(char *nume) {
    Utilizator user(nume);
    return this->utilizatori.search(user);
}

void RepoFile::add_prieteni(char *p1, char *p2) {
    Utilizator u1(p1);
    Utilizator u2(p2);
    //u1.add_prieteni(u2);
}

void RepoFile::remove_prieteni(char *p1, char *p2) {
    Utilizator u1(p1);
    Utilizator u2(p2);
    //u1.remove_prieteni(u2);
}

void RepoFile::add_mesaje(char *num1, char *num2, char *mesaj1) {
    Utilizator u1(num1);
    Utilizator u2(num2);
    //u1.add_mesaje(u2, mesaj1);
}

void RepoFile::remove_mesaje(char *num1, char *num2, char *mesaj1) {
    Utilizator u1(num1);
    Utilizator u2(num2);
    //u1.remove_mesaje(u2, mesaj1);
}

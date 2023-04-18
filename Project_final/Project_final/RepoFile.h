#pragma once

#include "Utilizator.h"
#include "Multidictionar.h"
#include "Multime.h"

class RepoFile{
private:
    Multime<Utilizator> utilizatori;
public:
    RepoFile();
    explicit RepoFile(Multime<Utilizator> util);
    Multime<Utilizator> get_utilizatori();
    void set_utilizatori(Multime<Utilizator> util);
    void add_utilizatori(char * nume);
    void remove_utilizatori(char* nume);
    void update_utilizatori(char* nume, char* new_nume);
    bool find_utilizatori(char* nume);
    void add_prieteni(char* p1, char* p2);
    void remove_prieteni(char* p1, char* p2);
    void add_mesaje(char* num1, char* num2, char* mesaj1);
    void remove_mesaje(char* num1, char* num2, char* mesaj1);
};
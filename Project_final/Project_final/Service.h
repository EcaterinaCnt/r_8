#pragma once

#include "RepoFile.h"

class Service{
private:
    RepoFile repository;
public:
    Service();
    explicit Service(RepoFile &repository);
    void adauga_utilizatori(char * nume);
    void sterge_utilizatori(char* nume);
    void modifica_utilizatori(char* nume, char* new_nume);
    bool gaseste_utilizatori(char* nume);
    void adauga_prieteni(char* p1, char* p2);
    void sterge_prieteni(char* p1, char* p2);
    void adauga_mesaje(char* num1, char* num2, char* mesaj1);
    void sterge_mesaje(char* num1, char* num2, char* mesaj1);
};
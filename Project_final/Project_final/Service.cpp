#include "Service.h"

Service::Service() = default;

Service::Service(RepoFile &repository) {
    this->repository = repository;
}

void Service::adauga_utilizatori(char *nume) {
    this->repository.add_utilizatori(nume);
}

void Service::sterge_utilizatori(char *nume) {
    this->repository.remove_utilizatori(nume);

}

void Service::modifica_utilizatori(char *nume, char *new_nume) {
    this->repository.update_utilizatori(nume, new_nume);
}

bool Service::gaseste_utilizatori(char *nume) {
    return this->repository.find_utilizatori(nume);
}

void Service::adauga_prieteni(char *p1, char *p2) {
    this->repository.add_prieteni(p1, p2);
}

void Service::sterge_prieteni(char *p1, char *p2) {
    this->repository.remove_prieteni(p1, p2);
}

void Service::adauga_mesaje(char *num1, char *num2, char *mesaj1) {
    this->repository.add_mesaje(num1, num2, mesaj1);
}

void Service::sterge_mesaje(char *num1, char *num2, char *mesaj1) {
    this->repository.remove_mesaje(num1, num2, mesaj1);
}

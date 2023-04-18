#include "Ui.h"

UserInterface::UserInterface() = default;

UserInterface::UserInterface(Service &service) {
    this->service = service;
}

void UserInterface::showMenu() {
    int optiune = 1;
    while(optiune)
    {
       cout << "1. Adauga un utilizator." << endl;
       cout << "2. Sterge un utilizator." << endl;
       cout << "3. Modifica un utilizator." << endl;
       cout << "4. Gaseste un utilizator." << endl;
       cout << "5. Adauga un prieten." << endl;
       cout << "6. Sterge un prieten." << endl;
       cout << "7. Adauga un mesaj." << endl;
       cout << "8. Sterge un mesaj." << endl;
        cout << "0. Iesire." << endl;

        cout << "Introduceti optiunea: ";
        cin >> optiune;
        cout << endl;

        switch(optiune)
        {
            case 1: {add_user(); break;}
            case 2: {delete_user(); break;}
            case 3: {update_user(); break;}
            case 4: {find_user(); break;}
            case 5: {add_friend(); break;}
            case 6: {delete_friend(); break;}
            case 7: {add_message(); break;}
            case 8: {delete_mesage(); break;}
            case 0: {break;}
            default: cout << "Optiune inexistenta! Reincercati!";
        }

    }
}

void UserInterface::add_user() {
    char* nume = new char[20];
    cout << "Dati numele utilizatorului: ";
    cin >> nume;

    this->service.adauga_utilizatori(nume);
    delete[] nume;
}

void UserInterface::delete_user() {
    char* nume = new char[20];
    cout << "Dati numele utilizatorului de sters: ";
    cin >> nume;

    this->service.sterge_utilizatori(nume);
    delete[] nume;
}

void UserInterface::update_user() {
    char* nume = new char[20];
    char* new_nume = new char[20];
    cout << "Dati numele utilizatorului de modificat: ";
    cin >> nume;
    cout<<endl;
    cout<<"Dati noul nume al utilizatorului: ";
    cin>> new_nume;

    this->service.modifica_utilizatori(nume, new_nume);
    delete[] nume;
    delete[] new_nume;
}

void UserInterface::find_user() {
    char* nume = new char[20];
    cout<<"Dati numele utilizatorului ce trebuie gasit: ";
    cin>> nume;

    this->service.gaseste_utilizatori(nume);
    delete[] nume;
}

void UserInterface::add_friend() {
    char* nume1 = new char[20];
    char* nume2 = new char[20];
    cout << "Dati numele primului prieten: ";
    cin >> nume1;
    cout << endl;
    cout << "Dati numele celui de al doilea prieten: ";
    cin >> nume2;
    this->service.adauga_prieteni(nume1, nume2);
    delete[] nume1;
    delete[] nume2;
}

void UserInterface::delete_friend() {
    char* nume1 = new char[20];
    char* nume2 = new char[20];
    cout << "Dati numele prietenului: ";
    cin >> nume1;
    cout << endl;
    cout << "Dati numele celui prietenului ce trebuie sters: ";
    cin >> nume2;
    this->service.sterge_prieteni(nume1, nume2);
    delete[] nume1;
    delete[] nume2;
}

void UserInterface::add_message() {
    char* nume_dest = new char[20];
    char* nume_exp = new char[20];
    char* mesaj = new char[20];
    cout << "Dati numele destinatarului: ";
    cin >> nume_dest;
    cout<<endl;
    cout << "Dati numele expeditorului: ";
    cin >> nume_exp;
    cout<<endl;
    cout << "Dati mesajul: ";
    cin>> mesaj;

    this->service.adauga_mesaje(nume_dest, nume_exp, mesaj);
    delete[] nume_dest;
    delete[] nume_exp;
    delete[] mesaj;
}

void UserInterface::delete_mesage() {
    char* nume_dest = new char[20];
    char* nume_exp = new char[20];
    char* mesaj = new char[20];
    cout << "Dati numele destinatarului: ";
    cin >> nume_dest;
    cout<<endl;
    cout << "Dati numele expeditorului: ";
    cin >> nume_exp;
    cout<<endl;
    cout << "Dati mesajul ce trebuie sters: ";
    cin>> mesaj;
    this->service.sterge_mesaje(nume_dest, nume_exp, mesaj);
    delete[] nume_dest;
    delete[] nume_exp;
    delete[] mesaj;
}

UserInterface::~UserInterface() = default;

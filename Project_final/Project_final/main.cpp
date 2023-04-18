#include <iostream>
#include "Ui.h"

int main() {

    RepoFile repository;
    Service service(repository);
    UserInterface UI(service);


    UI.showMenu();

    return 0;
}

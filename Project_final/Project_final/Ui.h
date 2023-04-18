#pragma once

#include "Service.h"

class UserInterface{
private:
    Service service;
    void add_user();
    void delete_user();
    void update_user();
    void find_user();
    void add_friend();
    void delete_friend();
    void add_message();
    void delete_mesage();
public:
    UserInterface();
    explicit UserInterface(Service& service);
    void showMenu();
    ~UserInterface();
};

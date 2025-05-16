#include "communications.h"

std::string greeting(std::string name) {
    return "Welcome to pgLang " + name;
}

void formatAdress(std::string& address) {
    for(int i = 0; i < address.length(); i++) {
        address[i] = toupper(address[i]);
    }
}

std::string closing(std::string name, std::string product) {
    return "Purchase of " + product + " complete\nThank you for shopping at pgLang " + name;
}

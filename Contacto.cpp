//
// Created by Melissa Marián Granados Gómez on 11/04/18.
//

#include "Contacto.h"

Contacto::Contacto() {
    this->email="";
    this->age="";
    this->name="";
    this->telephone="";
}


std::string Contacto::getName() {
    return this->name;
}

std::string Contacto::getTelephone() {
    return this->telephone;
}

std::string Contacto::getEmail() {
    return this->email;
}

std::string Contacto::getAge() {
    return this->age;
}

void Contacto::setName(std::string Name) {
    this->name=Name;

}
void Contacto::setTelephone(std::string Telephone) {
    this->telephone=Telephone;
}
void Contacto::setEmail(std::string Email) {
    this->email=Email;
}
void Contacto::setAge(std::string Age) {
    this->age=Age;
}
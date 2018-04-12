//
// Created by Melissa Marián Granados Gómez on 11/04/18.
//

#ifndef POO_MGRANADOS_T01F_CONTACTO_H
#define POO_MGRANADOS_T01F_CONTACTO_H
#include <iostream>

class Contacto {

private:
    std::string name, telephone ,email, age;

public:
    Contacto();
    std::string getName();
    std::string getTelephone();
    std::string getEmail();
    std::string getAge();
    void setName(std::string Name);
    void setTelephone(std::string Telephone);
    void setEmail(std::string Email);
    void setAge(std::string Age);

};



#endif //POO_MGRANADOS_T01F_CONTACTO_H

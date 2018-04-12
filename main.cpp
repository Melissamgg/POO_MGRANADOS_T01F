#include <iostream>
#include "Contacto.h"
int main() {
    Contacto contacto1 = *new Contacto();
    Contacto contacto2 = *new Contacto();
    Contacto contacto4 = *new Contacto();

    contacto1.setName("Melissa");
    contacto1.setAge("20");
    contacto1.setEmail("a01410584@itesm.mx");
    contacto1.setTelephone("8332618082");
    std::cout << contacto1.getName() << " " << contacto1.getAge() << " años " << "\n Correo "
              << contacto1.getEmail() << "\n Número " << contacto1.getTelephone()<<"\n";


    int *arreglo = NULL;
    int cantidad;
    std::string valor;


    std::cout << "\n ¿Cuántos usuarios son? " << "\n";
    std::cin >> cantidad;

    arreglo = new int[cantidad];

    for (int i = 0; i < cantidad; i++) {
        std::cout << "DATOS DEL CONTACTO " << i+1<<": ";
        std::cout<<"\n NOMBRE DEl USUARIO:";
        std::cin >> valor;
        std::cout<<"\n";
        std::cout<<"EDAD:";
        std::cin >> valor;
        std::cout<<"\n";
        std::cout<<"EMAIL:";
        std::cin >> valor;
        std::cout<<"\n";
        std::cout<<"CELULAR:";
        std::cin >> valor;
        std::cout<<"\n";


    }
}

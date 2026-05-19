#include <iostream>
#include <string>

class Coche {

public:
    //Atributos

    std::string fabricante;
    int cilindraje;
    int potencia;
    std::string color;
    double precio;

public:
    //Métodos

    void encender() {

        std:: cout << "El coche está encendido" << std::endl;
    }

    void acelerar() {

        std::cout << "El coche está en marcha" << std::endl;
    }

    void frenar() {

        std::cout << "El coche frenó" << std::endl;
    }

    void girar() {

        std::cout << "El coche giró" << std::endl;
    }
};


int main() {

    //primer objeto
    Coche CocheJose;
    //Segundo objeto
    Coche CocheMaria;


    CocheJose.encender();
    CocheJose.color = "Rojo";
    
    
    return 0;
}
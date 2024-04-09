#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro() {

}

Maestro::Maestro(std::string nombre, int edad, std::string departamento) {
    this->nombre = nombre;
    this->edad = edad;
    this->departamento = departamento;
}

std::string Maestro::getDepartamento() {
    return departamento;
}

void Maestro::muestraDatos() {
    std::cout << "Nombre: " << nombre << " Edad: " << edad << " Departamento: " << departamento << std::endl;
}
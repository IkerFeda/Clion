#include <iostream>
#include "persona.h"
#include "estudiante.h"

int suma(int a, int b) {
    return a + b;
}

int g = 20;

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

    Persona persona;
    persona.setNombre("Iker");
    persona.setEdad(19);
    persona.setGenero("Hombre");

    std::cout << "Detalles de la Persona:" << std::endl;
    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "Genero: " << persona.getGenero() << std::endl;

    Estudiante estudiante;
    estudiante.setNombre("Vitaly");
    estudiante.setEdad(18);
    estudiante.setGenero("Masculino");
    estudiante.setGrado("Primero de Bachillerato, Ingenieria Informatica");

    std::cout << "\nDetalles del Estudiante:" << std::endl;
    estudiante.mostrarDetalles();
    return 0;
}

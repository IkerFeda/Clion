#include <iostream>
#include "funciones.h"
#include <fmt/core.h>

int main() {
    int num1 = 10;
    int num2 = 5;

    int resultado_suma = suma(num1, num2);
    int resultado_resta = resta(num1, num2);

    std::cout << "Hola Mundo" << std::endl;
    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    fmt::print("Resultado de la suma: {}\n", resultado_suma);
    fmt::print("Resultado de la resta: {}\n", resultado_resta);

    double radio = 5.0;
    double area = AREA_CIRCULO(radio);
    std::cout << "Area del circulo: " << area << std::endl;



    return 0;
}

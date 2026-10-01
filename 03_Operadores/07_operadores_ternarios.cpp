/* Operadores ternarios */

#include <iostream>
using namespace std;

int main() {
    int edad = 18;
    string resultado;

    // Sintaxis: condition ? value_if_true : value_if_false
    resultado = (edad >= 18) ? "mayor de edad" : "menor de edad";

    cout << "La persona es " << resultado << endl;

    // La misma decision usando if-else, en varias lineas
    if (edad >= 18) {
        resultado = "mayor de edad";
    } else {
        resultado = "menor de edad";
    }

    cout << "Con if-else, la persona es " << resultado << endl;

    
    return 0;
}
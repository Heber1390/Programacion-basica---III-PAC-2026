#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "La raiz cuadrada es: " << sqrt(numero) << endl;
    cout << "El numero al cuadrado es: " << pow(numero, 2) << endl;

    return 0;
}
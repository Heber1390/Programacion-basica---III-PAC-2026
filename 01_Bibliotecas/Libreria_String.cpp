#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    string nombre;
    double precio;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese un precio: ";
    cin >> precio;

    time_t ahora = time(0);

    cout << "Hola, " << nombre << endl;
    cout << "Su nombre tiene " << nombre.length() << " letras" << endl;
    cout << "Precio con 2 decimales: " << fixed << setprecision(2) << precio << endl;
    cout << "Fecha y hora: " << ctime(&ahora);

    return 0;
}
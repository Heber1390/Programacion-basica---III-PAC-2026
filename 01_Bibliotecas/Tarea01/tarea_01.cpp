#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <algorithm>
#include <fstream>

using namespace std;

int main() {


    // Libreria cstdlib Funciones generales y números aleatorios
    int numero;

    srand(time(NULL));

    numero = rand() % 100 + 1;

    cout << "El numero aleatorio es: " << numero << endl;


    // Libreria ctime Trabajar con fecha y hora
    time_t ahora;

    time(&ahora);

    cout << "La fecha y hora actual es: " << ctime(&ahora);


    // Libreria cctype Trabajar con caracteres
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    if (isupper(letra)) {
        cout << "La letra es mayuscula." << endl;
    } else {
        cout << "La letra no es mayuscula." << endl;
    }


    // Libreria algorithm Operaciones sobre datos
    int numero1, numero2, mayor;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    mayor = max(numero1, numero2);

    cout << "El numero mayor es: " << mayor << endl;


    // Libreria fstream Leer y escribir archivos
    string nombre;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    ofstream archivo("nombre.txt");

    if (archivo.is_open()) {
        archivo << nombre;
        archivo.close();

        cout << "El nombre fue guardado correctamente." << endl;
    } else {
        cout << "No se pudo crear el archivo." << endl;
    }

    return 0;
}


// Franklin Mendoza 20241002543
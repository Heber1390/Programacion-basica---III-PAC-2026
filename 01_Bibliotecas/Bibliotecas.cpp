


#include <iostream>  // Biblioteca estándar para entrada y salida
#include <string>    // Biblioteca estándar para manipulación de cadenas de texto
#include <cmath>     // Biblioteca estándar para trabajar con funciones matemáticas  
#include <iomanip>   // Biblioteca estándar para manipulación de la salida formateada


#include <vector>    // Para el uso de vectores (necesario para algorithm)
#include <algorithm> // 1. Biblioteca para algoritmos estándar (ordenamiento, búsqueda, etc.)
#include <chrono>    // 2. Biblioteca para manejo y medición de tiempo
#include <random>    // 3. Biblioteca para generación de números aleatorios moderna
#include <cctype>    // 4. Biblioteca para clasificación y conversión de caracteres
#include <fstream>   // 5. Biblioteca para lectura y escritura de archivos

using namespace std;

int main()
{
   
    int edad;
    string nombre;

    cout << "Ingrese su edad: ";            // Solicita al usuario que ingrese su edad
    cin >> edad;                            // Lee la edad ingresada por el usuario
    cout << "Su edad es: " << edad << endl; // Muestra la edad ingresada

    cout << "Ingrese su nombre: ";          // Solicita al usuario que ingrese su nombre
    getline(cin >> ws, nombre);             // Lee el nombre ingresado por el usuario, incluyendo espacios
    cout << "Su nombre es: " << nombre << endl; // Muestra el nombre ingresado

    // Ejemplo de la librería cmath para redondear un número
    double numero = 3.7;        
    cout << "Numero original: " << numero << endl; // Muestra el número original
    cout << "Numero redondeado: " << round(numero) << endl; // Muestra el número redondeado utilizando round

    // Ejemplo de la librería iomanip para formatear la salida
    double pi = 3.14159265358979323846; // Valor de pi  
    // Muestra el valor de pi con 2 decimales utilizando setprecision de iomanip
    cout << "Valor de pi con 2 decimales: " << fixed << setprecision(2) << pi << endl << endl;


    // 1. Ejemplo de la librería <algorithm>
    vector<int> numeros = {42, 15, 8, 23, 4};
    sort(numeros.begin(), numeros.end()); // Ordena los elementos de menor a mayor
    cout << "Ejemplo de <algorithm> (numeros ordenados): ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // 2. Ejemplo de la librería <chrono>
    auto inicio = chrono::high_resolution_clock::now();
    long long suma = 0;
    for (int i = 0; i < 100000; i++) { suma += i; } // Operación corta para medir
    auto fin = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> duracion = fin - inicio;
    cout << "Ejemplo de <chrono> (tiempo de ejecucion del bucle): " << duracion.count() << " ms" << endl;

    // 3. Ejemplo de la librería <random>
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribucion(1, 6); // Dado de 1 a 6
    cout << "Ejemplo de <random> (lanzamiento de dado): " << distribucion(gen) << endl;

    // 4. Ejemplo de la librería <cctype>
    char letra = 'a';
    cout << "Ejemplo de <cctype> (convertir 'a' a mayuscula): " << (char)toupper(letra) << endl;

    // 5. Ejemplo de la librería <fstream>
    ofstream archivo("mensaje.txt");
    if (archivo.is_open()) {
        archivo << "Hola, este mensaje fue guardado desde C++ usando <fstream>." << endl;
        archivo.close();
        cout << "Ejemplo de <fstream>: Se ha creado el archivo 'mensaje.txt' con exito." << endl;
    }

    return 0;
}
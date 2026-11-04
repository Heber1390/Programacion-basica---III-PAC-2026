#include <iostream>
using namespace std;

// Ejemplo 1: función sin parámetros ni valor de retorno
void saludar() {
    cout << "Hola, bienvenido!" << endl;
}

// Ejemplo 2: función sin parámetros pero con retorno
int numeroAleatorio() {
    return 42;
}

// Ejemplo 3: función sin parámetros que realiza una tarea
void mostrarMensaje() {
    cout << "Esta es una funcion sin argumentos." << endl;
}

int main() {
    saludar();
    cout << "El numero es: " << numeroAleatorio() << endl;
    mostrarMensaje();

    return 0;
}

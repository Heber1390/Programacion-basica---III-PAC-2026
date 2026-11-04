#include <iostream>
using namespace std;

// Función con 3 parámetros por referencia
void modificarTres(int &a, int &b, int &c) {
    a += 10;
    b *= 2;
    c -= 5;

    cout << "Dentro de la funcion: a = " << a << ", b = " << b << ", c = " << c << endl;
}

int main() {
    int x = 5;
    int y = 7;
    int z = 9;

    cout << "Antes: x = " << x << ", y = " << y << ", z = " << z << endl;

    //llamada a la función con parámetros por referencia
    modificarTres(x, y, z);

    cout << "Despues: x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}

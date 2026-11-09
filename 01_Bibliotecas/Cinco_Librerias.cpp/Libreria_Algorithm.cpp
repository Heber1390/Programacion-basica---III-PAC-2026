#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {7, 3, 9, 1, 5};

    cout << "Lista original: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Ordenar de menor a mayor
    sort(numeros.begin(), numeros.end());

    cout << "Lista ordenada: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    // Buscar el número mayor
    int mayor = *max_element(numeros.begin(), numeros.end());
    cout << "El número mayor es: " << mayor << endl;

    return 0;
}

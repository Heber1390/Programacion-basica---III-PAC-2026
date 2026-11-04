#include <iostream>
using namespace std;

// Recibe dos valores y devuelve su suma.
int sumar(int numero1, int numero2) {
	return numero1 + numero2;
}

// Recibe una copia del valor y lo muestra.
void mostrarResultado(int resultado) {
	cout << "La suma es: " << resultado << endl;
}

int main() {
	int a, b;

	cout << "Ingrese dos numeros: ";
	cin >> a >> b;

	int total = sumar(a, b);
	mostrarResultado(total);

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

// Cada función devuelve un valor que puede usarse en otra expresión.
int sumar(int a, int b) {
	return a + b;
}

bool esPar(int numero) {
	return numero % 2 == 0;
}

string crearSaludo(const string& nombre) {
	return "Hola, " + nombre + "!";
}

int main() {
	cout << "La suma de 4 y 6 es: " << sumar(4, 6) << endl;
	int numero;
	cout << "Ingrese un número para verificar si es par: ";
	cin >> numero;
	cout << "¿" << numero << " es par? " << (esPar(numero) ? "Sí" : "No") << endl;
	cout << crearSaludo("Ana") << endl;

	return 0;
}

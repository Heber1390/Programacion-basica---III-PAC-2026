#include <iostream>
using namespace std;

// 1. No recibe datos: muestra un saludo en pantalla.
void saludar() {
	cout << "¡Hola a la clase de programación básica!" << endl;
}

// 2. Recibe dos números: calcula y muestra su suma, pero no la devuelve.
void mostrarSuma(int a, int b) {
	cout << "La suma es: " << a + b << endl;
	
}

// 3. Recibe un número: indica si es par o impar, sin devolver un valor.
void indicarParidad(int numero) {
	if (numero % 2 == 0) {
		cout << numero << " es par." << endl;
	} else {
		cout << numero << " es impar." << endl;
	}
}

int main() {
	saludar();
	mostrarSuma(4, 6);
	indicarParidad(7);
	return 0;
}

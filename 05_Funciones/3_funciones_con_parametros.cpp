#include <iostream>
#include <string>
using namespace std;

// 1. Ambos parámetros se reciben por valor; solo se modifican copias.
double calcularPromedio(double nota1, double nota2) {
	return (nota1 + nota2) / 2.0;
}

// 2. El entero se recibe por referencia y cambia la variable original.
void duplicar(int& numero) {
	numero *= 2;
}

// 3. Combina una referencia constante de tipo string y un entero por valor.
void mostrarProducto(const string& nombre, int cantidad) {
	cout << nombre << ": " << cantidad << " unidades\n";
}

// 4. Combina parámetros por referencia y por valor de distintos tipos.
//    El texto y el estado cambian fuera de la función; el precio no.
void actualizarProducto(string& nombre, double precio, bool& disponible) {
	nombre = "Cuaderno";
	precio += 5.0;
	disponible = false;
	cout << "Precio dentro de la funcion: " << precio << '\n';
}

int main() {
	double promedio = calcularPromedio(85.0, 95.0);
	cout << "Promedio: " << promedio << '\n';

	int numero = 4;
	duplicar(numero);
	cout << "Numero despues de duplicar: " << numero << '\n';

	mostrarProducto("Lapiz", 10);

	string nombre = "Lapiz";
	double precio = 20.0;
	bool disponible = true;
	actualizarProducto(nombre, precio, disponible);
	cout << "Nombre: " << nombre << '\n';
	cout << "Precio original: " << precio << '\n';
	cout << "Disponible: " << (disponible ? "si" : "no") << '\n';

	return 0;
}

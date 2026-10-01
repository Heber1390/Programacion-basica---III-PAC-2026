// Cinco operadores especiales en C++
#include <iostream>

int main() {
	int numero = 7;
	int otro = 3;
	int arreglo[3] = {10, 20, 30};
	int* puntero = &numero;

	// 1. sizeof: obtiene el tamaño de un tipo o variable.
	std::cout << "sizeof(numero): " << sizeof(numero) << " bytes\n";

	// 2. ?: (ternario): elige un valor según una condición.
	std::cout << "numero es "
			  << (numero % 2 == 0 ? "par" : "impar") << "\n";

	// 3. , (coma): evalúa varias expresiones y devuelve la última.
	int resultado = (numero += 1, otro += 2, numero + otro);
	std::cout << "Operador coma: " << resultado << "\n";

	// 4. &: obtiene la dirección de memoria de una variable.
	std::cout << "Direccion de numero: " << &numero << "\n";

	// 5. []: accede a un elemento de un arreglo (también funciona con punteros).
	std::cout << "Primer elemento: " << arreglo[0]
			  << ", valor mediante puntero: " << *puntero << "\n";

	return 0;
}

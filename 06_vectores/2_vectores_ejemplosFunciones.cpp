#include <iostream>
#include <vector>
using namespace std;

void mostrarVector(const vector<int>& numeros) {
	cout << "[ ";
	for (int numero : numeros) {
		cout << numero << " ";
	}
	cout << "]\n";
}

int main() {
	vector<int> numeros;

	// 1. push_back(): agrega un elemento al final.
	numeros.push_back(10);
	numeros.push_back(20);
	numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);
	cout << "Despues de push_back(10, 20, 30, 40, 50): ";
	mostrarVector(numeros);

	// 2. size(): devuelve la cantidad de elementos.
	cout << "Cantidad de elementos (size): " << numeros.size() << "\n";

	// 3. at(): permite consultar un elemento usando su indice.
	cout << "Elemento en el indice 1 (at): " << numeros.at(1) << "\n";

	// 4. front() y back(): consultan el primero y el ultimo elemento.
	cout << "Primer elemento (front): " << numeros.front() << "\n";
	cout << "Ultimo elemento (back): " << numeros.back() << "\n";

	// 5. pop_back(): elimina el ultimo elemento.
	numeros.pop_back();
	cout << "Despues de pop_back(): ";
	mostrarVector(numeros);

	// 6. empty(): indica si el vector esta vacio.
	cout << "El vector esta vacio? " << (numeros.empty() ? "Si" : "No") << "\n";

	// 7. clear(): elimina todos los elementos.
	numeros.clear();
	cout << "Despues de clear(), esta vacio? "
		 << (numeros.empty() ? "Si" : "No") << "\n";

	return 0;
}

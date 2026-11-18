#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

int main() {
	vector<int> edades = {18, 20, 22};
	vector<double> precios = {12.50, 8.75, 20.00};
	vector<string> nombres = {"Ana", "Luis", "Marta"};

	cout << "Edades: ";
	for (int i = 0; i <  edades.size(); i++) {
		cout << edades[i] << " ";
	}

	cout << "\nPrecios: ";
	for (int i = 0; i < precios.size(); i++) {
		cout << precios[i] << " ";
	}

	cout << "\nNombres: ";
	for (int i = 0; i < nombres.size(); i++) {
		cout << nombres[i] << " ";
	}

	cout << '\n';
	return 0;
}

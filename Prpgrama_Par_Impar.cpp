#include <iostream>
using namespace std;

bool esPar(int numero) {
	return numero / 2 == 0;
}

int main() {
	int n;
	cout << "Ingresa un numero: ";
	cin >> n;
	
	if (esPar(n)) {

		cout << "El numero " << n << " es par." << endl;

	} else {
        
		cout << "El numero " << n << " es impar." << endl;
	}
	
	return 0;
}
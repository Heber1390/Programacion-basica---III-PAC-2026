#include <iostream>
#include <string>

using namespace std;
string nombreCliente;

void menuVerduras() {
	int opcion;
	do {
		cout << "\nVERDURAS\n";
		cout << "1. Tomates\n";
		cout << "2. Cebollas\n";
		cout << "3. Chiles\n";
		cout << "4. Regresar\n";
		cout << "Selecciona una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			cout << "Has seleccionado Tomates\n";
			
			break;
		case 2:
			cout << "Has seleccionado Cebollas\n";
			break;
		case 3:
			
			int opcionChiles;
			do {
				cout << "\nCHILES\n";
				cout << "1. Chile verde\n";
				cout << "2. Chile morron\n";
				cout << "3. Regresar\n";
				cout << "Selecciona una opcion: ";
				cin >> opcionChiles;
				
				switch (opcionChiles) {
				case 1:
					cout << "Has seleccionado Chile verde\n";
					break;
				case 2:
					cout << "Has seleccionado Chile morron\n";
					break;
				case 3:
					cout << "Regresando al menu anterior...\n";
					break;
				default:
					cout << "Opcion invalida. Intentalo de nuevo.\n";
				}
			} while (opcionChiles != 3);
			break;
		case 4:
			cout << "Carrito de compra";
			break;
		case 5:
			cout << "Modulo de Reportes";
			break;
		case 6:
			cout << "Gracias por preferirnos";
			break;	
		default:
			cout << "Opcion invalida. Intentalo de nuevo.\n";
		}
	} while (opcion != 4);
}

void menuCarnes() {
	int opcion;
	do {
		cout << "\nCARNES\n";
		cout << "1. Carne de res\n";
		cout << "2. Carne de cerdo\n";
		cout << "3. Pollo\n";
		cout << "4. Regresar\n";
		cout << "Selecciona una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			cout << "Has seleccionado Carne de res\n";
			break;
		case 2:
			int opcionCerdo;
			do {
				cout << "\nCARNE DE CERDO\n";
				cout << "1. Nacional\n";
				cout << "2. Exportada\n";
				cout << "3. Regresar\n";
				cout << "Selecciona una opcion: ";
				cin >> opcionCerdo;
				
				switch (opcionCerdo) {
				case 1:
					cout << "Has seleccionado Carne de cerdo Nacional\n";
					break;
				case 2:
					cout << "Has seleccionado Carne de cerdo Exportada\n";
					break;
				case 3:
					cout << "Regresando al menu anterior...\n";
					break;
				default:
					cout << "Opcion invalida. Intentalo de nuevo.\n";
				}
			} while (opcionCerdo != 3);
			break;
		case 3:
			cout << "Has seleccionado Pollo\n";
			break;
		case 4:
			cout << "Regresando al menu principal...\n";
			break;
		default:
			cout << "Opcion invalida. Intentalo de nuevo.\n";
		}
	} while (opcion != 4);
}

void menuLicores() {
	int opcion;
	do {
		cout << "\nLICORES\n";
		cout << "1. Cervezas\n";
		cout << "2. Vinos\n";
		cout << "3. Vodka\n";
		cout << "4. Regresar\n";
		cout << "Selecciona una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			cout << "Has seleccionado Cervezas\n";
			
			break;
		case 2:
			cout << "Has seleccionado Vinos\n";
			break;
		case 3:
			cout << "Has seleccionado Vodka\n";
			break;
		case 4:
			cout << "Regresando al menu principal...\n";
			break;
		default:
			cout << "Opcion invalida. Intentalo de nuevo.\n";
		}
	} while (opcion != 4);
}


void carritoCompra() {
	int opcion;
	do {
		cout << "\nCARRITO DE COMPRA\n";
		cout << "1. Ver carrito\n";
		cout << "2. Regresar al menu principal\n";
		cout << "3. Facturar\n";
		
		cout << "Selecciona una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			cout << "Productos comprados\n";
			
			
			break;
		case 2:
			cout << "Regresando al menu principal...\n";
				
				
			break;
	
		case 3:
			cout << "Facturar\n";
			break;
		default:
			cout << "Opcion invalida. Intentalo de nuevo.\n";
		}
	} while (opcion != 3);
}


int main() {
	int opcion, i=1, edadCliente;
	
	cout <<"Cliente # "<<(i)<<endl;
	cin>>nombreCliente;
	cout << "Edad: ";
	cin>>edadCliente;
	
	//system.cls();
	
	
	do {
		cout << "\nMENU PRINCIPAL\n";
		cout << "1. Verduras\n";
		cout << "2. Carnes\n";
		cout << "3. Licores\n";
		cout << "4. Carrito de compra\n";
		cout << "5. Reportes\n";
		cout << "6. Salir\n";
		cout << "Selecciona una opcion: ";
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			menuVerduras();
			break;
		case 2:
			menuCarnes();
			break;
		case 3:
			menuLicores();
			break;
		case 4:
			carritoCompra();
			break;
		case 5:
			cout << "REPORTES\n";
			break;	
		case 6:
			cout << "Saliendo del programa...\n";
			break;
		default:
			cout << "Opcion invalida. Intentalo de nuevo.\n";
		}
	} while (opcion != 6);
	
	return 0;
}



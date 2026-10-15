#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Definir e inicializar variables
string nombreEmpleado;
int edadEmpleado;
char sexoEmpleado;
double salarioEmpleado;


int main() {

cout << "========== PILLOFON ===========" << endl;
cout << "Ingrese el nombre del empleado: ";
getline(cin >> ws, nombreEmpleado);
cout << "Ingrese la edad del empleado: ";
cin >> edadEmpleado;  
while (edadEmpleado < 18 or edadEmpleado > 65) {
    cout << "Edad fuera de rango" << endl;
    cout << "Ingrese la edad del empleado: ";
    cin >> edadEmpleado;
}
cout << "Ingrese el sexo del empleado (M/F): ";
cin >> sexoEmpleado;

cout << "Ingrese el salario del empleado: ";
cin >> salarioEmpleado;


}
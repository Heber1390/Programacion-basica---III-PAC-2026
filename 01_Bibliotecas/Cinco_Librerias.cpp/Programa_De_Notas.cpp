#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        string nombre, ponderacion;
        double p1, p2, p3;

        cout << "Ingrese el nombre del Estudiante: ";
        getline(cin, nombre);

        cout << "I Parcial (0-100): ";
        cin >> p1;
        cout << "II Parcial (0-100): ";
        cin >> p2;
        cout << "III Parcial (0-100): ";
        cin >> p3;
        cin.ignore();


        double promedio = p1 * 0.25 + p2 * 0.35 + p3 * 0.40;

        cout << fixed << setprecision(2);
        cout << "Promedio final: " << promedio << endl;

        if (promedio >= 90) {
            cout << "Ponderacion: Sobresaliente" << endl;
        } else if (promedio >= 80) {
            cout << "Ponderacion: Notable" << endl;
        } else if (promedio >= 70) {
            cout << "Ponderacion: Aprobado" << endl;
        } else if (promedio >= 60) {
            cout << "Ponderacion: Regular" << endl;
        } else {
            cout << "Ponderacion: Reprobado" << endl;
        }

        cout << endl;
    }
    return 0;
}

/* ejemplos de operadores de asignacion  */

#include <iostream>
using namespace std;        

int main()
{
    int x = 5;  // Asignación simple
    cout << "x = " << x << endl;

    x += 3;     // Asignación con suma
    cout << "x += 3 => " << x << endl;

    x -= 2;     // Asignación con resta
    cout << "x -= 2 => " << x << endl;

    x *= 4;     // Asignación con multiplicación
    cout << "x *= 4 => " << x << endl;

    x /= 2;     // Asignación con división
    cout << "x /= 2 => " << x << endl;

    x %= 3;     // Asignación con módulo
    cout << "x %= 3 => " << x << endl;

    return 0;
}
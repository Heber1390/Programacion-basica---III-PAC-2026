/* ejemplos de operadores relacionales  */

#include <iostream>
using namespace std;        

int main()
{
    int a = 10;
    int b = 3;

    // Operadores relacionales
    cout << "a == b: " << (a == b) << endl;  // Igualdad
    cout << "a != b: " << (a != b) << endl;  // Desigualdad
    cout << "a > b: " << (a > b) << endl;    // Mayor que
    cout << "a < b: " << (a < b) << endl;    // Menor que
    cout << "a >= b: " << (a >= b) << endl;  // Mayor o igual que
    cout << "a <= b: " << (a <= b) << endl;  // Menor o igual que

    return 0;
}
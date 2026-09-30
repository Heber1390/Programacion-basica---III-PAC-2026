/* ejemplos de operadores lógicos  */

#include <iostream>
using namespace std;        

int main()
{
    bool a = true;
    bool b = false;

    // Operadores lógicos
    cout << "a && b: " << (a && b) << endl;  // AND lógico
    cout << "a || b: " << (a || b) << endl;  // OR lógico
    cout << "!a: " << (!a) << endl;         // NOT lógico

    return 0;
}
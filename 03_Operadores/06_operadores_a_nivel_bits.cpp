/* Operadores a nivel de bits */

#include <iostream>
using namespace std;    

int main() {
    int a = 5;  // 101 in binary
    int b = 3;  // 011 in binary

    cout << "a & b = " << (a & b) << endl;  // 001
    cout << "a | b = " << (a | b) << endl;  // 111
    cout << "a ^ b = " << (a ^ b) << endl;  // 110
    cout << "~a = " << (~a) << endl;        // 010
    cout << "a << 1 = " << (a << 1) << endl; // 1010
    cout << "a >> 1 = " << (a >> 1) << endl; // 010

    return 0;
}
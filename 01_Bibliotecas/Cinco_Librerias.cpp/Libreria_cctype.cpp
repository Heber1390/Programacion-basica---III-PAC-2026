#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char texto[] = "hola lic. Heber";
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper(texto[i]);
    }
    cout << "En mayusculas: " << texto << endl;
    return 0;
}

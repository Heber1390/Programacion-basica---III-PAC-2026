#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t ahora = time(0);
    cout << "Fecha y hora actual: " << ctime(&ahora);
    return 0;
}

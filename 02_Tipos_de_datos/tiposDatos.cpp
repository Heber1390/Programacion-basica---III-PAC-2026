/* estudiaremos los diferentes tipos de datos en C++  */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Tipos de datos primitivos
    int edadEstudiante = 23;                    // Entero
    float alturaEstudiante = 1.74;              // Flotante
    double recorridoEstudiante = 3.14159;       // Doble precisión
    char sexoEstudiante = 'F';                  // Carácter
    bool estudianteActivo = true;               // Booleano
short int numeroCorto = 32767;
long int numeroLargo = 2147483647L;
long long int numeroMuyLargo = 9223372036854775807LL;
unsigned int numeroPositivo = 4294967295U;
signed int numeroNegativo = -1;
    string nombreEstudiante = "Juan Perez";     // Cadena de caracteres

    // Mostrar los valores en consola
    cout << "Edad del estudiante: " << edadEstudiante << endl;
    cout << "Altura del estudiante: " << alturaEstudiante << endl;
    cout << "Recorrido del estudiante: " << recorridoEstudiante << endl;
    cout << "Sexo del estudiante: " << sexoEstudiante << endl;
    cout << "Estudiante activo: " << estudianteActivo << endl;
    cout << "Número corto: " << numeroCorto << endl;
    cout << "Numero largo: " << numeroLargo << endl;
    cout << "Numero muy largo: " << numeroMuyLargo << endl;
    cout << "Nombre del estudiante: " << nombreEstudiante << endl;

    return 0;
}

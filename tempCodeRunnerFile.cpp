#include <iostream> 
#include <cctype> // Incluye funciones para trabajar con caracteres

using namespace std; 
int main() 
{ // Inicio del programa
    char letra; // Declara una variable para guardar cada letra
    int contador = 0; // Inicializa el contador de vocales en cero

    cout << "Ingrese 5 letras:" << endl; // Solicita cinco letras al usuario

    for (int i = 0; i < 5; i++) // Repite el proceso cinco veces
    { // Inicio del ciclo
        cin >> letra; // Lee una letra ingresada por el usuario

        letra = tolower(letra); // Convierte la letra a minúscula

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') // Comprueba si es vocal
        { // Inicio de la condición
            contador++; // Aumenta el contador en uno
        } // Fin de la condición
    } // Fin del ciclo

    cout << "Cantidad de vocales: " << contador << endl; // Muestra la cantidad de vocales

    return 0; 
} // Fin del programa
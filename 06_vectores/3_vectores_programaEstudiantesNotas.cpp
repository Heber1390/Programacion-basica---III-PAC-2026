/*dame una propuesta de ejercicio para practicar vectores en C++ que sea similar a este ejemplo de programa de estudiantes y notas, teniendo en cuenta
quye la nota inicial es en base a 100 y que posterior se pondera a:
I parcial 25%
II parcial 35%
III parcial 40% 

y una observacion en cada uno 
si es mayor o igual a 65 - aprobado 
si es menor a 65 - reprobado

el porgrama deber pedir por estudiante:
Nombre del estudiante
numero de cuenta
edad
sexo
carrera
nota 1, nota 2, nota 3
observacion 1, observacion 2, observacion 3
*/

#include <iostream>
#include <vector>

using namespace std;

//definir los vectores para almacenar la información de los estudiantes
vector<string> nombresEstudiantes(15) ;
vector<string> numeroCuentaEstudiante(15);
vector<int> edadEstudiante(15);
vector<char> sexoEstudiante(15);
vector<string> carreraEstudiante(15);
vector<float> notas1(15);
vector<float> notas2(15);
vector<float> notas3(15);
vector<float> notasFinales(15);
vector<string> observacionEstudiante(15);

int i = 0;


int main () {

char respuesta;


//Encabezado de bienvenida
cout << "=== Programa de Gestion de Estudiantes ===" << endl;

do{
//entrada de datos de los estudiantes
cout<<"Estudiante "<<i+1<<endl;
cout<<"Ingrese el nombre del estudiante: ";
cin >> nombresEstudiantes[i];
cout<<"Ingrese el numero de cuenta del estudiante: ";
cin >> numeroCuentaEstudiante[i];
cout<<"Ingrese la edad del estudiante: ";   
cin >> edadEstudiante[i];
while (edadEstudiante[i] < 0  or edadEstudiante[i] > 100) {
    cout << "Edad fuera de rango" << endl;
    cout<<"Ingrese la edad del estudiante: ";
    cin >> edadEstudiante[i];
}

cout<<"Ingrese el sexo del estudiante (M/F): ";
cin >> sexoEstudiante[i];
cout<<"Ingrese la carrera del estudiante: ";
cin >> carreraEstudiante[i];

cout<<"Ingrese la nota del I parcial (0-100): ";
cin >> notas1[i];
cout<<"Ingrese la nota del II parcial (0-100): ";
cin >> notas2[i];
cout<<"Ingrese la nota del III parcial (0-100): ";
cin >> notas3[i];

//Calculo de la nota final ponderada
notasFinales[i] = (notas1[i] * 0.25) + (notas2[i] * 0.35) + (notas3[i] * 0.40);     

//imprimir la nota final y la observacion
cout << "La nota final del estudiante " << nombresEstudiantes[i] << " es: " << notasFinales[i] << "%" << endl;
if (notasFinales[i] >= 65) {
    observacionEstudiante[i] = "Aprobado";
} else {
    observacionEstudiante[i] = "Reprobado"; 

}

cout<<"desea ingresar otro estudiante? (s/n): "<<endl;
cin >> respuesta;
}while ( respuesta == 's' || respuesta == 'S');
i++;
}
       


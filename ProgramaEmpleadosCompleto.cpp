#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Definir e inicializar variables
string nombreEmpleado;
int edadEmpleado, tipoEmpleado;
char sexoEmpleado;
double salarioEmpleado, horasEmpleadoPlantaDiariaLV = 9.5, horasEmpleadoPlantaS = 6, horasEmpleadoPlantaMesLV, horasEmpleadoPlantaSabadoMes, horasEmpleadoPlantaMes, sueldoEmpleadoPlantaHora, sueldoEmpleadoPlantaS, sueldoDiarioLV, sueldoEmpleadoPlantaMinuto, sueldoEmpleadoPlantaSegundo, sueldoEmpleadoPlantaSemanaLV, sueldoEmpleadoPlantaSemanaS, sueldoEmpleadoPlantaQuincenal;
double horasEmpleadoPlantaSemana, horasEmpleadoPlantaSemanaLV;

// Variables nuevas: empleado de medio tiempo
double horasEmpleadoMedioTiempoDiaria = 5.5, horasEmpleadoMedioTiempoSemanaLV, horasEmpleadoMedioTiempoSemana, horasEmpleadoMedioTiempoMes, sueldoEmpleadoMedioTiempoHora, sueldoEmpleadoMedioTiempoDiarioLV, sueldoEmpleadoMedioTiempoS, sueldoEmpleadoMedioTiempoMinuto, sueldoEmpleadoMedioTiempoSegundo, sueldoEmpleadoMedioTiempoSemanaLV, sueldoEmpleadoMedioTiempoSemanaS, sueldoEmpleadoMedioTiempoQuincenal;

// Variables nuevas: empleado por contrato
double horasEmpleadoContratoSemana, horasEmpleadoContratoDiariaLV, horasEmpleadoContratoMes, sueldoEmpleadoContratoHora, sueldoEmpleadoContratoDiarioLV, sueldoEmpleadoContratoMinuto, sueldoEmpleadoContratoSegundo, sueldoEmpleadoContratoSemanaLV, sueldoEmpleadoContratoQuincenal;

int main()
{

    cout << "========== PILLOFON ===========" << endl;
    cout << "Ingrese el nombre del empleado: ";
    getline(cin >> ws, nombreEmpleado);

    cout << "Ingrese la edad del empleado: ";
    cin >> edadEmpleado;
    while (edadEmpleado < 18 or edadEmpleado > 65)
    {
        cout << "Edad fuera de rango" << endl;
        cout << "Ingrese la edad del empleado: ";
        cin >> edadEmpleado;
    }
    cout << "Ingrese el sexo del empleado (M/F): ";
    cin >> sexoEmpleado;
    while (sexoEmpleado != 'M' && sexoEmpleado != 'm' && sexoEmpleado != 'F' && sexoEmpleado != 'f')
    {
        cout << "Sexo no valido" << endl;
        cout << "Ingrese el sexo del empleado: ";
        cin >> sexoEmpleado;
    }

    cout << "Ingrese el salario del empleado: ";
    cin >> salarioEmpleado;
    while (salarioEmpleado <= 16000)
    {
        cout << "Salario no valido" << endl;
        cout << "Ingrese el salario del empleado: ";
        cin >> salarioEmpleado;
    }

    cout << "Ingrese el tipo de empleado 1-Empleado de planta 2-Empleado Medio tiempo, 3-Empleado por contrato): ";
    cin >> tipoEmpleado;
    switch (tipoEmpleado)
    {
    case 1:
        cout << "Empleado de planta" << endl;
        cout << " El empleado de planta trabaja 9.5 horas de lunes a viernes y 6 horas los sabados con un total de " << endl;

        // Calculo de las horas trabajadas
        horasEmpleadoPlantaSemanaLV = horasEmpleadoPlantaDiariaLV * 5;                       // 47.5 horas a la semana de lunes a viernes
        horasEmpleadoPlantaSabadoMes = horasEmpleadoPlantaS * 4;                             // 24 horas al mes los sabados
        horasEmpleadoPlantaSemana = horasEmpleadoPlantaSemanaLV + horasEmpleadoPlantaS;      // 53.5 horas a la semana en total
        horasEmpleadoPlantaMes = horasEmpleadoPlantaSemana * 4;                              // 214 horas al mes en total

        // calculo de los sueldos
        sueldoEmpleadoPlantaHora = salarioEmpleado / horasEmpleadoPlantaMes;
        sueldoEmpleadoPlantaS = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaS;
        sueldoDiarioLV = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaDiariaLV;
        sueldoEmpleadoPlantaMinuto = sueldoEmpleadoPlantaHora / 60;
        sueldoEmpleadoPlantaSegundo = sueldoEmpleadoPlantaMinuto / 60;
        sueldoEmpleadoPlantaSemanaLV = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaSemanaLV;
        sueldoEmpleadoPlantaSemanaS = sueldoEmpleadoPlantaHora * horasEmpleadoPlantaS;
        sueldoEmpleadoPlantaQuincenal = horasEmpleadoPlantaMes / 2 * sueldoEmpleadoPlantaHora;

        // Salida de los datos

        cout << nombreEmpleado << " tiene " << edadEmpleado << " años, es de sexo " << sexoEmpleado << " y su salario es de: " << salarioEmpleado << endl;
        cout << "El sueldo diario del empleado de planta es:" << sueldoDiarioLV << endl;
        cout << "El sueldo de los sabados del empleado de planta es: " << sueldoEmpleadoPlantaS << endl;
        cout << "El sueldo por hora del empleado de planta es: " << sueldoEmpleadoPlantaHora << endl;
        cout << "El sueldo por minuto del empleado de planta es: " << sueldoEmpleadoPlantaMinuto << endl;
        cout << "El sueldo por segundo del empleado de planta es: " << sueldoEmpleadoPlantaSegundo << endl;
        cout << "El sueldo por semana de lunes a viernes del empleado de planta es: " << sueldoEmpleadoPlantaSemanaLV << endl;
        cout << "El sueldo por semana de lunes a sabado del empleado de planta es: " << sueldoEmpleadoPlantaSemanaS + sueldoEmpleadoPlantaSemanaLV << endl;
        cout << "El sueldo por quincena del empleado de planta es: " << sueldoEmpleadoPlantaQuincenal << endl;

        break;
    case 2:
        cout << "Empleado Medio tiempo" << endl;
        cout << " El empleado de medio tiempo trabaja 5.5 horas de lunes a sabado" << endl;

        // Calculo de las horas trabajadas
        horasEmpleadoMedioTiempoSemanaLV = horasEmpleadoMedioTiempoDiaria * 5; // 27.5 horas a la semana de lunes a viernes
        horasEmpleadoMedioTiempoSemana = horasEmpleadoMedioTiempoDiaria * 6;   // 33 horas a la semana de lunes a sabado
        horasEmpleadoMedioTiempoMes = horasEmpleadoMedioTiempoSemana * 4;      // 132 horas al mes en total

        // calculo de los sueldos
        sueldoEmpleadoMedioTiempoHora = salarioEmpleado / horasEmpleadoMedioTiempoMes;
        sueldoEmpleadoMedioTiempoDiarioLV = sueldoEmpleadoMedioTiempoHora * horasEmpleadoMedioTiempoDiaria;
        sueldoEmpleadoMedioTiempoS = sueldoEmpleadoMedioTiempoHora * horasEmpleadoMedioTiempoDiaria;
        sueldoEmpleadoMedioTiempoMinuto = sueldoEmpleadoMedioTiempoHora / 60;
        sueldoEmpleadoMedioTiempoSegundo = sueldoEmpleadoMedioTiempoMinuto / 60;
        sueldoEmpleadoMedioTiempoSemanaLV = sueldoEmpleadoMedioTiempoHora * horasEmpleadoMedioTiempoSemanaLV;
        sueldoEmpleadoMedioTiempoSemanaS = sueldoEmpleadoMedioTiempoHora * horasEmpleadoMedioTiempoSemana;
        sueldoEmpleadoMedioTiempoQuincenal = horasEmpleadoMedioTiempoMes / 2 * sueldoEmpleadoMedioTiempoHora;

        // Salida de los datos
        cout << nombreEmpleado << " tiene " << edadEmpleado << " años, es de sexo " << sexoEmpleado << " y su salario es de: " << salarioEmpleado << endl;
        cout << "El sueldo diario del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoDiarioLV << endl;
        cout << "El sueldo de los sabados del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoS << endl;
        cout << "El sueldo por hora del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoHora << endl;
        cout << "El sueldo por minuto del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoMinuto << endl;
        cout << "El sueldo por segundo del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoSegundo << endl;
        cout << "El sueldo por semana de lunes a viernes del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoSemanaLV << endl;
        cout << "El sueldo por semana de lunes a sabado del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoSemanaS << endl;
        cout << "El sueldo por quincena del empleado de medio tiempo es: " << sueldoEmpleadoMedioTiempoQuincenal << endl;
        cout << "Las horas trabajadas por semana del empleado de medio tiempo son: " << horasEmpleadoMedioTiempoSemana << endl;
        cout << "Las horas trabajadas por mes del empleado de medio tiempo son: " << horasEmpleadoMedioTiempoMes << endl;

        break;
    case 3:
        cout << "Empleado por contrato" << endl;
        cout << "Ingrese las horas semanales del empleado (entre 30 y 40): ";
        cin >> horasEmpleadoContratoSemana;
        while (horasEmpleadoContratoSemana < 30 or horasEmpleadoContratoSemana > 40)
        {
            cout << "ERROR: horas fuera de rango permitido" << endl;
            cout << "Ingrese las horas semanales del empleado (entre 30 y 40): ";
            cin >> horasEmpleadoContratoSemana;
        }

        // Calculo de las horas trabajadas
        horasEmpleadoContratoDiariaLV = horasEmpleadoContratoSemana / 5; // horas por dia de lunes a viernes
        horasEmpleadoContratoMes = horasEmpleadoContratoSemana * 4;      // horas al mes en total

        // calculo de los sueldos
        sueldoEmpleadoContratoHora = salarioEmpleado / horasEmpleadoContratoMes;
        sueldoEmpleadoContratoDiarioLV = sueldoEmpleadoContratoHora * horasEmpleadoContratoDiariaLV;
        sueldoEmpleadoContratoMinuto = sueldoEmpleadoContratoHora / 60;
        sueldoEmpleadoContratoSegundo = sueldoEmpleadoContratoMinuto / 60;
        sueldoEmpleadoContratoSemanaLV = sueldoEmpleadoContratoHora * horasEmpleadoContratoSemana;
        sueldoEmpleadoContratoQuincenal = horasEmpleadoContratoMes / 2 * sueldoEmpleadoContratoHora;

        // Salida de los datos
        cout << nombreEmpleado << " tiene " << edadEmpleado << " años, es de sexo " << sexoEmpleado << " y su salario es de: " << salarioEmpleado << endl;
        cout << "El sueldo diario del empleado por contrato es: " << sueldoEmpleadoContratoDiarioLV << endl;
        cout << "El sueldo de los sabados del empleado por contrato no aplica" << endl;
        cout << "El sueldo por hora del empleado por contrato es: " << sueldoEmpleadoContratoHora << endl;
        cout << "El sueldo por minuto del empleado por contrato es: " << sueldoEmpleadoContratoMinuto << endl;
        cout << "El sueldo por segundo del empleado por contrato es: " << sueldoEmpleadoContratoSegundo << endl;
        cout << "El sueldo por semana de lunes a viernes del empleado por contrato es: " << sueldoEmpleadoContratoSemanaLV << endl;
        cout << "El sueldo por semana de lunes a sabado del empleado por contrato no aplica" << endl;
        cout << "El sueldo por quincena del empleado por contrato es: " << sueldoEmpleadoContratoQuincenal << endl;
        cout << "Las horas trabajadas por semana del empleado por contrato son: " << horasEmpleadoContratoSemana << endl;
        cout << "Las horas trabajadas por mes del empleado por contrato son: " << horasEmpleadoContratoMes << endl;

        break;
    default:
        cout << "Tipo de empleado no valido" << endl;
    }
}
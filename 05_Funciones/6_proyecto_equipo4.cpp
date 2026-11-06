#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// ==========================================
//INTEGRANTES DEL GRUPO: 
// ==========================================

//DANIA MARICELA CARRANZA SALGADO  20181007873 
//YEISON CRISTINO ORDOÑEZ POSADAS  20231002806 
//IRIS IZABELA SOLANO AMADOR  20231003826 
//KEVIN ANTONIO SANCHEZ LEON  20231004812

// ==========================================
// FUNCIONES ESPECIFICADAS EN EL ALGORITMO
// ==========================================

// 1. FUNCION POR VALOR: Calcula el subtotal (precio * cantidad)
double calcularSubtotal(double precio, double cantidad) {
    return precio * cantidad;
}

// 2. FUNCION POR VALOR: Calcula el descuento según un porcentaje
double calcularDescuento(double subtotal, double porcentaje) {
    return subtotal * porcentaje;
}

// 3. FUNCION POR REFERENCIA: Modifica los acumuladores generales y de unidades/libras vendidas
void acumularVenta(double &subtotalGeneral, double &totalVendidas, double subtotal, double cantidad) {
    subtotalGeneral += subtotal;
    totalVendidas += cantidad;
}

// 4. FUNCION POR REFERENCIA: Calcula los impuestos ISV general (15%) y adicional en licores (3%)
void calcularImpuestos(double base, double baseLicores, double &impuestoISV, double &impuestoLicores) {
    impuestoISV = base * 0.15;
    impuestoLicores = baseLicores * 0.03;
}

// 5. FUNCION POR VALOR: Valida si la cantidad supera el stock disponible
bool validarStock(double cantidad, double stockTotal) {
    return cantidad > stockTotal;
}

int main() {
    // Declaración de variables de entrada
    int edadCliente, tipoCliente, diaSemana;
    char sexoCliente; // 'M' para Masculino, 'F' para Femenino
    char finalizarCompra = 'n';

    cout << "=== SISTEMA DE VENTAS SUPERMERCADO ===\n";
    cout << "Ingrese la edad del cliente: ";
    cin >> edadCliente;

    // Validación de rango de edad según algoritmo
    while(edadCliente < 15 || edadCliente > 100) {
        cout << "Edad fuera de rango.Ingrese nuevamente (15-100):";
        cin >> edadCliente;
        }
    
    cout << "Tipo de cliente (1. Cliente estrella, 2. Cliente Regular, 3. Cliente nuevo): ";
    cin >> tipoCliente;
 while(tipoCliente < 1 || tipoCliente > 3) {
    cout << "Opcion incorrecta. ingrese nuevamente (1-2-3):";
    cin >> tipoCliente;
     }
cout << "Sexo del cliente (M = Masculino, F = Femenino): ";
    cin >> sexoCliente;
    while(sexoCliente != 'M' && sexoCliente != 'm' && sexoCliente != 'F' && sexoCliente != 'f') {
        cout << "Opcion incorrecta. Ingrese nuevamente (M/F): ";
        cin >> sexoCliente;
    }
    cout << "Dia de la semana (1=Lunes, 2=Martes, 3=Miercoles, 4=Jueves, 5=Viernes, 6=Sabado, 7=Domingo): ";
    cin >> diaSemana;
    while(diaSemana < 1 || diaSemana > 7) {
    cout << "Opcion incorrecta. ingrese nuevamente (1-7):";
    cin >> diaSemana;
     }

    // Stocks iniciales (100 para cada producto según algoritmo)
    double stockTomates = 100, stockRepollo = 100, stockPapas = 100;
    double stockCarneMolida = 100, stockCarneDeCerdo = 100, stockCarneAsar = 100;
    double stockCervezaN = 100, stockCervezaE = 100, stockVino = 100, stockVodka = 100;

    // Acumuladores de Clientes (libras/unidades)
    double librasTomatesCliente = 0, librasRepolloCliente = 0, librasPapasCliente = 0;
    double librasCarneMolidaCliente = 0, librasCarneDeCerdoCliente = 0, librasCarneAsarCliente = 0;
    double unidadesCervezaNCliente = 0, unidadesCervezaECliente = 0, unidadesVinoCliente = 0, unidadesVodkaCliente = 0;

    // Acumuladores de Subtotales por producto
    double subtotalTomates = 0, subtotalRepollo = 0, subtotalPapas = 0;
    double subtotalCarneMolida = 0, subtotalCarneDeCerdo = 0, subtotalCarneAsar = 0;
    double subtotalCervezaN = 0, subtotalCervezaE = 0, subtotalVino = 0, subtotalVodka = 0;
    double subtotalCliente = 0; // Acumulador general de subtotal del cliente
    

    // Totales vendidos generales
    double totalLibrasTomates = 0, totalLibrasRepollo = 0, totalLibrasPapas = 0;
    double totalLibrasCarneMolida = 0, totalLibrasCarneDeCerdo = 0, totalLibrasCarneAsar = 0;
    double totalUnidadesCervezaN = 0, totalUnidadesCervezaE = 0, totalUnidadesVino = 0, totalUnidadesVodka = 0;

    int contadorCarnes = 0; // Para controlar el descuento del segundo producto de carnes
    double subtotalSegundaCarne = 0; 

   // El ciclo se repite mientras NO presiones 'S'
    while (finalizarCompra != 's' && finalizarCompra != 'S') {
        char opcionMenu;
        cout << "\n--- MODULO 1: SELECCION DE PRODUCTO ---\n";
        cout << "Seleccione area (V = Verduras, C = Carnes, L = Licores): ";
        cin >> opcionMenu;

        if (opcionMenu == 'V' || opcionMenu == 'v') {
            int opcionVerduras;
            cout << "1- Tomates (L. 10)\n2- Repollo (L. 15)\n3- Papas (L. 17)\nElija opcion: ";
            cin >> opcionVerduras;

            double cantidad;
            cout << "Ingrese la cantidad en libras: ";
            cin >> cantidad;

            if (opcionVerduras == 1) {
                if (validarStock(cantidad, stockTomates)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    librasTomatesCliente += cantidad;
double subParcial = calcularSubtotal(10.0, cantidad);
subtotalTomates += subParcial;
acumularVenta(subtotalCliente, totalLibrasTomates, subParcial, cantidad);
                }
            } else if (opcionVerduras == 2) {
                if (validarStock(cantidad, stockRepollo)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    librasRepolloCliente += cantidad;
                   double subParcial = calcularSubtotal(15.0, cantidad);
                   subtotalRepollo += subParcial;
                    acumularVenta(subtotalCliente, totalLibrasRepollo, subParcial, cantidad); // Ajuste según lógica
                }
            } else if (opcionVerduras == 3) {
                if (validarStock(cantidad, stockPapas)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    librasPapasCliente += cantidad;
                    double subParcial = calcularSubtotal(17.0, cantidad);
                    subtotalPapas += subParcial;
                    acumularVenta(subtotalCliente, totalLibrasPapas, subParcial, cantidad); 
                }
            } else {
                cout << "\"Opcion para verduras incorrecta\"\n";
            }

        } else if (opcionMenu == 'C' || opcionMenu == 'c') {
            int opcionCarnes;
            cout << "1- Carne Molida (L. 50)\n2- Carne de Cerdo (L. 70)\n3- Carne para Asar (L. 75)\nElija opcion: ";
            cin >> opcionCarnes;

            double cantidad;
            cout << "Ingrese la cantidad en libras: ";
            cin >> cantidad;

            contadorCarnes++; // Cuenta cuántos tipos de carne va comprando

            if (opcionCarnes == 1) {
                if (validarStock(cantidad, stockCarneMolida)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    librasCarneMolidaCliente += cantidad;
                    double subParcial = calcularSubtotal(50.0, cantidad);
                    subtotalCarneMolida += subParcial;
                    if (contadorCarnes == 2) {
                        subtotalSegundaCarne = subParcial;
                    }
                    acumularVenta(subtotalCliente, totalLibrasCarneMolida, subParcial, cantidad);
                }
            }
            else if (opcionCarnes == 2) {
                if (validarStock(cantidad, stockCarneDeCerdo)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    librasCarneDeCerdoCliente += cantidad;
                    double subParcial = calcularSubtotal(70.0, cantidad);
                    subtotalCarneDeCerdo += subParcial;
                    if (contadorCarnes == 2) {
                        subtotalSegundaCarne = subParcial;
                    }
                    acumularVenta(subtotalCliente, totalLibrasCarneDeCerdo, subParcial, cantidad);
                }
            }
            else if (opcionCarnes == 3) {
                if (validarStock(cantidad, stockCarneAsar)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    librasCarneAsarCliente += cantidad;
                    double subParcial = calcularSubtotal(75.0, cantidad);
                    subtotalCarneAsar += subParcial;
                    if (contadorCarnes == 2) {
                        subtotalSegundaCarne = subParcial;
                    }
                    acumularVenta(subtotalCliente, totalLibrasCarneAsar, subParcial, cantidad); 
                }
            } 
            else {
                cout << "\"Opcion para carne incorrecta\"\n";
            }
        }else if (opcionMenu == 'L' || opcionMenu == 'l') {
            // Validar edad para licores
            if (edadCliente < 18) {
                cout << "\"Prohibido vender licores a menores de 18 anos\"\n";
                continue;
            }

            int opcionLicores;
            cout << "1- Cerveza Nacional (L. 50)\n2- Cerveza Extranjera (L. 80)\n3- Vino (L. 200)\n4- Vodka (L. 100)\nElija opcion: ";
            cin >> opcionLicores;

            double cantidad;
            cout << "Ingrese la cantidad en unidades/botellas: ";
            cin >> cantidad;

            if (opcionLicores == 1) {
                if (validarStock(cantidad, stockCervezaN)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    unidadesCervezaNCliente += cantidad;
double subParcial = calcularSubtotal(50.0, cantidad);
subtotalCervezaN += subParcial;
acumularVenta(subtotalCliente, totalUnidadesCervezaN, subParcial, cantidad);
                }
            } else if (opcionLicores == 2) {
                if (validarStock(cantidad, stockCervezaE)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    unidadesCervezaECliente += cantidad;
                    double subParcial = calcularSubtotal(80.0, cantidad);
                    subtotalCervezaE += subParcial;
                    acumularVenta(subtotalCliente, totalUnidadesCervezaE, subParcial, cantidad); // Ajuste según lógica
                }
            } else if (opcionLicores == 3) {
                if (validarStock(cantidad, stockVino)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    unidadesVinoCliente += cantidad;
                    double subParcial = calcularSubtotal(200.0, cantidad);
                    subtotalVino += subParcial;
                    acumularVenta(subtotalCliente, totalUnidadesVino, subParcial, cantidad); // Ajuste según lógica 
                }
            } else if (opcionLicores == 4) {
                if (validarStock(cantidad, stockVodka)) {
                    cout << "\"Cantidad supera el stock\"\n";
                } else {
                    unidadesVodkaCliente += cantidad;
                   double subParcial = calcularSubtotal(100.0, cantidad);
                   subtotalVodka += subParcial;
                    acumularVenta(subtotalCliente, totalUnidadesVodka, subParcial, cantidad); // Ajuste según lógica
                }
            } else {
                cout << "\"Opcion incorrecta de Licores\"\n";
            }
        } else {
            cout << "\"Opcion de menu incorrecta\"\n";
        }

       // Solicitar al usuario si desea finalizar la compra o agregar más productos
        cout << "\nDesea finalizar la compra e imprimir la factura? (S = Si, N = Agregar mas productos): ";
        cin >> finalizarCompra;
        
        while (finalizarCompra != 's' && finalizarCompra != 'S' && finalizarCompra != 'n' && finalizarCompra != 'N') {
            cout << "Opcion incorrecta. Ingrese nuevamente (S/N): ";
            cin >> finalizarCompra;
        }  
    } 

    // ==========================================
    // PROCESAMIENTO DE TOTALES Y DESCUENTOS
    // ==========================================
    double subtotalVerduras = subtotalTomates + subtotalRepollo + subtotalPapas;
    double subtotalCarnes = subtotalCarneMolida + subtotalCarneDeCerdo + subtotalCarneAsar;
    double subtotalLicores = subtotalCervezaN + subtotalCervezaE + subtotalVino + subtotalVodka;
    subtotalCliente = subtotalVerduras + subtotalCarnes + subtotalLicores;

    double descuentoClienteEstrella = 0;
    double descuentoClienteRegular = 0;
    double descuentoClienteNuevo = 0;
    double descuentoDiaSemana = 0;
    double descuentoViernes = 0;
    double descuentoSegundaCarne = 0;
    double descuentoSixpack = 0;

    // Descuento por tipo de cliente
    if (tipoCliente == 1) {
        descuentoClienteEstrella = calcularDescuento(subtotalCarnes + subtotalVerduras, 0.04);
    } else if (tipoCliente == 2) {
        descuentoClienteRegular = calcularDescuento(subtotalCarnes, 0.03);
    } else if (tipoCliente == 3) {
        descuentoClienteNuevo = calcularDescuento(subtotalLicores, 0.02);
    }

    // Descuento por día (Lunes = 1 o Miercoles = 3)
    if (diaSemana == 1 || diaSemana == 3) {
        descuentoDiaSemana = calcularDescuento(subtotalCliente, 0.03);
    }

    // Descuento Viernes para tercera edad (Viernes = 5)
    if (diaSemana == 5 && edadCliente >= 65) {
        descuentoViernes = calcularDescuento(subtotalCliente, 0.10);
    }

    // Descuento segunda carne (50%)
        descuentoSegundaCarne = subtotalSegundaCarne * 0.50;
    

    // Descuento Six-pack de cerveza (L. 10 por cada 6 cervezas)
    double totalCervezas = unidadesCervezaNCliente + unidadesCervezaECliente;
    descuentoSixpack = (static_cast<int>(totalCervezas) / 6) * 10.0;

    // Total Descuentos
    double descuentoTotal = descuentoClienteEstrella + descuentoClienteRegular + descuentoClienteNuevo +
                            descuentoDiaSemana + descuentoViernes + descuentoSegundaCarne + descuentoSixpack;

    double subtotalConDescuento = subtotalCliente - descuentoTotal;

    // Impuestos (Llamada a función por referencia)
    double impuestoISV = 0, impuestoLicores = 0;
    calcularImpuestos(subtotalConDescuento, subtotalLicores, impuestoISV, impuestoLicores);
    double impuestoTotal = impuestoISV + impuestoLicores;

    double totalPagarLempiras = subtotalConDescuento + impuestoTotal;
    double tipoCambio = 24.5;
    double totalDolares = totalPagarLempiras / tipoCambio;

    // ==========================================
    // SALIDA (FACTURA)
    // ==========================================
   cout << "\n========================================\n";
    cout << "           FACTURA SUPERMERCADO         \n";
    cout << "========================================\n";
    cout << fixed << setprecision(2);
    cout << " Sexo del cliente:          " << sexoCliente << endl; 
    cout << "----------------------------------------\n";
    
    cout << "--- CONSUMO CLIENTE ---\n";
    cout << " Tomates comprados (lb):    " << librasTomatesCliente << endl;
    cout << " Repollo comprado (lb):     " << librasRepolloCliente << endl;
    cout << " Papas compradas (lb):      " << librasPapasCliente << endl;
    cout << " Carne Molida (lb):         " << librasCarneMolidaCliente << endl;
    cout << " Carne de Cerdo (lb):       " << librasCarneDeCerdoCliente << endl;
    cout << " Carne para Asar (lb):      " << librasCarneAsarCliente << endl;
    cout << " Cerveza Nacional (und):    " << unidadesCervezaNCliente << endl;
    cout << " Cerveza Extranjera (und):  " << unidadesCervezaECliente << endl;
    cout << " Vino (und):                " << unidadesVinoCliente << endl;
    cout << " Vodka (und):               " << unidadesVodkaCliente << endl;
    cout << "----------------------------------------\n";
    
    cout << " Subtotal:          L. " << subtotalCliente << endl;
    cout << " Descuentos:        L. " << descuentoTotal << endl;
    cout << " Impuestos:         L. " << impuestoTotal << endl;
    cout << " Total a pagar:     L. " << totalPagarLempiras << endl;
    cout << " Total en Dolares:  $  " << totalDolares << endl;
    cout << "========================================\n";

    return 0;
}
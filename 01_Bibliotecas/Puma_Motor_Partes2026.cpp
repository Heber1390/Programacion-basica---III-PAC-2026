//Universidad Nacional Autónoma de Honduras UNAH
// Examen #1 de Programacion Basica 2026
// Ester Rebeca Palacios Hernandez
// 20171002844

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

const double ISV = 0.15;
const double TASA_USD = 26.42;
const int TOTAL_PRODUCTOS = 12;

//INVENTARIO Y VENTAS
// Motor y Afinacion
int stockFiltro = 30, stockBujia = 80, stockAceite = 40;
int vendFiltro = 0, vendBujia = 0, vendAceite = 0;

// Frenos y Suspension
int stockPastillas = 25, stockDisco = 15, stockAmortiguador = 12;
int vendPastillas = 0, vendDisco = 0, vendAmortiguador = 0;

// Electrico
int stockBateria = 10, stockAlternador = 6, stockBombillo = 60;
int vendBateria = 0, vendAlternador = 0, vendBombillo = 0;

// Accesorios
int stockLimpiaparabrisas = 20, stockAromatizante = 50, stockCera = 25;
int vendLimpiaparabrisas = 0, vendAromatizante = 0, vendCera = 0;

// total vendido por categoria (sin ISV)
double totalMotorAfinacion = 0, totalFrenosSuspension = 0, totalElectrico = 0, totalAccesorios = 0;

// totales del dia
double descuentosDia = 0, isvDia = 0, totalLpsDia = 0;
int conteoEfectivo = 0, conteoTransferencia = 0;

int dummy = 0;
double dummyD = 0;

//CATALOGO DE LOS PRODUCTOS
string nombreProducto(int c) {
    switch (c) {
        case 1:  return "Filtro de aceite";
        case 2:  return "Bujia (unidad)";
        case 3:  return "Aceite 10W-30 (litro)";
        case 4:  return "Pastillas de freno (juego)";
        case 5:  return "Disco de freno (unidad)";
        case 6:  return "Amortiguador (unidad)";
        case 7:  return "Bateria 12V";
        case 8:  return "Alternador";
        case 9:  return "Bombillo LED (unidad)";
        case 10: return "Limpiaparabrisas (par)";
        case 11: return "Aromatizante";
        case 12: return "Cera para auto";
        default: return "Desconocido";
    }
}

double precioProducto(int c) {
    switch (c) {
        case 1:  return 120.00;
        case 2:  return 90.00;
        case 3:  return 180.00;
        case 4:  return 450.00;
        case 5:  return 900.00;
        case 6:  return 1200.00;
        case 7:  return 2500.00;
        case 8:  return 3800.00;
        case 9:  return 80.00;
        case 10: return 250.00;
        case 11: return 60.00;
        case 12: return 150.00;
        default: return 0;
    }
}

int puntosProducto(int c) {
    switch (c) {
        case 1:  return 10;
        case 2:  return 8;
        case 3:  return 12;
        case 4:  return 25;
        case 5:  return 40;
        case 6:  return 50;
        case 7:  return 80;
        case 8:  return 100;
        case 9:  return 5;
        case 10: return 15;
        case 11: return 3;
        case 12: return 8;
        default: return 0;
    }
}

// 1 Motor y Afinacion
// 2 Frenos y Suspension
// 3 Electrico
// 4 Accesorios

int categoriaProducto(int c) {
    if (c >= 1 && c <= 3) return 1;
    else if (c >= 4 && c <= 6) return 2;
    else if (c >= 7 && c <= 9) return 3;
    else return 4;
}

string nombreCategoria(int cat) {
    switch (cat) {
        case 1:  return "Motor y Afinacion";
        case 2:  return "Frenos y Suspension";
        case 3:  return "Electrico";
        default: return "Accesorios";
    }
}

int& stockRef(int c) {
    switch (c) {
        case 1:  return stockFiltro;
        case 2:  return stockBujia;
        case 3:  return stockAceite;
        case 4:  return stockPastillas;
        case 5:  return stockDisco;
        case 6:  return stockAmortiguador;
        case 7:  return stockBateria;
        case 8:  return stockAlternador;
        case 9:  return stockBombillo;
        case 10: return stockLimpiaparabrisas;
        case 11: return stockAromatizante;
        case 12: return stockCera;
        default: return dummy;
    }
}

int& vendidosRef(int c) {
    switch (c) {
        case 1:  return vendFiltro;
        case 2:  return vendBujia;
        case 3:  return vendAceite;
        case 4:  return vendPastillas;
        case 5:  return vendDisco;
        case 6:  return vendAmortiguador;
        case 7:  return vendBateria;
        case 8:  return vendAlternador;
        case 9:  return vendBombillo;
        case 10: return vendLimpiaparabrisas;
        case 11: return vendAromatizante;
        case 12: return vendCera;
        default: return dummy;
    }
}

double& totalCategoriaRef(int cat) {
    switch (cat) {
        case 1:  return totalMotorAfinacion;
        case 2:  return totalFrenosSuspension;
        case 3:  return totalElectrico;
        case 4:  return totalAccesorios;
        default: return dummyD;
    }
}

//LECTURA Y VALIDACION DE DATOS
int leerEntero(string mensaje, int minimo, int maximo) {
    int valor;
    while (true) {
        cout << mensaje;
        if (cin >> valor && valor >= minimo && valor <= maximo) {
            return valor;
        }
        cout << "  Entrada invalida. Ingrese un numero entre "
             << minimo << " y " << maximo << ".\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

double leerDouble(string mensaje) {
    double valor;
    while (true) {
        cout << mensaje;
        if (cin >> valor && valor > 0) {
            return valor;
        }
        cout << "  Monto invalido.\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

char leerGenero() {
    char g;
    while (true) {
        cout << "Genero (M = Masculino, F = Femenino): ";
        cin >> g;
        g = toupper(g);
        if (g == 'M' || g == 'F') return g;
        cout << "  Opcion invalida.\n";
    }
}

char leerSN(string mensaje) {
    char r;
    while (true) {
        cout << mensaje;
        cin >> r;
        r = toupper(r);
        if (r == 'S' || r == 'N') return r;
        cout << "  Responda S o N.\n";
    }
}

double redondear(double x) {
    return floor(x * 100 + 0.5) / 100;
}

//MENU AUTO REPUESTOS PUMA MOTOR PARTS
void mostrarMenuProductos() {
    cout << "\n=Auto Repuestos Puma Motor Partes=\n";
    cout << left << setw(5) << "Cod" << setw(28) << "Producto"
         << setw(22) << "Categoria" << setw(11) << "Precio" << "Stock\n";
    cout << "-----------------------------------------------------------\n";
    for (int c = 1; c <= TOTAL_PRODUCTOS; c++) {
        cout << left << setw(5) << c << setw(28) << nombreProducto(c)
             << setw(22) << nombreCategoria(categoriaProducto(c))
             << setw(11) << fixed << setprecision(2) << precioProducto(c)
             << stockRef(c) << "\n";
    }
    cout << "0   Finalizar compra\n";
    cout << "===========================================================\n";
}

string nombreTipoCliente(int tipo) {
    if (tipo == 1) return "Particular";
    else if (tipo == 2) return "Taller";
    else return "Flotilla";
}

//DESCUENTOS
// aqui se saca el descuento que le toca a cada producto
// el del cambio de aceite no esta aqui, ese se calcula al final de la factura
double porcentajeDescuento(int tipoCliente, char genero, int edad, int cat, int cantidad) {
    double porcentaje = 0;

    // descuento segun el tipo de cliente
    switch (tipoCliente) {
        case 1:
            if (cat == 4) porcentaje += 5;
            break;
        case 2:
            if (cat == 1) porcentaje += 10;
            break;
        case 3:
            if (cat == 2) porcentaje += 12;
            break;
    }

    // descuento segun el genero
    if (genero == 'F' && cat == 4) {
        porcentaje += 10;
    } else if (genero == 'M' && cat == 2) {
        porcentaje += 5;
    }

    // tercera edad
    if (edad >= 60) {
        porcentaje += 10;
    }

    // mas de 5 unidades del mismo producto
    if (cantidad > 5) {
        porcentaje += 3;
    }

    return porcentaje;
}

// porcentaje de cada descuento, si no le toca da 0
double pctTipoCliente(int tipoCliente, int cat) {
    if (tipoCliente == 1 && cat == 4) return 5;
    if (tipoCliente == 2 && cat == 1) return 10;
    if (tipoCliente == 3 && cat == 2) return 12;
    return 0;
}

double pctGenero(char genero, int cat) {
    if (genero == 'F' && cat == 4) return 10;
    if (genero == 'M' && cat == 2) return 5;
    return 0;
}

double pctEdad(int edad) {
    if (edad >= 60) return 10;
    return 0;
}

double pctVolumen(int cantidad) {
    if (cantidad > 5) return 3;
    return 0;
}

// arma el texto con los descuentos que si le tocan al producto
string detalleDescuentos(int tipoCliente, char genero, int edad, int cat, int cantidad, double bruto) {
    ostringstream t;
    t << fixed << setprecision(2);

    if (tipoCliente == 1 && cat == 4)
        t << "      - Cliente Particular (Accesorios) 5%: -" << bruto * 0.05 << "\n";
    if (tipoCliente == 2 && cat == 1)
        t << "      - Cliente Taller (Motor y Afinacion) 10%: -" << bruto * 0.10 << "\n";
    if (tipoCliente == 3 && cat == 2)
        t << "      - Cliente Flotilla (Frenos y Suspension) 12%: -" << bruto * 0.12 << "\n";

    if (genero == 'F' && cat == 4)
        t << "      - Mujer (Accesorios) 10%: -" << bruto * 0.10 << "\n";
    if (genero == 'M' && cat == 2)
        t << "      - Hombre (Frenos y Suspension) 5%: -" << bruto * 0.05 << "\n";

    if (edad >= 60)
        t << "      - Tercera edad 10%: -" << bruto * 0.10 << "\n";
    if (cantidad > 5)
        t << "      - Volumen (mas de 5 unidades) 3%: -" << bruto * 0.03 << "\n";

    return t.str();
}

//FORMA DE PAGO
void procesarPago(double total) {
    cout << "\n--- METODO DE PAGO ---\n";
    cout << "1. Efectivo\n2. Transferencia\n";
    int opcion = leerEntero("Seleccione una opcion: ", 1, 2);

    if (opcion == 1) {
        double recibido;
        do {
            recibido = leerDouble("Monto recibido (Lps.): ");
            if (recibido < total) {
                cout << "  Monto insuficiente. Total a pagar: " << total << "\n";
            }
        } while (recibido < total);
        cout << "Cambio: Lps. " << fixed << setprecision(2) << (recibido - total) << "\n";
        conteoEfectivo++;
    } else {
        string referencia, bancoEmisor, bancoDestino;
        cout << "Numero de comprobante/referencia: ";
        getline(cin >> ws, referencia);

        double monto;
        do {
            monto = leerDouble("Ingrese la cantidad exacta de la compra (Lps.): ");
            if (fabs(monto - total) > 0.001) {
                cout << "  La cantidad debe ser exacta: Lps. " << fixed << setprecision(2) << total << "\n";
            }
        } while (fabs(monto - total) > 0.001);

        cout << "Banco de emision: ";
        getline(cin >> ws, bancoEmisor);
        cout << "Banco de destino: ";
        getline(cin >> ws, bancoDestino);

        cout << "Transferencia registrada. Ref: " << referencia
             << " | " << bancoEmisor << " -> " << bancoDestino << "\n";
        conteoTransferencia++;
    }
}

//COMPRA DEL CLIENTE
void facturarCliente() {
    string nombre;
    cout << "\n= NUEVO CLIENTE=\n";
    cout << "Nombre del cliente: ";
    getline(cin >> ws, nombre);

    cout << "Tipo de cliente:\n 1. Particular\n 2. Taller\n 3. Flotilla\n";
    int tipo = leerEntero("Seleccione: ", 1, 3);
    char genero = leerGenero();
    int edad = leerEntero("Edad: ", 1, 120);

    double subtotalBruto = 0;
    double descuentoTotal = 0;
    double brutoFiltro = 0, brutoAceite = 0;   // para la promocion del cambio de aceite
    int puntosCliente = 0;
    int lineas = 0;
    double dTipo = 0, dGenero = 0, dEdad = 0, dVolumen = 0;   // para el resumen de los descuentos

    string detalle = "";   // aqui se guarda los detalles de la factura

    int codigo;
    do {
        mostrarMenuProductos();
        codigo = leerEntero("Codigo del producto (0 para terminar): ", 0, TOTAL_PRODUCTOS);

        if (codigo != 0) {
            int cantidad = leerEntero("Cantidad: ", 1, 100000);

            if (cantidad > stockRef(codigo)) {
                cout << "Stock insuficiente\n";
            } else {
                int cat = categoriaProducto(codigo);
                double precio = precioProducto(codigo);
                double bruto = precio * cantidad;
                double pct = porcentajeDescuento(tipo, genero, edad, cat, cantidad);
                double descuento = bruto * pct / 100.0;

                //se descuenta del inventario y se suma a lo vendido
                stockRef(codigo) -= cantidad;
                vendidosRef(codigo) += cantidad;

                //se suman los totales de la factura
                subtotalBruto += bruto;
                descuentoTotal += descuento;
                totalCategoriaRef(cat) += (bruto - descuento);
                puntosCliente += puntosProducto(codigo) * cantidad;
                lineas++;

                //se suma cada descuento para el resumen
                dTipo += bruto * pctTipoCliente(tipo, cat) / 100.0;
                dGenero += bruto * pctGenero(genero, cat) / 100.0;
                dEdad += bruto * pctEdad(edad) / 100.0;
                dVolumen += bruto * pctVolumen(cantidad) / 100.0;

                //linea del producto en la factura
                ostringstream linea;
                linea << fixed << setprecision(2) << left
                      << setw(24) << nombreProducto(codigo)
                      << right << setw(4) << cantidad
                      << setw(10) << precio
                      << setw(11) << bruto
                      << setw(7) << pct << "%"
                      << setw(10) << descuento
                      << setw(11) << (bruto - descuento) << "\n";
                detalle += linea.str();
                detalle += detalleDescuentos(tipo, genero, edad, cat, cantidad, bruto);

                if (codigo == 1) brutoFiltro += bruto;
                if (codigo == 3) brutoAceite += bruto;

                cout << fixed << setprecision(2);
                cout << ">> Agregado: " << cantidad << " x " << nombreProducto(codigo)
                     << " | Desc: " << pct << "% | Subtotal: Lps. " << (bruto - descuento) << "\n";
            }
        }
    } while (codigo != 0);

    if (lineas == 0) {
        cout << "\nNo se compro ningun producto. No se genera factura.\n";
        return;
    }

    // cambio de aceite: si compro aceite y filtro, 8% mas en esos dos
    double descuentoAceite = 0;
    if (brutoFiltro > 0 && brutoAceite > 0) {
        descuentoAceite = (brutoFiltro + brutoAceite) * 0.08;
        descuentoTotal += descuentoAceite;
        totalMotorAfinacion -= descuentoAceite;   // los dos son de Motor y Afinacion
        cout << "\n** Promocion CAMBIO DE ACEITE aplicada (8% en Aceite + Filtro): -Lps. "
             << fixed << setprecision(2) << descuentoAceite << "\n";
    }

    double subtotalNeto = subtotalBruto - descuentoTotal;
    double isv = subtotalNeto * ISV;
    double total = redondear(subtotalNeto + isv);
    double totalUSD = total / TASA_USD;

    // factura
    cout << fixed << setprecision(2);
    cout << "\n= FACTURA - Auto Repuestos Puma Motor Partes =\n";
    cout << "Cliente: " << nombre << " (" << nombreTipoCliente(tipo) << ")\n";
    cout << "Genero: " << genero << "  Edad: " << edad << "\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << left << setw(24) << "Producto" << right << setw(4) << "Cant"
         << setw(10) << "Precio" << setw(11) << "Bruto"
         << setw(8) << "Desc%" << setw(10) << "Desc Lps"
         << setw(11) << "Neto" << "\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << detalle;
    if (descuentoAceite > 0) {
        cout << left << setw(24) << "Promo cambio de aceite" << right
             << setw(4) << "" << setw(10) << "" << setw(11) << ""
             << setw(7) << "8" << "%" << setw(10) << descuentoAceite
             << setw(11) << -descuentoAceite << "\n";
    }
    cout << "----------------------------------------------------------------------------\n";

    // resumen de los descuentos del cliente
    int cantidadDescuentos = 0;
    cout << "DESCUENTOS OBTENIDOS POR EL CLIENTE:\n";
    if (dTipo > 0) {
        cout << "  * Por tipo de cliente (" << nombreTipoCliente(tipo) << "): Lps. " << dTipo << "\n";
        cantidadDescuentos++;
    }
    if (dGenero > 0) {
        if (genero == 'F') cout << "  * Por genero (Mujer - Accesorios): Lps. " << dGenero << "\n";
        else cout << "  * Por genero (Hombre - Frenos y Suspension): Lps. " << dGenero << "\n";
        cantidadDescuentos++;
    }
    if (dEdad > 0) {
        cout << "  * Por tercera edad: Lps. " << dEdad << "\n";
        cantidadDescuentos++;
    }
    if (dVolumen > 0) {
        cout << "  * Por volumen (mas de 5 unidades): Lps. " << dVolumen << "\n";
        cantidadDescuentos++;
    }
    if (descuentoAceite > 0) {
        cout << "  * Promocion cambio de aceite: Lps. " << descuentoAceite << "\n";
        cantidadDescuentos++;
    }
    if (cantidadDescuentos == 0) {
        cout << "  El cliente no obtuvo descuentos.\n";
    } else {
        cout << "  Cantidad de tipos de descuento obtenidos: " << cantidadDescuentos << "\n";
    }
    cout << "----------------------------------------------------------------------------\n";
    cout << "Subtotal sin descuentos : Lps. " << subtotalBruto << "\n";
    cout << "Descuentos totales      : Lps. " << descuentoTotal << "\n";
    cout << "Subtotal con descuentos : Lps. " << subtotalNeto << "\n";
    cout << "ISV (15%)               : Lps. " << isv << "\n";
    cout << "TOTAL A PAGAR           : Lps. " << total << "\n";
    cout << "TOTAL EN DOLARES        : USD  " << totalUSD << "\n";
    cout << "Puntos acumulados       : " << puntosCliente << "\n";
    cout << "==========================================================\n";

    procesarPago(total);

    // totales del dia
    descuentosDia += descuentoTotal;
    isvDia += isv;
    totalLpsDia += total;

    cout << "\nGracias por su compra, " << nombre << ".\n";
    cout << "Puntos totales del cliente: " << puntosCliente << "\n";
}

//ESTADITICA
void mostrarEstadisticas() {
    cout << "\n= ESTADISTICAS DEL DIA =\n";

    // productos mas vendido
    int codMas = 1;
    for (int c = 2; c <= TOTAL_PRODUCTOS; c++) {
        if (vendidosRef(c) > vendidosRef(codMas)) codMas = c;
    }
    if (vendidosRef(codMas) > 0) {
        cout << "1. Producto mas vendido: " << nombreProducto(codMas)
             << " (" << vendidosRef(codMas) << " unidades)\n";
    } else {
        cout << "1. Producto mas vendido: no hubo ventas\n";
    }

    // producto menos vendido
    int codMenos = 0;
    for (int c = 1; c <= TOTAL_PRODUCTOS; c++) {
        if (vendidosRef(c) > 0) {
            if (codMenos == 0 || vendidosRef(c) < vendidosRef(codMenos)) codMenos = c;
        }
    }
    if (codMenos != 0) {
        cout << "2. Producto menos vendido: " << nombreProducto(codMenos)
             << " (" << vendidosRef(codMenos) << " unidades)\n";
    } else {
        cout << "2. Producto menos vendido: no hubo ventas\n";
    }

    // total por categoria
    cout << fixed << setprecision(2);
    cout << "3. Ganancia por categoria (sin ISV):\n";
    for (int cat = 1; cat <= 4; cat++) {
        cout << "     - " << left << setw(22) << nombreCategoria(cat)
             << "Lps. " << totalCategoriaRef(cat) << "\n";
    }

    cout << "4. Total descuentos aplicados: Lps. " << descuentosDia << "\n";
    cout << "5. Total ISV recaudado: Lps. " << isvDia << "\n";
    cout << "6. Total general vendido: Lps. " << totalLpsDia
         << " / USD " << (totalLpsDia / TASA_USD) << "\n";

    cout << "7. Metodo de pago mas utilizado: ";
    if (conteoEfectivo > conteoTransferencia) {
        cout << "Efectivo (" << conteoEfectivo << " veces)\n";
    } else if (conteoTransferencia > conteoEfectivo) {
        cout << "Transferencia (" << conteoTransferencia << " veces)\n";
    } else if (conteoEfectivo == 0) {
        cout << "No hubo pagos\n";
    } else {
        cout << "Empate (" << conteoEfectivo << " cada uno)\n";
    }
    cout << "======================================================\n";
}

//MAIN
int main() {
    char otro;
    cout << "* BIENVENIDO A AUTO REPUESTOS PUMA MOTOR PARTS *\n";

    do {
        facturarCliente();
        otro = leerSN("\n¿Desea ingresar otro cliente? (S/N): ");
    } while (otro == 'S');

    mostrarEstadisticas();
    return 0;
}
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>   // NUEVO

using namespace std;    

int main () {

    int sexo, edad, tipo_cliente, cantidad, tipo_producto, agregar_producto, dia_semana;
    string nombre,Tipo_producto;

    //INVENTARIO (100 unidades de cada producto) 
    string nombres[10] = {"tomate", "repollo", "papas", "carne molida", "carne de cerdo", "cerdo",
                          "cerveza nacional", "cerveza importada", "vino", "vodka"};
    double precios[10] = {10, 15, 12, 20, 18, 22, 50, 80, 200, 100};
    int stock[10]      = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int vendidas[10]   = {0};// acumulador: unidades vendidas de cada producto
    int resp_stock[10], resp_vend[10];// copia del inventario para cancelar si hay un error

    //VARIABLES AUXILIARES
    int opcion_menu, producto, k, i, edad_cliente, unidades, lineas_carnes;
    double monto, sub_verduras, sub_carnes, sub_licores, subtotal;
    double desc_segundo_carne, desc_sixpack;
     double pv, pc, pl, pdia, pedad, d_verd, d_carn, d_lic;
    double desc_cliente, desc_dia, desc_edad, descuentos, impuestos, total, dolares;
    cout << fixed << setprecision(2);

    // MENU PRINCIPAL1
inicio_menu:
    for (i = 0; i < 10; i++) {           // copia del inventario por si hay que cancelar
        resp_stock[i] = stock[i];
        resp_vend[i] = vendidas[i];
    }
    cout << "\n===== SUPER MARKET - MENU PRINCIPAL =====" << endl;
    cout << "1. Realizar una compra" << endl;
    cout << "2. Ver inventario" << endl;
    cout << "3. Reabastecer inventario" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion_menu;
    if (cin.eof()) return 0;
    if (cin.fail() || opcion_menu < 1 || opcion_menu > 4) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "ERROR: Dato incorrecto (opciones del 1 al 4)." << endl;
        goto inicio_menu;
    }
    if (opcion_menu == 4) {
        cout << "Gracias por usar Super Market. Hasta pronto!" << endl;
        return 0;
    }
    if (opcion_menu == 2) {
        cout << "\n===== INVENTARIO =====" << endl;
        for (i = 0; i < 10; i++) {
            cout << i + 1 << ". " << nombres[i] << " | Precio: L " << precios[i]
                 << " | Stock: " << stock[i] << " | Vendidas: " << vendidas[i] << endl;
        }
        goto inicio_menu;
    }
    if (opcion_menu == 3) {
        for (i = 0; i < 10; i++) {
            cout << i + 1 << ". " << nombres[i] << " | Stock: " << stock[i] << endl;
        }
        cout << "Numero de producto a reabastecer (1-10): ";
        cin >> producto;
        if (cin.fail() || producto < 1 || producto > 10) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }
        cout << "Cantidad a agregar: ";
        cin >> cantidad;
        if (cin.fail() || cantidad < 1 || cantidad > 10000) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }
        stock[producto - 1] += cantidad;
        cout << "Stock actualizado: " << nombres[producto - 1] << " ahora tiene " << stock[producto - 1] << " unidades." << endl;
        goto inicio_menu;
    }
    // Opcion 1 (compra):
    unidades = 0;
    lineas_carnes = 0;
    sub_verduras = 0;
    sub_carnes = 0;
    sub_licores = 0;
    desc_segundo_carne = 0;
    desc_sixpack = 0;
    sexo = 0;
    tipo_cliente = 0;
        cout << "Bienvenido a Super Market!" << endl;
        cout << "INGRESE SU NOMBRE: ";
        cin.ignore(1000, '\n'); 
        getline(cin, nombre);

        if (nombre.empty()) {
            cout << "ERROR: Debe ingresar un nombre para continuar." << endl;
        }
if (nombre.empty()) goto cancelar;   
while (sexo < 1 || sexo > 3) {
    goto sexo_menu;   // salta el mensaje de error de abajo

    cout << "ERROR: Debe ingresar una opcion valida (1, 2 o 3)." << endl;
    sexo_menu: ;  

    cout << "Seleccione el sexo del cliente: " << endl;
    cout << "1. Masculino" << endl;
    cout << "2. Femenino" << endl;
    cout << "3. Otro" << endl;
    cin >> sexo;
    if (cin.fail() || sexo < 1 || sexo > 3) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
    }
 do
   {
    cout << "Ingrese la edad del cliente: " << endl;
    cin >> edad;
    if (cin.fail() || edad < 15 || edad > 100) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
    if (edad < 15 || edad > 100) { 
    cout << "Ingrese una edad valida (entre 15 y 100): " << endl;
    }
   } while (edad < 15 || edad > 100);
   edad_cliente = edad;   
   while (tipo_cliente < 1 || tipo_cliente > 3) {
        goto tipo_menu;  
        cout << "ERROR: Debe ingresar una opcion valida (1, 2 o 3)." << endl;
        tipo_menu: ;  
        cout << " seleccione el tipo de cliente: " << endl;
        cout <<"1. Regular" << endl;
        cout <<"2. VIP" << endl;    
        cout <<"3. nuevo " << endl;
        cin >> tipo_cliente;
        if (cin.fail() || tipo_cliente < 1 || tipo_cliente > 3) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
    }
    do {  
        cout << "seleccione dia de la semana: " << endl;
        cout <<"1. Lunes" << endl;      
        cout <<"2. Martes" << endl;
        cout <<"3. Miercoles" << endl; 
        cout <<"4. Jueves" << endl;
        cout <<"5. Viernes" << endl;
        cout <<"6. Sabado" << endl;
        cout <<"7. Domingo" << endl;
        cin >> dia_semana;
        if (cin.fail() || dia_semana < 1 || dia_semana > 7) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
        goto dia_ok;   

        cout << "ERROR: Debe ingresar una opcion valida (1, 2, 3, 4, 5, 6, 7)." << endl;
        dia_ok: ; 
    
    }while (dia_semana < 1 || dia_semana > 7);
    do {    
    cout <<" seleccione el tipo de producto que desea comprar: " << endl;
    cout <<"1. verduras" << endl;
    cout <<"2. carnes" << endl;
    cout <<"3. licores " << endl;
    cin >> tipo_producto;
    if (cin.fail() || tipo_producto < 1 || tipo_producto > 3) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
    switch (tipo_producto) {
        case 1:
         do {
            cout << "Usted ha seleccionado verduras." << endl;
            cout << " ingrese tipo de producto que desea comprar: " << endl;    
            cout <<"1. tomate      " << endl;
            cout <<"2. repollo     " << endl;
            cout <<"3. papas       " << endl;
            cin >> tipo_producto;
            if (cin.fail() || tipo_producto < 1 || tipo_producto > 3) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
            k = tipo_producto - 1;   // NUEVO: posicion del producto (0 a 2)
            
                switch (tipo_producto) {
                case 1:
                    cout << "Usted ha seleccionado tomate." << endl;
                    cout << "Precio: L 10.00" << endl;
                    cout << "Ingrese la cantidad que desea comprar: " << endl;
                    cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                    cout << "Total a pagar: L " << cantidad * 10.00 << endl;
                    break;
                case 2:
                    cout << "Usted ha seleccionado repollo." << endl;
                    cout << "Precio: L 15.00" << endl;
                    cout << "Ingrese la cantidad que desea comprar: " << endl;
                    cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                    cout << "Total a pagar: L " << cantidad * 15.00 << endl;
                    break;
                case 3:
                    cout << "Usted ha seleccionado papas." << endl;
                    cout << "Precio: L 12.00" << endl;
                    cout << "Ingrese la cantidad que desea comprar: " << endl;
                    cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                    cout << "Total a pagar: L " << cantidad * 12.00 << endl;
                    break;
                default:
                    cout << "Opción inválida." << endl;
                    break;
                }
                monto = cantidad * precios[k];          
                stock[k] = stock[k] - cantidad;
                vendidas[k] = vendidas[k] + cantidad;
                unidades = unidades + cantidad;
                sub_verduras = sub_verduras + monto;
                cout <<" desea agregar otro producto menu verduras? "<< endl;
                cout <<"1. si "<< endl;
                cout <<"2. no "<< endl;
                cin >> agregar_producto;
                if (cin.fail() || agregar_producto < 1 || agregar_producto > 2) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
    
            }while (agregar_producto == 1);        

            break;

          

        case 2:
            do {
            cout << "Usted ha seleccionado carnes." << endl;
            cout << " ingrese tipo de producto que desea comprar: " << endl;    
            cout <<"1. carne molida         " << endl;
            cout <<"2. carne de cerdo  " << endl;
            cout <<"3. cerdo       " << endl;
            cin >> tipo_producto;
            if (cin.fail() || tipo_producto < 1 || tipo_producto > 3) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
            k = tipo_producto + 2;   // NUEVO: posicion del producto (3 a 5)
            switch (tipo_producto) {    
                case 1:
                cout << "Usted ha seleccionado carne molida." << endl;
                cout << "Precio: L 20.00" << endl;
                cout << "Ingrese la cantidad que desea comprar: " << endl;
                cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                cout << "Total a pagar: L " << cantidad * 20.00 << endl;
                break;
                case 2:
                cout << "Usted ha seleccionado carne de cerdo." << endl;
                cout << "Precio: L 18.00" << endl;
                cout << "Ingrese la cantidad que desea comprar: " << endl;
                cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                cout << "Total a pagar: L " << cantidad * 18.00 << endl;
                break;
                case 3:
                    cout << "Usted ha seleccionado  carne de cerdo." << endl;
                    cout << "Precio: L 22.00" << endl;
                    cout << "Ingrese la cantidad que desea comprar: " << endl;
                    cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                    cout << "Total a pagar: L " << cantidad * 22.00 << endl;
                    break;
                default:
                    cout << "Opción inválida." << endl;
                    break;
                }
                monto = cantidad * precios[k];
                stock[k] = stock[k] - cantidad;
                vendidas[k] = vendidas[k] + cantidad;
                unidades = unidades + cantidad;
                sub_carnes = sub_carnes + monto;
                lineas_carnes = lineas_carnes + 1;
                if (lineas_carnes == 2) desc_segundo_carne = desc_segundo_carne + monto * 0.50;   // segundo producto de carnes: 50%
                cout <<" desea agregar otro producto menu carnes? "<< endl;
                cout <<"1. si "<< endl;
                cout <<"2. no "<< endl;
                cin >> agregar_producto;
                if (cin.fail() || agregar_producto < 1 || agregar_producto > 2) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
            
            }while (agregar_producto == 1);
            
            break;


        case 3:
                do {
                cout << "Usted ha seleccionado licores." << endl;
                cout << "verifique la edad del cliente: " << endl;
                cin >> edad;
                if (cin.fail() || edad < 15 || edad > 100) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                if (edad < 18) { cout << "Lo siento, no puede comprar licores a menores de 18 anios." << endl; goto cancelar; }   // NUEVO
                    if (edad <= 18) {
                    cout << "Lo siento, no puede comprar licores." << endl;
                        return 0;
                    } else {

                    cout << "Ingrese el tipo de licor que desea comprar: " << endl;    
                    cout <<"1. cerveza nacional       " << endl;
                    cout <<"2. cerveza importada   " << endl;
                    cout <<"3. vino  " << endl;
                    cout <<"4. vodka  " << endl;                    
                    cin >> tipo_producto;
                    if (cin.fail() || tipo_producto < 1 || tipo_producto > 4) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    k = tipo_producto + 5;   //
                    switch (tipo_producto) {
                        case 1:
                            cout << "Usted ha seleccionado cerveza nacional." << endl;
                            cout << "Precio: L 50.00" << endl;
                            cout << "Ingrese la cantidad que desea comprar: " << endl;
                            cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                            cout << "Total a pagar: L " << cantidad * 50.00 << endl;
                            break;
                        case 2:
                            cout << "Usted ha seleccionado cerveza importada." << endl;
                            cout << "Precio: L 80.00" << endl;
                            cout << "Ingrese la cantidad que desea comprar: " << endl;
                            cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                            cout << "Total a pagar: L " << cantidad * 80.00 << endl;
                            break;
                        case 3:
                            cout << "Usted ha seleccionado vino." << endl;
                            cout << "Precio: L 200.00" << endl;
                            cout << "Ingrese la cantidad que desea comprar: " << endl;
                            cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                            cout << "Total a pagar: L " << cantidad * 200.00 << endl;       
                            break;
                        case 4:
                            cout << "Usted ha seleccionado vodka." << endl;
                            cout << "Precio: L 100.00" << endl;                                cout << "Ingrese la cantidad que desea comprar: " << endl;                                cin >> cantidad;
                    if (cin.fail() || cantidad < 1) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    if (cantidad > stock[k]) { cout << "ERROR: La cantidad (" << cantidad << ") es mayor al inventario disponible (" << stock[k] << ")." << endl; goto cancelar; }   // NUEVO
                            cout << "Total a pagar: L " << cantidad * 100.00 << endl;
                            break;  
                        default:
                            cout << "Opción inválida." << endl;
                            break;
                        } 
                monto = cantidad * precios[k];
                stock[k] = stock[k] - cantidad;
                vendidas[k] = vendidas[k] + cantidad;
                unidades = unidades + cantidad;
                sub_licores = sub_licores + monto;
                if (k == 6 || k == 7) desc_sixpack = desc_sixpack + (cantidad / 6) * 10;   // six-pack de cerveza: L.10
                        cout <<" desea agregar otro producto menu licores? "<< endl;
                        cout <<"1. si "<< endl;
                        cout <<"2. no "<< endl;
                        cin >> agregar_producto; 
                if (cin.fail() || agregar_producto < 1 || agregar_producto > 2) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO
                    }
                        
                    
                }while (agregar_producto == 1);

            break;
        default:
            cout << "Opción inválida." << endl;
            break;

    }    
        
        cout <<" desea agregar otro producto menu principal? "<< endl;
        cout <<"1. si "<< endl;
        cout <<"2. no "<< endl;
        cin >> agregar_producto; 
                if (cin.fail() || agregar_producto < 1 || agregar_producto > 2) { cin.clear(); cin.ignore(1000, '\n'); cout << "ERROR: Dato incorrecto." << endl; goto cancelar; }   // NUEVO

    }while (agregar_producto == 1);
    //DESCUENTOS 
    subtotal = sub_verduras + sub_carnes + sub_licores;
    pv = 0; pc = 0; pl = 0;
    if (tipo_cliente == 2) {            // Estrella: 4% en carnes y verduras
        pv = 0.04;
        pc = 0.04;
    } else if (tipo_cliente == 1) {     // Regular: 3% en carnes
        pc = 0.03;
    } else {                            // Nuevo: 2% en licores
        pl = 0.02;
    }
    pdia = 0;
    if (dia_semana == 1 || dia_semana == 3) pdia = 0.03;           // Lunes o miercoles: 3% adicional
    pedad = 0;
    if (dia_semana == 5 && edad_cliente >= 65) pedad = 0.10;       // Viernes y 65+ anios: 10% adicional
    desc_cliente = sub_verduras * pv + sub_carnes * pc + sub_licores * pl;
    desc_dia = subtotal * pdia;
    desc_edad = subtotal * pedad;
    d_verd = sub_verduras * (pv + pdia + pedad);
    d_carn = sub_carnes * (pc + pdia + pedad) + desc_segundo_carne;   // incluye 50% al segundo producto
    d_lic = sub_licores * (pl + pdia + pedad) + desc_sixpack;         // incluye six-pack
    descuentos = d_verd + d_carn + d_lic;

    // IMPUESTOS (ISV 15%, licores 18%)
    impuestos = (sub_verduras - d_verd + sub_carnes - d_carn) * 0.15
              + (sub_licores - d_lic) * 0.18;
    total = subtotal - descuentos + impuestos;
    dolares = total / 24.5;             // 1 USD = 24.5 Lempiras

    cout << "\n=== FACTURA ===" << endl;
    cout << "Cliente: " << nombre << endl;
    cout << "Unidades compradas: " << unidades << endl;
    cout << "Subtotal: L " << subtotal << endl;
    cout << "--- Descuentos ---" << endl;
    cout << "Por tipo de cliente: L " << desc_cliente << endl;
    cout << "Lunes/Miercoles (3%): L " << desc_dia << endl;
    cout << "Viernes tercera edad (10%): L " << desc_edad << endl;
    cout << "Segundo producto de carnes (50%): L " << desc_segundo_carne << endl;
    cout << "Six-pack de cerveza: L " << desc_sixpack << endl;
    cout << "Total descuentos: L " << descuentos << endl;
    cout << "Impuestos (ISV): L " << impuestos << endl;
    cout << "TOTAL A PAGAR: L " << total << endl;
    cout << "Total en Dolares: $ " << dolares << endl;
    cout << "=============================" << endl;
    goto inicio_menu;
    cancelar:
    for (i = 0; i < 10; i++) {          // se devuelve el inventario como estaba
        stock[i] = resp_stock[i];
        vendidas[i] = resp_vend[i];
    }
    cout << "Regresando al menu principal..." << endl;
    goto inicio_menu;
    return 0;
}
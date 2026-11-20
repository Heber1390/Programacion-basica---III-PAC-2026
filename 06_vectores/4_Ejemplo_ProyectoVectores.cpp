//Ejemplo para proyecto II Parcial 
 

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cmath>            //Nos permite trabajar mejor con las variables de tipo numericos
//#include <ctime>            //Nos permite usar la fecha del sistema 
#include <string>           //Nos permite trabajar mejor con las variables de tipo texto                                  
using namespace std;

//Esta variable la dejamos afuera del main para poder usar funciones
string nombre[100];
int x=0;

int main(int argc, char *argv[]) {
	
	//Nombre de la funcion para saber si un cliente existe o no.
	bool NoExiste(string nom);
	
	//Inializaci�n de Variables
	int f=0; 
	int codigo_c[100], proc_a[100], proc_b[100], proc_c[100], cant[100], dis[100];
	int menu, salir, area[100], r_servicio[100], n_fac[100], proc[100];
	int pvc=100, grifo=10, lavabo=5, cister=3, macetas=10, abono=50, lampara=8;
	int serrucho=15, cepillo=10, clavo=30;
	int b, r_busc, l, r2, dia, prec_p, puntos_g, servicio, i;
	int menu_cliente, r, forma_busc, busc_cod; 
	int edad[100], genero[100], cuenta[100], puntos[100];
	float p_total[100], desc[100], sub_total[100];
	float desc1, desc2, desc3, desc4;
	string busc_nom;
	string apellido[100];
	
	do{
		
		//Codigo para volver las letras y el fondo de color 
	    system("Color 0b");
	
		//Muestra un menu principal al usuario 	
		cout<<" "<<endl;
	    cout<<"         --------------------------------------"<<endl;
	    cout<<"         |             BIENVENIDO               |"<<endl;
		cout<<"         |                 a                    |"<<endl;
	    cout<<"         |      Ferreteter�a CONSTRU-PUMA       |"<<endl;
	    cout<<"         --------------------------------------"<<endl;
	    cout<<" "<<endl;
	    cout<<"                 ***MENU PRINCIPAL***"<<endl;
		cout<<" "<<endl;
	    cout<<"                1) Sistema de Cliente"<<endl;
	    cout<<"                2) Sistema de Facturaci�n"<<endl;
		cout<<"                3) Inventario"<<endl;
	    cout<<"                4) Salir"<<endl;
	    cout<<" "<<endl;
	    cout<<" "<<endl;
	
	    //Solicita al usuario ingresar un valor del menu anterios 
	    cout<<"Ingrese un Valor: ";
	
	    //Aqui se guardara lo que el usuario ingrese
		cin>>menu;
	
	    //Con el ciclo while validaremos que el usuario no ingrese un valor errado.
			while (menu < 1 or menu > 4 or menu == -0){
				cout<<" "<<endl;
			    cout<<"--------------------------------"<<endl;
			    cout<<"|        ERROR             |"<<endl; 
			    cout<<"|El valor ingresada no es validad|"<<endl;
			    cout<<"--------------------------------"<<endl;
			    cout<<" "<<endl;
				
			    //Se muestra un mensaje solicitando al usuario ingresar otro valor
			    cout<<"Ingrese otro Valor: ";
				
			    //Aqui se guardara lo que el usuario ingrese
			    cin>>menu;
		    }
			
		switch (menu) {
				
				case 1:
					
					//Con este ciclo do while controlaremos que el usuario este en el menu_cliente
					// o no salga de este menu.
					do{
						
						//Comando para limpiar pantalla
						system ("cls");
						
						//Muestra un menu para creacion, modificacion y busqueda de clientes.
						cout<<" "<<endl;
						cout<<"                 -------------------------------"<<endl;
						cout<<"                 |       SISTEMA DE CLIENTES     |"<<endl;
						cout<<"                 -------------------------------"<<endl;
						cout<<" "<<endl;
						
						cout<<"                     1) Ingresar un Cliente"<<endl;
						cout<<"                     2) Buscar un Cliente"<<endl;
						cout<<"                     3) Mostar Lista de Clientes"<<endl;
						cout<<"                     4) Salir"<<endl;
						cout<<" "<<endl;
						cout<<" "<<endl;
						//Mostrara un mensaje al usuario para que ingrese un valor
						cout<<"                     Ingrese un Valor: ";
						
						//aqui se guardara el valor ingresado por el usuario
						cin>>menu_cliente;
						
						//Con este ciclo while validaremos que el usuario no ingrese 
						//un valor errado
						while (menu_cliente < 1 or menu_cliente > 4 or menu_cliente == -0){
							cout<<"                ----------------------------------"<<endl;
							cout<<"                |           ERROR            |"<<endl; 
							cout<<"                | El valor ingresada no es validad |"<<endl;
							cout<<"                ----------------------------------"<<endl;
							cout<<" "<<endl;
							
							//Solicitaremos al usuario que ingrese otro valor
							cout<<"                Ingrese otro Valor: ";
							cin>>menu_cliente;
						}
						
						switch (menu_cliente){
							
							//En el pimer caso del menu_cliente se ingresaran los datos del cliente.
						case 1:
							
							//Con este ciclo controlaremos si se sigue ingresando cliente si o no.
							do{
								
								//Limpiaremos todo lo que hay en pantalla 
								system ("cls");
								
								cout<<"            ----------------------------"<<endl;
								cout<<"            |  SISTEMA DE CLIENTE  |"<<endl;
								cout<<"            ----------------------------"<<endl;
								cout<<" "<<endl;
								
								//Aqui es donde se ingresaran los datos del cliente
								cout<<"-----------------------------------------------------"<<endl;
								cout<<"         INGRESE DATOS DEL CLIENTE N� "<<(x+1)<<"  "<<endl;
								
								cout<<" "<<endl;
								cout<<" "<<endl;
								
								//Guardaremos codigo del cliente en la variable codigo_c
								//y utilizaremos en contador x para ir guardando un valor.
								codigo_c[x] = (x+1);
								
								//Usaremos una condicion para hacer que el programa
								//se mire mas estetico al mostrar (0) o (00)
								if (codigo_c[x] >= 100){
									
									cout<<"  Codigo del Cliente: "<<codigo_c[x]<<endl;
									
								}else if (codigo_c[x] > 9){
									
									cout<<"  Codigo del Cliente: 0"<<codigo_c[x]<<endl;
									
								}else{
									
									cout<<"  Codigo del Cliente: 00"<<codigo_c[x]<<endl;
									
								}
								
								cout<<"              Nombre: ";
								cin>>nombre[x];
								cout<<"            Apellido: ";
								cin>>apellido[x];
								cout<<"                Edad: ";
								cin>>edad[x];
								
								//con este ciclo while controlaremos que la edad 
								//ingresada se mayor de o igual 18 hasta 120 a�o
								while (edad[x] < 18 or edad[x] > 120){
									cout<<" "<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<"         |           ERROR            |"<<endl; 
									cout<<"         | La edad ingresada no es validad  |"<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<" "<<endl;
									
									//Se mostrara un mensage de que vuelva a ingresar otra edad
									cout<<"   Ingrese otra Edad: ";
									cin>>edad[x];
								}
								
								cout<<" "<<endl;
								cout<<"     Genero del cliente "<<endl;
								cout<<" "<<endl;
								cout<<"         1 <- Hombre"<<endl;
								cout<<"         2 <- Mujer"<<endl;
								cout<<" "<<endl;
								cout<<"              Genero: ";
								cin>>genero[x];
								
								//con este ciclo el usuario no podra ingresar un valor erroneo
								while (genero[x] < 1 or genero[x] > 2 or genero[x] == -0){
									cout<<" "<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<"         |           ERROR            |"<<endl; 
									cout<<"         | El valor ingresada no es validad |"<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"  Ingrese otro valor: ";
									cin>>genero[x];
									
								}
								
								cout<<" "<<endl;
								cout<<"        Tipo de cuenta "<<endl;
								cout<<" "<<endl;
								cout<<"         1 <- Premium"<<endl;
								cout<<"         2 <- Platinum"<<endl;
								cout<<" "<<endl;
								cout<<"              Cuenta: ";
								cin>>cuenta[x];
								
								//con este ciclo el usuario no podra ingresar un valor erroneo
								while (cuenta[x] < 1 or cuenta[x] > 2 or cuenta[x] == -0){
									cout<<" "<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<"         |           ERROR            |"<<endl; 
									cout<<"         | El valor ingresada no es validad |"<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"  Ingrese otro valor: ";
									cin>>cuenta[x];
								}
								
								//Con esta condicion asignaremos los puntos a cada cuenta a la
								//premium 100 puntos y platinum 200 puntos.
								if (cuenta[x] == 1){
									
									puntos[x] = 100;
									
								}else{
									
									puntos[x] = 200;
									
								}
								
								//Imprimiremos los puntos del cliente
								cout<<" "<<endl;
								cout<<"        Puntos Obtenidos "<<endl;
								cout<<" "<<endl;
								cout<<"              Puntos: "<<puntos[x]<<endl;
								
								//Pausa el programa
								cout<<" "<<endl;
								system("pause");
								
								//Limpia la pantalla	    
								system ("cls");
								
								//Desde la line 208 hasta 216 preguntara al usuario si se 
								//desea seguir ingresando clientes.
								cout<<" "<<endl;
								cout<<"            ----------------------------"<<endl;
								cout<<"            |  SISTEMA DE CLIENTE  |"<<endl;
								cout<<"            ----------------------------"<<endl;
								cout<<" "<<endl;
								cout<<"          Desea seguir ingresando un cliente?"<<endl;
								cout<<" "<<endl;
								cout<<"                  1) SI"<<endl;
								cout<<"                  2) NO "<<endl;
								cout<<" "<<endl;
								cout<<"   Ingrese un valor: ";
								
								//Aqui se guardara la respuesta del usuario
								cin>>r;
								
								//con este ciclo el usuario no podra ingresar un valor erroneo
								while (r < 1 or r >2 or r == -0){
									cout<<" "<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<"         |           ERROR            |"<<endl; 
									cout<<"         | El valor ingresada no es validad |"<<endl;
									cout<<"         ----------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"  Ingrese otro valor: ";
									
									//Aqui se guardara la respuesta del usuario
									cin>>r;
								}
								
								//Iremos sumandole mas 1 al contador x el cual controla los clientes ingresados
								x++;
								
							}while(r != 2);	
							
							break;
							
						case 2:
							
							//Comando para limpiar pantalla
							system ("cls");
							
							//Muestra un menu para creacion, modificacion y busqueda de clientes.
							cout<<" "<<endl;
							cout<<"                 -------------------------------"<<endl;
							cout<<"                 |      BUSQUEDA DE CLIENTES     |"<<endl;
							cout<<"                 -------------------------------"<<endl;
							cout<<" "<<endl;
							
							//Esta condicion impide que busquemos un cliente ya que no hay ninguno.
							if (x == 0){
								cout<<" "<<endl;
								cout<<"               ----------------------------------"<<endl;
								cout<<"               |           ERROR            |"<<endl; 
								cout<<"               |  No hay clientes en el sistema   |"<<endl;
								cout<<"               ----------------------------------"<<endl;
								cout<<" "<<endl;
								
								//Comando que para el programa
								system("pause");
								break;
							}
							
							cout<<"                       Forma de Busquedad "<<endl;
							cout<<" "<<endl;
							cout<<"                     1 <- Codigo del Cliente"<<endl;
							cout<<"                     2 <- Nombre del Cliente"<<endl;
							cout<<" "<<endl;
							cout<<"             Ingrese un valor: ";
							
							//Valor donde se guardara la respuesta del usuario.
							cin>>forma_busc;
							
							//con este ciclo el usuario no podra ingresar un valor erroneo
							while (forma_busc < 1 or forma_busc > 2 or forma_busc == -0){
								cout<<" "<<endl;
								cout<<"               ----------------------------------"<<endl;
								cout<<"               |           ERROR            |"<<endl; 
								cout<<"               | El valor ingresada no es validad |"<<endl;
								cout<<"               ----------------------------------"<<endl;
								cout<<" "<<endl;
								cout<<"           Ingrese otro valor: ";
								
								//Valor donde se guardara la respuesta del usuario.
								cin>>forma_busc;
							}
							
							cout<<" "<<endl;
							cout<<" "<<endl;
							
							//con esta condicion decidiremos si buscamos al cliente por el
							//nombre cliente o el codigo del cliente
							if (forma_busc == 1){
								
								cout<<"   Ingrese Codigo del Cliente: ";
								cin>>busc_cod;
								
							}else{
								
								cout<<"  Ingrese Nombre del Cliente : ";
								cin>>busc_nom;
								
							}
							
							//Comando para limpiar pantalla
							system("cls");
							
							//Muestra un menu para creacion, modificacion y busqueda de clientes.
							cout<<" "<<endl;
							cout<<"                 -------------------------------"<<endl;
							cout<<"                 |        Datos del Cliente      |"<<endl;
							cout<<"                 -------------------------------"<<endl;
							cout<<" "<<endl;
							
							//con este ciclo imprimiremos o no toda la informacion del cliente
							for (b=0; b < x; b++ ){
								
								//con esta condicional verificaremos si busc_cod es igual al arreglo codigo_c
								if (forma_busc == 1 and busc_cod == codigo_c[b]){
									
									//Dejamos en uno la variablre para saver que encontro el cliente
									r_busc = 1;
									
									cout<<" "<<endl;
									cout<<"           Codigo Cliente: "<<codigo_c[b]<<endl;
									cout<<"           Nombre Cliente: "<<nombre[b]<<" "<<apellido[b]<<endl;
									cout<<"                     Edad: "<<edad[b]<<endl;
									
									//Con esta condicion imprimiremos el genero del cliente
									if (genero[b] == 1){
										cout<<"                   Genero: Hombre"<<endl;
									}else{
										cout<<"                   Genero: Mujer"<<endl;
									}
									
									//Con esta condicion imprimiremos en tipo de cuenta del cliente
									if (cuenta[b] == 1){
										cout<<"                   Cuenta: Premium"<<endl;
									}else{
										cout<<"                   Cuenta: Platinum"<<endl;
									}
									
									cout<<"                   Puntos: "<<puntos[b]<<endl;
									break;
									
									//con esta condicional verificaremos si busc_nom es igual al arreglo nombre	
								}else if (forma_busc == 2 and busc_nom == nombre[b]){
									
									//Dejamos en uno la variablre para saver que encontro el cliente
									r_busc = 1;
									
									cout<<" "<<endl;
									cout<<"           Codigo Cliente: "<<codigo_c[b]<<endl;
									cout<<"           Nombre Cliente: "<<nombre[b]<<" "<<apellido[b]<<endl;
									cout<<"                     Edad: "<<edad[b]<<endl;
									
									//Con esta condicion imprimiremos el genero del cliente
									if (genero[b] == 1){
										cout<<"                   Genero: Hombre"<<endl;
									}else{
										cout<<"                   Genero: Mujer"<<endl;
									}
									
									//Con esta condicion imprimiremos en tipo de cuenta del cliente
									if (cuenta[b] == 1){
										cout<<"                   Cuenta: Premium"<<endl;
									}else{
										cout<<"                   Cuenta: Platinum"<<endl;
									}
									
									cout<<"                   Puntos: "<<puntos[b]<<endl;
									break;
								}else{
									
									//Dejamos en cero la variablre para saver que no encontro nada
									r_busc = 0;
									
								}
								
								//Con esta condicion se sabra si no existe el cliente.
								if (forma_busc == 1 and r_busc == 0){
									cout<<" "<<endl;
									cout<<"          El codigo del cliente ("<<busc_cod<<") no esta ingresado"<<endl;
									cout<<" "<<endl;
								}else if (forma_busc == 2 and r_busc == 0){
									cout<<" "<<endl;
									cout<<"          El nombre del cliente ("<<busc_nom<<") no esta ingresado"<<endl;
									cout<<" "<<endl;
								}
								
							}
							system("pause");
							break;
							
						case 3:
							
							//Codigo que nos permite limpiar dolo lo que hay en la pantalla.
							system ("cls");
							cout<<" "<<endl;
							cout<<"            -----------------------------"<<endl;
							cout<<"            |   LISTA DE CLIENTES   |"<<endl;
							cout<<"            -----------------------------"<<endl;
							cout<<" "<<endl;
							
							//Condicion para saver si hay clientes ingresados en el sistema
							if (x == 0){
								cout<<" "<<endl;
								cout<<"        -------------------------------------"<<endl;
								cout<<"        |            ERROR              |"<<endl; 
								cout<<"        | No hay ningun cliente en el sistema |"<<endl;
								cout<<"        -------------------------------------"<<endl;
								cout<<" "<<endl;
								
								//Comando para pausar el programa
								system("pause");
								
								//Comando para finalizar case
								break;
							}else{
								
								cout<<"              ------------------------"<<endl;
								cout<<"              | Codigo |     Nombre    |"<<endl;
								cout<<"              ------------------------"<<endl;
								
								//Con este ciclo for imprimiremos todos los clientes
								for (l=0; l<x; l++){
									
									if (codigo_c[l] >= 100){
										cout<<"                 "<<codigo_c[l];
									}else if (codigo_c[l] > 9 and codigo_c[l] <100){
										cout<<"                  0"<<codigo_c[l];
									}else{
										cout<<"                  00"<<codigo_c[l];
									}
									
									cout<<"       "<<nombre[l]<<endl;
									cout<<"              ------------------------"<<endl;
								}
								
							}
							cout<<" "<<endl; 	
							system("pause");
							break;
							
						}
					}while (menu_cliente != 4);
					
				break;
				
		        case 2:
					
					do{
						
						//Limpia la pantalla
						system("cls");
						
						cout<<"          -----------------------------------------"<<endl;
						cout<<"          |      SISTEMA DE FACTURACION       |"<<endl;
						cout<<"          -----------------------------------------"<<endl;
						cout<<" "<<endl;
						cout<<" "<<endl;
						
							//Condicion que muestra un error si no hay ningun clinte ingresado
						    if (x == 0){
								cout<<" "<<endl;
								cout<<"            -------------------------------------"<<endl;
								cout<<"            |            ERROR              |"<<endl; 
								cout<<"            | No hay ningun cliente en el sistema |"<<endl;
								cout<<"            -------------------------------------"<<endl;
								cout<<" "<<endl;
							
							    //Pausa el sistema para apresiar el mensaje atenrior. 
							    system("pause");
							    break;
						    }
							
						//mostraremos una tabla para que el usuario elija un dia de la semana
						cout<<"                  Ingrese D�a de la Semana   "<<endl;
						cout<<" "<<endl;
						cout<<"                    1). LUNES"<<endl;
						cout<<"                    2). MARTES"<<endl;
						cout<<"                    3). MIERCOLES"<<endl;
						cout<<"                    4). JUEVES"<<endl;
						cout<<"                    5). VIERNES"<<endl;
						cout<<"                    6). SABADO"<<endl;
						cout<<"                    7). DOMINGO"<<endl;
						cout<<" "<<endl;
						cout<<"          D�a de la semana: ";
							
						//En el arreglo "dia" se guardara el dia de la semana
						cin>>dia;
						
							//Con este ciclo se evitara que el usuario ingrese un d�a de la 
						    //semana que no est� en la tabla (1 al 7).
						    while (dia < 1 or dia > 7 or dia == -0 ){
								cout<<" "<<endl;
								cout<<" "<<endl;
								cout<<"           -------------------------------------"<<endl;
								cout<<"           |            ERROR              |"<<endl; 
								cout<<"           |   El valor ingresado no es valido   |"<<endl;
								cout<<"           -------------------------------------"<<endl;
								cout<<" "<<endl;
							
							    //Se volvera a pedir un valor valido del dia de la semana
							    cout<<"        Ingrese otro Valor: ";	
							    cin>>dia;
						    }
							
						//Limpia la pantalla
						system("cls");
							
						cout<<"          -----------------------------------------"<<endl;
						cout<<"          |      SISTEMA DE FACTURACION       |"<<endl;
						cout<<"          -----------------------------------------"<<endl;
						cout<<" "<<endl;
						cout<<" "<<endl;
						
							//Con este ciclo for escribiremos el nombre del cliente, en caso
						    //que no se encuentre en el arreglo nomb[15] nos dira que no lo encontro.
						    for (i=0; i < x; i++ ){
								cout<<"      Nombre del Cliente: ";
							    cin>>busc_nom;
							
							    //Con este ciclo while y la funcion de NoExiste nos 
							    //indicara si el cliente existe o no.
							    while (NoExiste(busc_nom)){
									cout<<" "<<endl;
								    cout<<"  El nombre del cliente ["<<busc_nom<<"] no existe"<<endl;
								    cout<<" "<<endl;
								    cout<<"     Ingrese otro Nombre: ";
								    cin>>busc_nom;
							    }
								
								break;
						    }
							
						//Limpia la pantalla
						system("cls");
							
						cout<<"          -----------------------------------------"<<endl;
						cout<<"          |      SISTEMA DE FACTURACION       |"<<endl;
						cout<<"          -----------------------------------------"<<endl;
						cout<<" "<<endl;
						cout<<" "<<endl;
						cout<<"                   AREA "<<endl;
						cout<<" "<<endl;
						cout<<"                 1) Fontaneria"<<endl;
						cout<<"                 2) Jardineria"<<endl;
						cout<<"                 3) Carpinteria"<<endl;
						cout<<" "<<endl;
						cout<<"               Opcion: ";
						//Aqui se guardara el valor ingresado
						cin>>area[f];
						
						    //con este ciclo el usuario no podra ingresar un valor erroneo
							while (area[f] < 1 or area[f] > 3 or area[f] == -0){
								cout<<" "<<endl;
								cout<<" "<<endl;
								cout<<"           -------------------------------------"<<endl;
								cout<<"           |            ERROR              |"<<endl; 
								cout<<"           |   El valor ingresado no es valido   |"<<endl;
								cout<<"           -------------------------------------"<<endl;
								cout<<" "<<endl;
								cout<<"  Ingrese otra Opcion: ";
								//Aqui se guardara el valor ingresado
								cin>>area[f];
							}
							
						//Limpia la pantalla
						system("cls");
						
						cout<<"          -----------------------------------------"<<endl;
						cout<<"          |      SISTEMA DE FACTURACION       |"<<endl;
						cout<<"          -----------------------------------------"<<endl;
						cout<<" "<<endl;
						cout<<" "<<endl;
						cout<<"                 PRODUCTO "<<endl;
						cout<<" "<<endl;
							
						    //Con esta condicion selecionaremos el producto
						    if (area[f] == 1){
								
								cout<<"                 1) Tubos pvc x Mts"<<endl;
								cout<<"                 2) Grifos"<<endl;
								cout<<"                 3) Lavabos"<<endl;
								cout<<" "<<endl;
								cout<<"  Seleccione un producto: ";
								cin>>proc_a[f];
								
									//con este ciclo el usuario no podra ingresar un valor erroneo
									while (proc_a[f] < 1 or proc_a[f] > 3 or proc_a[f] == -0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |   El valor ingresado no es valido   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"  Seleccione un producto: ";
										cin>>proc_a[f];
										
									}
									
									//Condicion para cuando nos quedamos sin producto
									if (proc_a[f] == 1 and pvc == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_a[f] == 2 and grifo == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_a[f] == 3 and lavabo == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}
								
							}else if (area[f] == 2){
								
								cout<<"                 1) Cisternas"<<endl;
								cout<<"                 2) Macetas"<<endl;
								cout<<"                 3) Abono x Libra"<<endl;
								cout<<"                 4) Lamparas Solares"<<endl;
								cout<<" "<<endl;
								cout<<"  Seleccione un producto: ";
								cin>>proc_b[f];
								
								    //con este ciclo el usuario no podra ingresar un valor erroneo
									while (proc_b[f] < 1 or proc_b[f] > 4 or proc_b[f] == -0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |   El valor ingresado no es valido   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"  Seleccione un producto: ";
										cin>>proc_b[f];
										
									}
									
									//Condicion para cuando nos quedamos sin producto
									if (proc_b[f] == 1 and cister == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_b[f] == 2 and macetas == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_b[f] == 3 and abono == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_b[f] == 4 and lampara == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
									}
								
							}else{
								
								cout<<"                 1) Serruchos"<<endl;
								cout<<"                 2) Cepillos para madera"<<endl;
								cout<<"                 3) Clavos x Libra"<<endl;
								cout<<" "<<endl;
								cout<<"  Seleccione un producto: ";
								cin>>proc_c[f];
								
								    //con este ciclo el usuario no podra ingresar un valor erroneo
									while (proc_c[f] < 1 or proc_c[f] > 3 or proc_c[f] == -0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |   El valor ingresado no es valido   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"  Seleccione un producto: ";
										cin>>proc_c[f];
										
									}
									
									//Condicion para cuando nos quedamos sin producto
									if (proc_c[f] == 1 and serrucho == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_c[f] == 2 and cepillo == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}else if (proc_c[f] == 3 and clavo == 0){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           |    Ya no hay mas de este producto   |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										
										//codigo para pausar el programa
										system("pasuse");
										
										break;
										
									}
								
							}
							
						cout<<" "<<endl;
						cout<<"                Cantidad: ";
						cin>>cant[f];
							
							//Con esta condicion preguntaremos la cantidad dependiendo del producto.
							if (area[f] == 1 and proc_a[f] == 1){
								
								//con este ciclo el usuario no podra ingresar un valor erroneo
								while(cant[f] > pvc or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								pvc = (pvc - cant[f]);
								prec_p = 50;
								puntos_g = ( 1 * cant[f]);
								proc[f] = 1;
								
							}else if (area[f] == 1 and proc_a[f] == 2){
								
								//con este ciclo el usuario no podra ingresar un valor erroneo
								while(cant[f] > grifo or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								grifo = (grifo - cant[f]);
								prec_p = 200;
								puntos_g = (20 * cant[f]);
								proc[f] = 2;
								
							}else if (area[f] == 1 and proc_a[f] == 3){
								
								while(cant[f] > lavabo or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								lavabo = (lavabo - cant[f]);
								prec_p = 700;
								puntos_g = (10 * cant[f]);
								proc[f] = 3;
								
							}else if (area[f] == 2 and proc_b[f] == 1){
								
								while(cant[f] > cister or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
							    }
								
								//Iremos descontando las unidades en los contadores 
								cister = (cister - cant[f]);
								prec_p = 2000;
								puntos_g = (20 * cant[f]);
								proc[f] = 4;
								
							}else if (area[f] == 2 and proc_b[f] == 2){
								
								while(cant[f] > macetas or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								macetas = (macetas - cant[f]);
								prec_p = 100;
								puntos_g = (10 * cant[f]);
								proc[f] = 5;
								
							}else if (area[f] == 2 and proc_b[f] == 3){
								
								while(cant[f] > abono or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								abono = (abono - cant[f]);
								prec_p = 50;
								puntos_g = (1 * cant[f]);
								proc[f] = 6;
								
							}else if (area[f] == 2 and proc_b[f] == 4){
								
								while(cant[f] > lampara or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								lampara = (lampara - cant[f]);
								prec_p = 300;
								puntos_g = (20 * cant[f]);
								proc[f] = 7;
								
							}else if (area[f] == 3 and proc_c[f] == 1){
								
								while(cant[f] > serrucho or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								serrucho = (serrucho - cant[f]);
								prec_p = 500;
								puntos_g = (20 * cant[f]);
								proc[f] = 8;
								
							}else if (area[f] == 3 and proc_c[f] == 2){
								
								while(cant[f] > cepillo or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								cepillo = (cepillo - cant[f]);
								prec_p = 200;
								puntos_g = (10 * cant[f]);
								proc[f] = 9;
								
							}else{
								
								while(cant[f] > clavo or cant[f] < 1 or cant[f] == -0){
									cout<<" "<<endl;
									cout<<" "<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<"           |           ERROR               |"<<endl; 
									cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									cout<<"           -------------------------------------"<<endl;
									cout<<" "<<endl;
									cout<<"   Ingrese otra Cantidad: ";
									cin>>cant[f];
								}
								
								//Iremos descontando las unidades en los contadores 
								clavo = (clavo - cant[f]);
								prec_p = 10;
								puntos_g = (2 * cant[f]);
								proc[f] = 10;
								
							}
							
						//Limpia la pantalla
						system("cls");
							
						cout<<"          -----------------------------------------"<<endl;
						cout<<"          |      SISTEMA DE FACTURACION       |"<<endl;
						cout<<"          -----------------------------------------"<<endl;
						cout<<" "<<endl;
						cout<<" "<<endl;
						cout<<"                    Cargos Adicionales "<<endl;
						cout<<" "<<endl;
						cout<<"       ----------------------------------------------"<<endl;
						cout<<"       |        Servicio      | Valor x KM |     Km   |"<<endl;
						cout<<"       ----------------------------------------------"<<endl;
						
							if (area[f] == 1 and proc_a[f] == 1 and cant[f] >= 5 ){
								
								cout<<"         Transporte en Camion |   L. 50    |     ";
								cin>>dis[f];
								
									while (dis[f] < 1 or dis[f] > 5 or dis[f] == -0){
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |            ERROR              |"<<endl; 
										cout<<"           | La cantidad ingresado no es valida  |"<<endl;
										cout<<"           |        solo puede maximo 5 Km.      |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"  Ingrese otra distancia: ";
										cin>>dis[f];
								    }
								
								cout<<" "<<endl;
								cout<<"   Desea el servicio  1. para SI O 2. para No"<<endl;
								cout<<" "<<endl;	
								cout<<"   Opcion: ";
								cin>>r_servicio[f];
								
									while(r_servicio[f] < 1 or r_servicio[f] > 2){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |           ERROR               |"<<endl; 
										cout<<"           | La valor ingresado no es valida     |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"   Opcion: ";
										cin>>r_servicio[f];
									}
									
								servicio = 1;
								
							}else if (area[f] == 2){
								cout<<"          Transporte en Moto  |   L. 20    |     ";
								cin>>dis[f];
								
									while (dis[f] < 1 or dis[f] > 10 or dis[f] == -0){
										cout<<" "<<endl;
									    cout<<"           -------------------------------------"<<endl;
									    cout<<"           |            ERROR              |"<<endl; 
									    cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									    cout<<"           |        solo puede maximo 10 Km.     |"<<endl;
									    cout<<"           -------------------------------------"<<endl;
									    cout<<" "<<endl;
									    cout<<"  Ingrese otra distancia: ";
									    cin>>dis[f];
								    }
									
								cout<<" "<<endl;
								cout<<"   Desea el servicio  1. para SI O 2. para No"<<endl;
								cout<<" "<<endl;	
								cout<<"   Opcion: ";
								cin>>r_servicio[f];
									
									while(r_servicio[f] < 1 or r_servicio[f] > 2){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |           ERROR               |"<<endl; 
										cout<<"           | La valor ingresado no es valida     |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"   Opcion: ";
										cin>>r_servicio[f];
									}
									
									servicio = 2;
									
							}else if (area[f] == 3 and cuenta[i] == 2){
								
								cout<<"        Transporte en Pick-up |   L. 100   |     ";
								cin>>dis[f];
								
									while (dis[f] < 1 or dis[f] > 2 or dis[f] == -0){
										cout<<" "<<endl;
									    cout<<"           -------------------------------------"<<endl;
									    cout<<"           |            ERROR              |"<<endl; 
									    cout<<"           | La cantidad ingresado no es valida  |"<<endl;
									    cout<<"           |        solo puede maximo 2 Km.      |"<<endl;
									    cout<<"           -------------------------------------"<<endl;
									    cout<<" "<<endl;
									    cout<<"  Ingrese otra distancia: ";
									    cin>>dis[f];
								    }
									
								cout<<" "<<endl;
								cout<<"   Desea el servicio  1. para SI O 2. para No"<<endl;
								cout<<" "<<endl;	
								cout<<"   Opcion: ";
								cin>>r_servicio[f];
									
									while(r_servicio[f] < 1 or r_servicio[f] > 2){
										cout<<" "<<endl;
										cout<<" "<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<"           |           ERROR               |"<<endl; 
										cout<<"           | La valor ingresado no es valida     |"<<endl;
										cout<<"           -------------------------------------"<<endl;
										cout<<" "<<endl;
										cout<<"   Opcion: "<<endl;
										cin>>r_servicio[f];
									}
									
									servicio = 3;
							}
							
						system("cls");
							
							
						//Se mostrara la informaci�n del la factura del cliente.
						cout<<"---------------------------------------------------"<<endl;
						cout<<"                  SISTEMA DE FACTURA                "<<endl;
						cout<<"---------------------------------------------------"<<endl;
						cout<<" "<<endl;
						cout<<"               FERRETERIA CONSTRU-PUMA "<<endl;
						cout<<" "<<endl;
						n_fac[f] = (f + 1);
						cout<<"     N� Factura: "<<n_fac[f]<<endl;
						    
							if (codigo_c[i] >= 100){
								cout<<" Codigo Cliente: "<<codigo_c[i]<<endl;
							}else if (codigo_c[i] > 9 or codigo_c[i] <100){
								cout<<" Codigo Cliente: 0"<<codigo_c[i]<<endl;
							}else{
								cout<<" Codigo Cliente: 00"<<codigo_c[i]<<endl;
							}
							
						cout<<"        Cliente: "<<nombre[i]<<" "<<apellido[i]<<endl;
						cout<<"           Edad: "<<edad[i];
						
							if (genero[i] == 1){
								cout<<"    Genero: Hombre"<<endl;
							}else{
								cout<<"    Genero: Mujer"<<endl;
							}
						
						//Aqu� se mostrara la factura con el valor de los productos y lo extra.
						cout<<"  --------------------------------------------------------"<<endl;
						cout<<"  | Cant |      Descripci�n      |    P/Unit   |  P.TOTAL  |"<<endl;
						cout<<"  --------------------------------------------------------"<<endl;
						cout<<"     "<<cant[f];
						
							if (proc[f] == 1){
								cout<<"           Tubos pvc ";
						    }else if(proc[f] == 2){
							    cout<<"            Grifos ";
						    }else if(proc[f] == 3){
							    cout<<"            Lavabos";
						    }else if(proc[f] == 4){
						    	cout<<"           Cisternas";
						    }else if(proc[f] == 5){
							    cout<<"            Macetas";
						    }else if(proc[f] == 6){
							    cout<<"             Abono ";
							}else if(proc[f] == 7){
						    	cout<<"         Lampara Solar";
						    }else if(proc[f] == 8){
						    	cout<<"          Serruchos";
						    }else if(proc[f] == 9){
						    	cout<<"     Cepillo para Medera";
						    }else{
							    cout<<"            Clavos";
						    }
							
						cout<<"          L. "<<(prec_p)<<"     ";
						
						p_total[f] = (cant[f] * prec_p);
						cout<<"    L."<<(p_total[f])<<endl;
						
						desc1 = 0;
						desc2 = 0;
						desc3 = 0;
						desc4 = 0;
						    
							//Calculo del descuento de la tercera edad
							if (edad[i] >= 60){
								desc1 = (sub_total[f] * 0.13);
							}
							
							//Calculo de descuento para el area de fontaneria llevando 3 productos en adelante
							if (area[f] == 1 and cant[f] > 3 and (dia == 1 or dia == 2 or dia ==3)){
								desc2 = (sub_total[f] * 0.05);
							}
							
							//Calcula el descuento si es area de jardineria y que compre  6 o mas de libras de abono
							//los dias jueves y viernes.
							if (area[f] == 2 and proc_b[f] == 3 and cant[f] >= 6 and (dia == 4 or dia == 5)){
								desc3 = (sub_total[f] * 0.07);
							}
							
							//Calcula el descuento si es de la area de carpinteria y si compra 12 libras o mas
							//de clavos los dias sabados y domingos.
							if(area[f] ==3 and proc_c[f] == 3 and (dia == 6 or dia == 7)){
								desc4 = (sub_total[f] * 0.10);
							}
							
						system("pause");							
					} while(r2 != 2);
					
			    break;
				
		        case 3:
					
					//Limpia la pantalla
					system("cls");	
					
					//Muestra la cantidad disponible en el inventario de la ferreter�a
					cout<<"                -----------------------------------------------------"<<endl;
					cout<<"                           INVENTARIO DE LA FERRETERIA "<<endl;
					cout<<"                -----------------------------------------------------"<<endl;
					cout<<" "<<endl;
					cout<<" "<<endl;
					
					//Muestra una tabla detallada de los productos, precio, puntos y caantidades
					cout<<" -----------------------------------------------------------------------------------"<<endl;
					cout<<" |     AREA     |    PRODUCTOS    |      PRECIO     |      PUNTOS      | DISPONIBLES | "<<endl;
					cout<<" -----------------------------------------------------------------------------------"<<endl;
					cout<<"                |     Tubos pvc   |  L. 50 x Mts.   |  1 x cada metro  |     "<<pvc<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"    Fontaner�a  |      Grifos     | L. 200 x unidad |  20 x cada und   |     "<<grifo<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"                |      Lavabos    | L. 700 x unidad |  10 x cada und   |     "<<lavabo<<endl;
					cout<<" -------------------------------------------------------------------------------"<<endl;
					cout<<"                |     Cisternas   | L. 2,000 x und  |  20 x cada und   |     "<<cister<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"    Jardineria  |      Macetas    | L. 100 x unidad |  10 x cada und   |     "<<macetas<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"                |      Abonos     |  L. 50 x Libra  |  1 x cada Libra  |     "<<abono<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"                | Lamparas Solares| L. 300 x unidad |  20 x cada und   |     "<<lampara<<endl;
					cout<<" -------------------------------------------------------------------------------"<<endl;
					cout<<"                |     Serruchos   | L. 500 x unidad |  20 x cada und   |     "<<serrucho<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"    Carpinteria |  Cepillos para  | L. 200 x unidad |  10 x cada und   |     "<<cepillo<<endl;
					cout<<"                |      madera     |                 |                  |     "<<endl;
					cout<<"                -----------------------------------------------------------------"<<endl;
					cout<<"                |      Clavos     |  L. 10 x libra  |  2 x cada libra  |     "<<clavo<<endl;
					cout<<" -------------------------------------------------------------------------------"<<endl;
						
					//Comando para pausar el programa
					cout<<" "<<endl;
					system("pause");
					
			    break;
				
		        case 4:
					
					//Comando para limpiar pantalla
					system ("cls");
					
					//comando para poner de color amario las letras
					//system("Color 0c");
					
					cout<<"-------------------------------"<<endl;
					cout<<"|             SALIR             |"<<endl;
					cout<<"-------------------------------"<<endl;
					cout<<" "<<endl;
					
					//Se mostrara un mensaje preguntando si esta seguro de salir si o no
					cout<<"Seguro que quiere ...?   SI o NO"<<endl;
					cout<<" "<<endl;
					cout<<"1- SI"<<endl;
					cout<<"2- NO"<<endl;
					cout<<" "<<endl;
					cout<<"= ";
					cin>>salir;
					
					    //Con este ciclo while validaremos que el usuario no ingrese 
					    //un valor errado
						while (salir < 1 or salir > 2 or salir == -0){
							cout<<" "<<endl;
						    cout<<"--------------------------------"<<endl;
						    cout<<"|        ERROR             |"<<endl; 
						    cout<<"|El valor ingresada no es validad|"<<endl;
						    cout<<"--------------------------------"<<endl;
						    cout<<" "<<endl;
						    cout<<"Ingrese otro Valor: ";
						    cin>>salir;
						}
						
						//Con la condicion simple evaluaremos si el usuario quiere salir
					    if (salir == 1){
						     
							//con el comando return saldremos del programa
							return 0;
						
					     }
					
			    break;
			
			}
		
	    system("cls");	
		
	}while (salir != 1);
	
	
	
	return 0;
}

//Funcion para determinar si un cliente existe o no
bool NoExiste(string nom){
	
	//Con este ciclo for buscaremos en todos los nombre que estan dentro del arreglo
	//nombre 
	for (int j=0; j < x; j++){
		
		//con esta condicion encontraremos al cliente en el 
		if (nom == nombre[j]){
			
			return false;
			
		}
	}	
	
	return true;
}

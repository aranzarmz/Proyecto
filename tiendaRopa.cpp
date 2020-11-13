/*
Avance 1 Proyecto
Nombre: Aranza Ramírez Mora
Matrícula: A017746
13/11/2020
*/

/*
Descripción:
Este es un avance para el proyecto de la clase de Pensamiento Computacional Orientado a Objetos. 
Es un programa el cual nos muestra la variedad de tallas y colores que tienen los productos de una tienda de ropa.
*/

//Bibliotecas
#include<iostream>  // Usada para imprimir.
#include<string>     // Para el uso de strings.
#include "Playeras.h" // Clase llamada "Playeras"
#include "Pantalones.h" // Clase llamada "Pantalones"
#include "Zapatos.h" // Clase llamada "Zapatos"

using namespace std;

int main(){
	
	// Creando objetos de la clase "Playeras" con parámetros predeterminados.
	Playeras p1(4.0,"blanco");
	Playeras p2(5.0, "verde");
	
    // Creando objetos de la clase "Pantalones" con parámetros predeterminados.
	Pantalones pan1(6.0, "cafe");
	Pantalones pan2(4.0, "azul");
	
	// Creando objetos de la clase "Zapatos" con parámetros predeterminados.
	Zapatos z1(25.0, "negro");
	Zapatos z2(23.0, "gris");
	
	// Creando objeto utilizando los setters de la clase "Playeras"
	Playeras p3;
	p3.set_tallapl(6.0);
	p3.set_colorpl("rosa");
	
	// Creando objeto utilizando los setters de la clase "Pantalones"
	Pantalones pan3;
	pan3.set_tallapa(5.0);
	pan3.set_colorpa("blanco");
	
	// Creando objeto utilizando los setters de la clase "Zapatos"
	Zapatos z3;
	z3.set_tallaz(24.0);
	z3.set_colorz("negro");
	
	cout<<"Que desea ver?"<<endl;
	int opcion = 0;
	
	// Se utiliza un while para que el usuario pueda seguir viendo los productos hasta que decida salir del programa
	while(opcion != 4){
		// Mostramos el catálogo de los productos de la tienda
		cout<<"\nCATALOGO\n"<<endl;
		cout<<"1. Playeras"<<endl;
		cout<<"2. Pantalones"<<endl;
		cout<<"3. Zapatos"<<endl;
		cout<<"4. Salir\n"<<endl;
		
		// El usuario ingresará su opción deseada
		cin>>opcion;
		
		// Si la opción es 1, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Playera"
		if(opcion == 1){
			cout<<"Color de playera 1: "<<p1.get_colorpl()<<"\n Talla: "<<p1.get_tallapl()<<endl;
			cout<<"Color de playera 2: "<<p2.get_colorpl()<<"\n Talla: "<<p2.get_tallapl()<<endl;
			cout<<"Color de playera 3: "<<p3.get_colorpl()<<"\n Talla: "<<p3.get_tallapl()<<endl;
		}
		
		// Si la opción es 2, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Pantalones"
		else if(opcion == 2){
			cout<<"Color de pantalon 1: "<<pan1.get_colorpa()<<"\n Talla: "<<pan1.get_tallapa()<<endl;
			cout<<"Color de pantalon 2: "<<pan2.get_colorpa()<<"\n Talla: "<<pan2.get_tallapa()<<endl;
			cout<<"Color de pantalon 3: "<<pan3.get_colorpa()<<"\n Talla: "<<pan3.get_tallapa()<<endl;
		}
		
		// Si la opción es 3, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Zapatos"
		else if(opcion == 3){
			cout<<"Color de zapatos 1: "<<z1.get_colorz()<<"\n Talla: "<<z1.get_tallaz()<<endl;
			cout<<"Color de zapatos 2: "<<z2.get_colorz()<<"\n Talla: "<<z2.get_tallaz()<<endl;
			cout<<"Color de zapatos 3: "<<z3.get_colorz()<<"\n Talla: "<<z3.get_tallaz()<<endl;
		}
		
		// Si la opción es 4, se mostrará un mensaje de despedida al usuario ya que decidió salir
		else if(opcion == 4){
			cout<<"Gracias por visitarnos"<<endl;
		}
		
		// Si la opción es diferente a las anteriores, se mostrará un mensaje de error de que la opcion que eligió el usuario es inválida
		else {
			cout<<"ERROR: OPCION INVALIDA \n"<<endl;
		}
	}
	return 0;
}


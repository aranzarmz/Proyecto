/*
Proyecto Final Pensamiento Computacional Orientado a Objetos
Nombre: Aranza Ramírez Mora
Matrícula: A017746
04/12/2020
*/

/*
Descripción:
Este es el proyecto para la clase de Pensamiento Computacional Orientado a Objetos.
Dentro de este programa se mostrará la variedad de tallas y colores que tienen los productos de una tienda de ropa.
Así también, se podrá mostrar el tipo de corte de las playeras, el género de los pantalones y se podrán hacer compras para los zapatos.
*/

//Bibliotecas
#include<iostream>  // Usada para imprimir.
#include<string>     // Para el uso de strings.
#include "Producto.h" // Clase padre llamada "Producto"
#include "Playeras.h" // Clase hija llamada "Playeras"
#include "Pantalones.h" // Clase hija llamada "Pantalones"
#include "Zapatos.h" // Clase hija llamada "Zapatos"
#include "Tienda.h" // Clase "Tienda"


using namespace std;

int main(){
    
	// Creamos un objeto de tipo Tienda llamado "SwayStore"
    Tienda SwayStore;
	
	//Preguntamos al usuario si desea ingresar a la tienda
	cout << "Desea ingresar a la tienda? Si(1) / No(0)" << endl;
    int ingreso;
	cin >> ingreso;
	
	// Mandamos a llamar el método de "mensaje" para el objeto creado previamente, con parámetro la variable ingreso
    SwayStore.mensaje(ingreso);	

}


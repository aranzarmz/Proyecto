#include<iostream>
#include<string>
#include "Producto.h"
#ifndef ZAPATOS_H_
#define ZAPATOS_H_

using namespace std;

// Se crea la clase hija "Zapatos"
class Zapatos : public Producto {
	
	private:
	  // Tendrá dos atributos, precio y cantidad de zapatos
	  float precio;
	  int cantidad_z;
	
	public:
	  /*// Constructor por default
	  Pantalones():talla(0.0), color(""){};*/
	
	  // Constructor con parámetros
	  Zapatos(float tall, string col, float p, int can): 
	    Producto(tall,col),precio(p),cantidad_z(can){};
	
	  // Métodos
	  float consultaPrecio(int);
	  int comprar(int);
	  
};

//Función para consultar el precio
float Zapatos::consultaPrecio(int pares){
	cout<<"Cada par de zapatos cuesta $450.00"<<endl;
	precio = pares * 450;
	return precio;
}

// Función para comprar
int Zapatos::comprar(int pares){
	cantidad_z = pares * 2;
	return cantidad_z;
}

#endif


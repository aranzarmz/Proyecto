#include<iostream>
#include<string>
#include "Producto.h"
#ifndef PANTALONES_H_
#define PANTALONES_H_

using namespace std;

// Se crea la clase hija "Pantalones"
class Pantalones : public Producto {
	
	private:
	  // Tendrá un atributo, género
	  string genero;
	
	public:
	  /*// Constructor por default
	  Pantalones():talla(0.0), color(""){};*/
	
	  // Constructor con parámetros
	  Pantalones(float tall, string col, string gen): 
	    Producto(tall,col),genero(gen){};
	
	  // Métodos
	  string checar_genero();
	  
};

// Función checar_genero
string Pantalones::checar_genero(){
	return genero;
}

#endif


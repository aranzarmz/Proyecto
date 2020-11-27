#include<iostream>
#include<string>
#include <sstream>
#include "Producto.h"
#ifndef PLAYERAS_H_
#define PLAYERAS_H_

using namespace std;

// Se crea la clase hija "Playeras"
class Playeras : public Producto {
	
	private:
	  // Tendrá un atributo, tipo de corte
	  string tipo_corte;
	
	public:
	  /* Constructor por default
	  Playeras():talla(0.0), color(""){};*/
	
	  // Constructor con parámetros
	  Playeras(float tall, string col, string cor): 
	    Producto(tall,col),tipo_corte(cor){};
	
	  // Métodos
	  string get_tipo_corte();
	  string toString();
	  
};

// Función get_tipo_corte
string Playeras::get_tipo_corte(){
	return tipo_corte;
}

// Función toString
string Playeras::toString(){

    stringstream aux;
    aux<<"La talla es: " <<talla<<" , su color es: "<<color<<" ,su tipo de corte es: "<<tipo_corte<< "\n";
    return aux.str();
}

#endif


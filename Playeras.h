#include<iostream>
#include<string>
#include <sstream>
#include "Producto.h"
#ifndef PLAYERAS_H_
#define PLAYERAS_H_

using namespace std;

//Declaro la clase Playeras que hereda de Producto
class Playeras : public Producto {
	
	private:
	  // Variable de instancia, tipo de corte
	  string tipo_corte;
	
	public:
	  /**
	   * Constructor de la clase
	   * @param float tall: Talla de la playera
	   * @param string col: Color de la playera
	   * @param string cor: Tipo de corte de la playera
	  */
	  Playeras(float tall, string col, string cor): 
	    Producto(tall,col),tipo_corte(cor){};
	
	  // Métodos
	  string get_tipo_corte();
	  string toString();
	  
};

/**
 * Obtiene el tipo de corte de la playera
 * @return tipo_corte: tipo de corte de la playera
*/
string Playeras::get_tipo_corte(){
	return tipo_corte;
}

#endif


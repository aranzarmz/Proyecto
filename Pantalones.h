#include<iostream>
#include<string>
#include "Producto.h"
#ifndef PANTALONES_H_
#define PANTALONES_H_

using namespace std;

//Declaro la clase Pantalones que hereda de Producto
class Pantalones : public Producto {
	
	private:
	  // Variable de instancia, género
	  string genero;
	
	public:
	  /**
	   * Constructor de la clase
	   * @param float tall: Talla del pantalón
	   * @param string col: Color del pantalón
	   * @param string gen: Género del pantalón
	  */
	  Pantalones(float tall, string col, string gen): 
	    Producto(tall,col),genero(gen){};
	
	  // Método
	  string checar_genero();
	  
};

/**
 * Obtiene el género del pantalón
 * @return genero: género del pantalón
*/
string Pantalones::checar_genero(){
	return genero;
}

#endif


#include<iostream>
#include<string>
#ifndef PRODUCTO_H_
#define PRODUCTO_H_

using namespace std;

// Se crea la clase padre "Producto"
class Producto{
	
	protected:
	  //Atributos que se heredarán a todas las clases hijas
	  float	talla;
	  string color;
	
	public:
	  // Constructor por default
	  Producto(): talla(0.0), color(""){};
	  
	  // Constructor con parámetros
	  Producto(float tall, string col): talla(tall), color(col){};
	  
	  // Métodos que se heredarán a todas las clases hijas
	  // Getter y setter de "talla"
	  float get_talla();
	  void set_talla(float);
	  
	  // Getter y setter de "color"
	  string get_color();
	  void set_color(string);
	
};

// Funciones getters
float Producto::get_talla(){
	return talla;
}

string Producto::get_color(){
	return color;
}

// Funciones setters
void Producto::set_talla(float tall){
	talla = tall;
}

void Producto::set_color(string col){
	color = col;
}

#endif


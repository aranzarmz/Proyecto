#include<iostream>
#include<string>
#ifndef PRODUCTO_H_
#define PRODUCTO_H_

using namespace std;

/**
 * Declaración de clase padre Producto, que maneja tres clases hijas: 
 * Playeras, Zapatos y Pantalones
 */
class Producto{
	
	protected:
	  //Atributos que se heredarán a todas las clases hijas
	  float	talla;
	  string color;
	
	public:
	  /**
       * Constructor por default
       * @param
       * @return Objeto Producto
      */
	  Producto(): talla(0.0), color(""){};
	  
	  /**
	   * Constructor de la clase
	   * @param float tall: Talla del producto
	   * @param string col: Color del producto
	  */
	  Producto(float tall, string col): talla(tall), color(col){};
	  
	  // Métodos que se heredarán a todas las clases hijas
	  // Getter y setter de "talla"
	  float get_talla();
	  void set_talla(float);
	  
	  // Getter y setter de "color"
	  string get_color();
	  void set_color(string);
	
};

/**
 * Obtiene la talla del producto
 * @return talla: Talla del producto
*/
float Producto::get_talla(){
	return talla;
}

/**
 * Obtiene el color del producto
 * @return color: color del producto
*/
string Producto::get_color(){
	return color;
}

/**
 * Establece la talla del producto
 * @param float tall: talla del producto
*/
void Producto::set_talla(float tall){
	talla = tall;
}

/**
 * Establece el color del producto
 * @param string col: color del producto
*/
void Producto::set_color(string col){
	color = col;
}

#endif


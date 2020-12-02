#include<iostream>
#include<string>
#include "Producto.h"
#ifndef ZAPATOS_H_
#define ZAPATOS_H_

using namespace std;

//Declaro la clase Zapatos que hereda de Producto
class Zapatos : public Producto {
	
	private:
	  // Variables de instancia, precio y cantidad de zapatos
	  float precio;
	  int cantidad_z;
	
	public:
	  /**
	   * Constructor de la clase
	   * @param float tall: Talla de los zapatos
	   * @param string col: Color de los zapatos
	   * @param float p: Precio de los zapatos
	   * @param int can: Cantidad de los zapatos
	  */
	  Zapatos(float tall, string col, float p, int can): 
	    Producto(tall,col),precio(p),cantidad_z(can){};
	
	  // Métodos
	  float consultaPrecio(int);
	  int comprar(int);
	  
};

/**
 * Se consulta el precio de los pares de zapatos que se desean comprar
 * Para ello, se multiplica la cantidad de pares de zapatos por el precio de cada par, que es $450
 * @param int pares: cantidad de pares de zapatos  
 * @return precio: precio total de la compra
*/
float Zapatos::consultaPrecio(int pares){
	cout<<"Cada par de zapatos cuesta $450.00"<<endl;
	precio = pares * 450;
	return precio;
}

/**
 * Se consulta la cantidad de zapatos que hay en los pares que se han comprado
 * Para ello, se multiplica la cantidad de pares de zapatos por 2, ya que cada par contiene 2 zapatos
 * @param int pares: cantidad de pares de zapatos  
 * @return cantidad_z: cantidad de zapatos que hay en los pares comprados
*/
int Zapatos::comprar(int pares){
	cantidad_z = pares * 2;
	return cantidad_z;
}

#endif


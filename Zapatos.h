#include<iostream>
#include<string>
using namespace std;

// Se crea la clase "Zapatos"
class Zapatos{
	private:
	  // Tendrá dos atributos, talla y color
	  float talla;
	  string color;
	
	public:
	  // Constructor por default
	  Zapatos(): talla(0), color("blanco"){};
	  
	  // Constructor con parámetros
	  Zapatos(float tall, string col): talla(tall), color(col){};
	
	  // Getter y setter de "talla"
	  float get_tallaz();
	  void set_tallaz(float);
	  
	  // Getter y setter de "color"
	  string get_colorz();
	  void set_colorz(string);
};

// Funciones getters
float Zapatos::get_tallaz(){
	return talla;
}

string Zapatos::get_colorz(){
	return color;
}

// Funciones setters
void Zapatos::set_tallaz(float tall){
	talla = tall;
}

void Zapatos::set_colorz(string col){
	color = col;
}


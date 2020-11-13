#include<iostream>
#include<string>
using namespace std;

// Se crea la clase "Playeras"
class Playeras{
	private:
	  // Tendrá dos atributos, talla y color
	  float	talla;
	  string color;
	
	public:
	  // Constructor por default
	  Playeras(): talla(0), color("blanco"){};
	  
	  // Constructor con parámetros
	  Playeras(float tall, string col): talla(tall), color(col){};
	
	  // Getter y setter de "talla"
	  float get_tallapl();
	  void set_tallapl(float);
	  
	  // Getter y setter de "color"
	  string get_colorpl();
	  void set_colorpl(string);
	  
};

// Funciones getters
float Playeras::get_tallapl(){
	return talla;
}

string Playeras::get_colorpl(){
	return color;
}

// Funciones setters
void Playeras::set_tallapl(float tall){
	talla = tall;
}

void Playeras::set_colorpl(string col){
	color = col;
}


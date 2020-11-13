#include<iostream>
#include<string>
using namespace std;

// Se crea la clase "Pantalones"
class Pantalones{
	private:
	  // Tendrá dos atributos, talla y color
	  float talla;
	  string color;
	
	public:
	  // Constructor por default
	  Pantalones(): talla(0), color("blanco"){};
	  
	  // Constructor con parámetros
	  Pantalones(float tall, string col): talla(tall), color(col){};
	
	  // Getter y setter de "talla"
	  float get_tallapa();
	  void set_tallapa(float);
	  
	  // Getter y setter de "color"
	  string get_colorpa();
	  void set_colorpa(string);
};

// Funciones getters
float Pantalones::get_tallapa(){
	return talla;
}

string Pantalones::get_colorpa(){
	return color;
}

// Funciones setters
void Pantalones::set_tallapa(float tall){
	talla = tall;
}

void Pantalones::set_colorpa(string col){
	color = col;
}


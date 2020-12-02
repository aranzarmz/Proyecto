#ifndef TIENDA_H_
#define TIENDA_H_
#include<iostream>

using namespace std;
/*
* Creamos una clase llamada "Tienda", en la cual uno de sus componentes será la 
* clase padre "Producto", es decir, si se destruye
* la clase "Tienda", la clase "Producto" también lo hará
*/
class Tienda{
	
	private:
	  // Atributo
	  int ingreso;
	
	public:
	  // Método
	  int mensaje(int);
};

/**
 * Método "mensaje", se utiliza para preguntarle al usuario si quiere ingresar a la tienda
 * @param int ingreso: un número que ingrese el usuario
 * @return int ingreso: opción correspondiente de ingreso
 */
int Tienda::mensaje(int ingreso){
	
	/*Si el usuario ingresara un número 1, se crearán objetos de las clases hijas 
	 * utilizando métodos getters y setters y se desplegará un menú con diferentes 
	 * opciones para ver el catálogo de los productos de la tienda
	*/
	
	if (ingreso == 1) {
	// Creando objetos de la clase hija "Playeras" con parámetros predeterminados.
	Playeras p1(4.0,"blanco","Regular Fit");
	Playeras p2(5.0, "verde","Tailored Fit");
	
    // Creando objetos de la clase hija "Pantalones" con parámetros predeterminados.
	Pantalones pan1(6.0, "cafe","Hombre");
	Pantalones pan2(4.0, "azul","Mujer");
	
	// Creando objetos de la clase hija "Zapatos" con parámetros predeterminados.
	Zapatos z1(25.0, "negro",900.00,2);
	Zapatos z2(23.0, "gris",450.00,1);
	
	cout<<"Bienvenido a la SwayStore, que desea ver?"<<endl;
	int opcion = 0;
	
	// Se utiliza un while para que el usuario pueda seguir viendo los productos hasta que decida salir del programa
	while(opcion != 5){
		// Mostramos el catálogo de los productos de la tienda
		cout<<"\nCATALOGO\n"<<endl;
		cout<<"1. Playeras"<<endl;
		cout<<"2. Pantalones"<<endl;
		cout<<"3. Zapatos"<<endl;
		cout<<"4. Comprar zapatos"<<endl;
		cout<<"5. Salir\n"<<endl;
		
		// El usuario ingresará su opción deseada
		cin>>opcion;
		
		// Si la opción es 1, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Playera"
		// Así también, se podrá checar el tipo de corte, que es un atributo de esta clase hija
		if(opcion == 1){
			cout<<"Color de playera 1: "<<p1.get_color()<<"\n Talla: "<<p1.get_talla()<<"\n Tipo de corte: "<<p1.get_tipo_corte()<<endl;
			cout<<"Color de playera 2: "<<p2.get_color()<<"\n Talla: "<<p2.get_talla()<<"\n Tipo de corte: "<<p2.get_tipo_corte()<<endl;
		}
		
		// Si la opción es 2, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Pantalones"
		// Así también, se podrá checar el genero, que es un atributo de esta clae hija
		else if(opcion == 2){
			cout<<"Color de pantalon 1: "<<pan1.get_color()<<"\n Talla: "<<pan1.get_talla()<<"\n Genero: "<<pan1.checar_genero()<<endl;
			cout<<"Color de pantalon 2: "<<pan2.get_color()<<"\n Talla: "<<pan2.get_talla()<<"\n Genero: "<<pan2.checar_genero()<<endl;
		}
		
		// Si la opción es 3, se mostrarán los colores y las tallas de cada objeto utilizando los getters de la clase "Zapatos"
		else if(opcion == 3){
			cout<<"Color de zapatos 1: "<<z1.get_color()<<"\n Talla: "<<z1.get_talla()<<endl;
			cout<<"Color de zapatos 2: "<<z2.get_color()<<"\n Talla: "<<z2.get_talla()<<endl;
		}
		
		/* Si la opción es 4, el usuario podrá hacer compras de pares de zapatos, así como consultar 
		   el precio y la cantidad de pares de zapatos que ha comprado */
		else if(opcion == 4){
			int pares;
			float pago;
			int total;
			cout<<"Cuantos pares quieres comprar: ";
			cin>>pares;
		    total = z1.comprar(pares);
			pago = z1.consultaPrecio(pares);
			cout<<"La cantidad a pagar es de $"<<pago<<endl;
			cout<<"\n"<<"Se han comprado en total "<<total<<" zapatos en "<<pares<<" pares en toda la tienda"<<endl;
		}
		
		// Si la opción es 5, se mostrará un mensaje de despedida al usuario ya que decidió salir
		else if(opcion == 5){
			cout<<"Gracias por visitarnos"<<endl;
		}
		
		// Si la opción es diferente a las anteriores, se mostrará un mensaje de error de que la opcion que eligió el usuario es inválida
		else {
			cout<<"ERROR: OPCION INVALIDA \n"<<endl;
		}
	}
	return 0;
	}
	
	// Si el usuario ingresa un número 0, quiere decir que no está interesado en ver la tienda, por lo que el programa terminará
	else if (ingreso == 0) {
		cout<<"Vuelva pronto"<<endl;
		abort;
	}
	return ingreso;
}

#endif



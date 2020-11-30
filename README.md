# Avance Revisión Final
Nombre: Aranza Ramírez Mora.

Matrícula: A01707746.

Este trabajo es el avance para la revisión del proyecto de "Pensamiento Computacional Orientado a Objetos".

Se trabajarán e implementarán nuevos conceptos de programación usando el lenguaje de C++, con la finalidad de poder entender mejor acerca de la proramación orientada a objetos, cómo funciona y para qué se usa.

Dentro de este avance se deja incluido todo lo que se venía trabajando en los primeros tres avances, y al tener todas competencias necesarias acreditadas no se hará ningún cambio a menos de que haya alguna corrección por parte del profesor.

# Contexto
Una tienda de ropa llamada "Sway Store" quiere expandirse y darse a conocer a un público más internacional, para ello, han decidido crear un catálogo online en el cuál los usuarios pueden elegir la opción que deseen ver de los productos que la tienda tiene para ofrecerles. Cada producto tiene su talla y color definido. Además, las playeras tendrán su tipo de corte, los pantalones tendrán su género y se podrán hacer compras para los zapatos.

# Funcionalidad
Al correr el programa, se le preguntará al usuario si desea ingresar a la tienda en línea, en caso de que no quiera el programa terminará, pero en el caso de que si quiera se mostrará un menú con el catálogo de la tienda. El usuario podrá ingresar un número para el producto indicado del menú, y se mostrarán las tallas y colores de dicho producto. Si se eligieran ver las playeras se mostraría también el tipo de corte que tiene; si se eligieran los pantalones se mostraría también el género y si se eligieran zapatos, se podrá ingresar la cantidad de pares de zapatos que quiere y se le mostrará el precio total así como la cantidad de zapatos comprados. Dentro de la función main del programa habrá un ciclo while para que este corra mientras el usuario no ingrese la opción de salir. Al ingresar el número de la opción de "Salir", se le dará un mensaje de despedida y el programa terminará.

# Caso de prueba
Supongamos que un usuario corre el programa, el usuario teclea un 1 indicando que si quiere ingresar a la tienda en línea. Lo que sigue sería que el programa mostrará al usuario el catálogo con las diferentes opciones de productos que contiene la tienda, el usuario ingresa la opción 1 y se despliega en la pantalla los dos tipos de playeras que hay en la tienda, con sus respectivos colores, tallas y tipos de corte. Después, el usuario ingresa la opción 2 y se despliega en la pantalla los dos tipos de pantalones que hay en la tienda, con sus respectivos colores, tallas y géneros. Si el usuario ingresa la opción 3, se despliega en pantalla los dos tipos de pares de zapatos que hay en la tienda, con sus respectivos colores y tallas. Pero, si el usuario ingresara el número 4, se le pregunta al usuario cuántos pares de zapatos desea comprar, si éste ingresara 2 se despliega en pantalla cuánto cuesta cada cantidad de zapatos, el costo total de la compra de zapatos y la cantidad de zapatos que haya en los pares adquiridos. Por último, el usuario al ingresar la opción 5, el programa de la un mensaje de despedida y se termina de correr.

# Consideraciones
El programa solo corre en la consola y esta hecho con el lenguaje de c++ standard por lo que corre en todos los sistemas operativos.

Compilar con: "g++ tiendaRopa.cpp".

Correr en linux: "/a.out".

Correr en windows: "./a.exe".

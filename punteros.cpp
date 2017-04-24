#include <iostream>

using namespace std;
/**
PUNTEROS
	* -> declaración de puntero
	& -> dirección de...
	
	partes de la variable
	nombre y tipo
	contenido
	dirección de memoria

**/
int main(){
	int var =100;
	/**Aun que sea de tipo entero, no se le puede asignar un valor entero (int *puntero=100;)
	lo que se le debe de asignar es la dirección de memoria de una variable entera **/
	int *puntero = &var;
	cout<<"Contenido de var: "<<var<<endl; /** MUESTRO CONTENIDO DE LA VARIABLE **/
	cout<<"Dirección de var: "<<&var<<endl; /** MUESTRO DIRECCION DE LA VARIABLE **/
	cout<<endl;
	cout<<"Contenido del puntero: "<<puntero<<endl;
	cout<<"Dirección del puntero: "<<&puntero<<endl;
	
	return 0;
}

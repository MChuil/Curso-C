#include <iostream>

using namespace std;
/**
Punteros y Arreglos
**/
int main(){
	int array[] = {10,20,30,40};
	/**El nombre de una array es en realidad un puntero que accede a la dirección
	de memoria del primer elemento y sabiendo eso, es facil poder acceder a los demas elementos
	pues estan en forma secuencial**/
	cout<<array<<endl;
	cout<<array+1<<endl;
	cout<<array+2<<endl;
	cout<<array+3<<endl;
	
	//Aritmetica de punteros
	//No aumenta de uno en uno, aumenta la cantidad de espacios que ocupa el tipo de variable
	//en este ejemplo los enteros ocupan 4 espacios
	return 0;
}

#include <iostream>

using namespace std;

/**PROTOTIPOS**/
void cambiarCien(int &a);

int main(){
	/**Pasar por valor y referencia */
	int numero = 5;
	cout<<"Antes del procedimiento: "<<numero<<endl;
	cambiarCien(numero);
	cout<<"Después del procedimiento: "<<numero;
	return 0;	
}

/** PASO POR VALOR **/
/*void cambiarCien(int a){
	a = 100;
}*/


/** PASO POR REFERENCIA **/
void cambiarCien(int &a){
	a = 100;
}

#include <iostream>

using namespace std;
/**
Referencia
	& -> operador de referencia

**/
int main(){
	int var =10*10;
	int &referencia = var;
	referencia =20;
	cout<<"El valor de var: "<<var<<endl;
	cout<<endl;
	cout<<"El contenido de var es: "<<var<<endl;	
	cout<<"La dirección de var es: "<<&var<<endl;	
	cout<<endl;
	cout<<"El contenido de referencia es: "<<referencia<<endl;	
	cout<<"La dirección de referencia es: "<<&referencia<<endl;	
	return 0;
}

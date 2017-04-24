#include <iostream>

using namespace std;
/**
PUNTEROS
	* -> indireccion ->dentro de la direccion

**/
int main(){
	int var =10*10;
	int *puntero = &var; /** 4 bytes **/
	*puntero = 50;
	cout<<"El valor de var: "<<var<<endl;
	/*cout<<"El valor de var: "<<*puntero<<endl;*/

	
	return 0;
}

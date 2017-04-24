#include <iostream>

using namespace std;

int main(){
	/*Lea 2 arreglos unidemsionales con valores enteros y usando
	otro arreglo calcule la multiplicación de los valores de ambos arreglos
	1	2	3
	4 	5	6
	4	10	18
	*/
	int n=0;
	cout<<"Indica el tamaño de los arreglos: ";
	cin>>n;
	
	const int NUM=n;
	
	int arreglo1[NUM];
	int arreglo2[NUM];
	int arreglo3[NUM];
	
	cout<<"--------------LISTADO 1--------------"<<endl;
	for(int i=0;  i<NUM; i++){
		cout<<"Indice: "<<i<<":";
		cin>>arreglo1[i];
	}
	
	cout<<"--------------LISTADO 2--------------"<<endl;
	for(int i=0;  i<NUM; i++){
		cout<<"Indice: "<<i<<":";
		cin>>arreglo2[i];
	}	
	
	cout<<"RESULTADO"<<endl;
	for(int i=0; i<NUM; i++){
		arreglo3[i]= arreglo1[i]*arreglo2[i];
		cout<<arreglo3[i]<<endl;
	}
	return 0;	
}

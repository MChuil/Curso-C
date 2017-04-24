#include <iostream>

using namespace std;

int main(){
	/*Lea 2 arreglos enteros y genere otro con la combinación de ambos arreglos
	No necesariamente los arreglos tendran la misma dimensión
	Arreglo 1: 1	2	3	4
	Arreglo 2: 5	6	7
	Arreglo 3	1	2	3	4	5	6	7
		*/
	int n1, n2, n3;	
	do{
		cout<<"Ingresa la cantidad de elementos del arreglo 1: ";
		cin>>n1;
	}while(n1<=0);
	int arreglo1[n1];
	
	for(int i=0; i<n1; i++){
		cout<<"Elemento del indice "<<i<<" :";
		cin>>arreglo1[i];
	}
	
	do{
		cout<<"Ingresa la cantidad de elementos del arreglo 2: ";
		cin>>n2;
	}while(n2<=0);
	int arreglo2[n2];
	
	for(int i=0; i<n2; i++){
		cout<<"Elemento del indice "<<i<<" :";
		cin>>arreglo2[i];
	}
	
	n3 = n1+n2;
	int arreglo3[n3];
	int contador=0;
	cout<<"------------------ARREGLO FORMADO------------------"<<endl;
	for(int y=0; y<=n1; y++){
		arreglo3[contador]= arreglo1[y];
		contador++;
	}
	
	for(int x=0; x<=n2; x++){
		arreglo3[contador]= arreglo2[x];	
		contador++;
	}
	
	for(int x=0; x<n3;x++){
		cout<<arreglo3[x]<< " ";
	}
	
	return 0;	
}

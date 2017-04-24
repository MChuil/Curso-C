#include <iostream>

using namespace std;

int main(){
	/*Buscar el nuero mas pequeño e indicar el indice
		Arreglo 4	8	10	50	4	1	6	80
	*/
	int arreglo[10];
	int menor;		
	for(int i=0; i<10; i++){
		cout<<"Elemento del indice "<<i<<" :";
		cin>>arreglo[i];
	}
	
	menor=0;
	for(int i=1; i<10; i++){
		if(arreglo[i]<arreglo[menor]){
			menor=i;
		}
	}	
	cout<<"El numero menor es: "<<arreglo[menor]<<" en la posición: "<<menor<<endl;
	return 0;	
}

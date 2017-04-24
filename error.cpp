/*Lea 2 arreglos enteros y genere otro con la combinación de ambos arreglos
	No necesariamente los arreglos tendran la misma dimensión
	Arreglo = 1	2	3	4	5	6
	Arreglo =	10	11	12
	Nuevo Arreglo = 1	2	3	4	5	6	10	11	12
	*/
#include <iostream>	

using namespace std;

int main(){
	
	
	int numero,numero3,numero1,numero2,i=0,cont=0,b=0;
		
	
	cout << "numeros del primer arreglo?: ";
	cin >> numero;
	cout << endl;
	int arreglo1[numero];
	
	for(int y=0; y<numero; y++){
		cout << "Ingrese el indice "<<y<<" : ";
		cin>>arreglo1[y];
	}
	
	for(int i=0; i<numero; i++){
		
		cout << "indice" <<i<< " : "<< " "<< arreglo1[i]<<endl;
 		
	}
	
	cont=0;
	
	
		cout << "numeros del segundo arreglo?: ";
		cin >> numero2;
		cout << endl;
		int arreglo2[numero2];
		
		for(int y=0; y<numero2; y++){
			cout << "Ingrese el indice "<<y<<" : ";
			cin>>arreglo2[y];
		}	
		
		for(int i=0; i<numero2; i++){
		
		cout << "indice" <<i<< " : "<< " "<< arreglo2[i]<<endl;
 		
	}
		
		

	int contador=0;
	int n3 = numero + numero2;
	int arreglo3[n3];
	for(int j=0; j<=numero; j++){
		arreglo3[contador] = arreglo1[j];
		contador++;
	}
	
	for(int y=0; y<numero2; y++){
		cout<<"Contador: "<<contador << " - Y: "<<y<<endl;
		arreglo3[contador] = arreglo2[y];
		contador++;
	}
	
	//for(int x=0; x<n3; x++){
		
		cout<<"indice "<<3<<" = "<<arreglo3[3]<<endl;
		
	//}
	
	return 0;
	
}
	

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
	int opcion, clave, nota1, nota2;
	char nombre[50];
	ofstream Guardar;
	ifstream Leer;
	ofstream temporal;
	//Para no definir al declarar el tipo de apertura del archivo = fstream Variable;
	Guardar.open("fichero.txt", ios::out|ios::app);
	while(true){
		cout << "1. Guardar"<<endl;
		cout << "2. Leer" <<endl;
		cout << "3. Buscar"<<endl;
		cout << "4. Eliminar"<<endl;
		cout << "5. Modificar"<<endl;
		cout << "6. Salir"<<endl;
		cout << "Elija una opción"<<endl;
		cin >>opcion;
		
		switch(opcion){
			
			case 1:
				cout <<"Nombre: "<<endl;
				cin >>nombre;
				//cin.getline(nombre, 30);
				cout <<"Clave: " <<endl;
				cin >> clave;
				cout <<"Nota 1: "<<endl;
				cin >> nota1;
				cout <<"Nota 2: "<<endl;
				cin >> nota2;
				Guardar<<nombre<<" "<<clave<<" "<<nota1<<" "<<nota2<<endl;
				Guardar.close();
				break;
			case 2:
				Leer.open("fichero.txt");
				//char linea[100];
				//Leer.getline(linea, sizeof(linea));
				Leer>>nombre;
				while(!Leer.eof()){
					Leer>>clave>>nota1>>nota2;
					cout <<""<<nombre;
					cout <<" "<<clave;
					cout <<" "<<nota1;
					cout <<" "<<nota2<<endl;
					
					Leer>>nombre;
				}
				
				break;
			case 4:
				    char n[50];
				    cout <<"Introduce el nombre: ";
				    cin >>n;
					Leer.open("fichero.txt");
					temporal.open("temporal.txt", ios::out);
				
					Leer>>nombre;
					while(!Leer.eof()){
						Leer>>clave>>nota1>>nota2;
						if(strcmp(n, nombre)==0){
						
						}else{
							temporal<<nombre<<" "<<clave<<" "<<nota1<<" "<<nota2<<endl;	
						}				
						
						Leer>>nombre;
					}
					temporal.close();
					Leer.close();
					Guardar.close();
					if(remove("fichero.txt")!= 0) {
						cout <<"No se pudo eliminar el registro"<<endl;	
					}else{
						cout <<"El registro se ha eliminado"<<endl;
						rename("temporal.txt", "fichero.txt");
					}
					break;
			case 6:
				return false;
				break;
		}
		cin.get();
	//system("cls");
	}
	return 0;
}

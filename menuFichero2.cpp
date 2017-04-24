//1. Crear archivo
//2. Agregar información
//3. Leer el contenido

#include <iostream>
#include<fstream>

using namespace std;

int main(){
	ofstream fichero;
	fstream fichero1;
	ifstream leer;
	string texto;
	char nombre[50],palabra[50];
	int opc;
	
	menu:		
	cout << "1.- CREAR ARCHIVO";
	cout << endl;
	cout << "2.- AGREGAR INFORMACION";
	cout << endl;
	cout << "3.- LEER CONTENIDO";
	cout << endl;
	cout << "4.- SALIR";
	cout << endl;
	cout << "INGRESA UNA OPCION: ";
	cin >> opc;
	
	while(opc!=4){
		
		switch(opc){
			
			case 1: 
					cout << "NOMBRE DEL ARCHIVO: ";
					cin >> nombre;
					fichero.open(nombre);
					if(fichero.fail()){
					cout<<"El archivo no se pudo crear";
					}else{
					cout<<"creacion de fichero correcta!"<<endl;
					fichero<<"HOLA";
					}
					fichero.close();
					system("pause");
					system("cls");
					goto menu;
					break;
					
			case 2: 
					
						fichero1.open(nombre, ios::app);
						if(fichero1.fail()){
							cout<<"El archivo no existe o no se puede abrir";
						}else{
							cin.get();
					//	cout<<"Apertura de fichero correcta!"<<endl;
							cout<<"Ingresa el texto: ";
							cin.get(palabra,50);
							fichero1<<palabra<<endl;
							fichero1.close();
						}
						//system("pause");
						goto menu;
						break;
						
			case 3: 	
						
						leer.open(nombre, ios::in);
						while(!leer.eof()){
						getline(leer, texto);
						cout<<texto<<endl;
						}	
						leer.close();				
						break;
		}
		
		
	}	
}

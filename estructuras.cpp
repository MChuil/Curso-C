#include <iostream>
#include <string.h>
using namespace std;

	struct Alumno{
		int id=0;
		string nombre;
		string apellidos;
		int edad;
		string email;
		Alumno(){ edad=0; email="test@test.com";}
		int mostrarEdad(){ return edad;}
		int asignaEdad(int e){ edad = e;}
	};
	
	int numAlumnos=0;
int main(){
	cout << "Ingresa el numero de alumnos"<<endl;
	cin >>numAlumnos;
	string vector[numAlumnos];
	for(int i=0; i<numAlumnos; i++){
		cout <<"nombre del alumno"<<endl;
		//cin >> vector[i];
		Alumno vector[i];
		cin>> vector[i].nombre;
	}
	/*Alumno miguel;
	miguel.nombre = "Miguel";
	cout <<miguel.nombre<<endl;
	cout<< miguel.mostrarEdad()<<endl;*/
	cout << vector[0]<< endl;
	cin.get();
	return 0;
}

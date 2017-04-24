#include <iostream>
#include <fstream>
 
using namespace std;

 
int main () {
    fstream ficheroEntrada;
    string nombre;
    string frase;
    string buscar;
 
    cout << "Dime el nombre del fichero: ";
    getline(cin,nombre);
	
	//cout<<"Texto a buscar: ";
	//getline(cin,buscar);
 
    ficheroEntrada.open ( nombre.c_str() , ios::out);
    if (ficheroEntrada.is_open()) {

        /*while (! ficheroEntrada.eof() ) {
            getline (ficheroEntrada,frase);
            if(frase==buscar){
            	cout << "Leido: " << frase << endl;
			}else{
				
			}
            
        }*/
		cout<<"Fichero creado";
        ficheroEntrada.close();
    }
    else cout << "Fichero inexistente o faltan permisos para abrirlo" << endl;  

 
    return 0;
}
 

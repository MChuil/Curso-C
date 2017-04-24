#include <iostream>
#include <fstream> 
using namespace std;
 main() 
{ 
	system ("color 9A" );
     fstream fichero; 
    char texto[200]; 
                                // Abro para lectura 
    fichero.open("ejemplo.txt", ios::in); 
    if(fichero.fail()){
    	cout<<"El archivo no se pudo abrir"<<endl;
	}else{
		cout<<"el archivo se abrio correctamente"<<endl;
	}
    fichero >> texto;           // Leo una primera linea 
    while (!fichero.eof())      // Mientras se haya podido leer algo 
    { 
	   	cout << texto << endl;    // Muestro lo que lei 
	cin.get();
      fichero >> texto;       // Y vuelvo a intentar leer 
    } 
   fichero.close();
} 

# include <iostream >
# include <string >
# include <cstdlib >
# include <ctime >
using namespace std ;
int main () {
	srand ( time (0));
	bool continua = true;
	while ( continua ) {
		int x= rand () %100+1;
		cout << " Adivina el numero (1 -100) que estoy pensando ." << endl;
		int num =-1;
		int intentos =0;
		while ( num !=x) {
			cout << "Di:";
			cin >> num ;
			++ intentos ;
			if (num >x) cout << " Demasiado grande !" << endl;
			else if (num <x) cout << " Demasiado pequenno !" << endl;
			else cout << " Correcto ! Has tardado " << intentos << " intentos ." << endl;
		}
		string resp="";
		while ( resp !="si" and resp !="no") {
		cout << endl << " Quieres seguir jugando ? (si/no)" << endl ;
		cin >> resp;
		}
		if ( resp =="no") continua =false ;
	}
}

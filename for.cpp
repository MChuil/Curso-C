#include <iostream>

using namespace std;

int main(){
	
	int numero1,numero2,x,multi=0;
	
	cout << "ingrese numero1: ";
	cout << endl;
	cin >> numero1; //6
	cout << "ingrese numero2: ";
	cout << endl;
	cin >> numero2; //3
	
	/*while(cont<numero2){
		
		multi = multi + numero1;
		cont++;
	}*/
	//1; 3<=3 1+1
	for(x=1; x<=numero2; x++){
		multi = multi + numero1;
		cout << multi <<endl;
		//6
		//12
	}
	
	cout << "resultado: "<<multi;
}

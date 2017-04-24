#include <iostream>

using namespace std;
int main(){
	
	int numero1,numero2,x,r=0;
	
	cout << "ingrese numero1: ";
	cout << endl;
	cin >> numero1; //6
	cout << "ingrese numero2: ";
	cout << endl;
	cin >> numero2; //3
	if(numero1>numero2){
		while(numero1>=numero2){
			numero1 = numero1 - numero2;
			x++;
		}
	}else{
		while(numero2>=numero1){
			numero2 = numero2 - numero1;
			x++;
		}
	}
	
	
	cout << "resultado: "<<x;
}

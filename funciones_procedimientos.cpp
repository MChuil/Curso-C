#include <iostream>

using namespace std;

/**PROTOTIPOS**/
void mensaje();
int suma(int a, int b);
bool esPar(int x);

int main(){
	mensaje();
	int resultado = suma(8, 12);
	cout<<resultado<<endl;
	bool par = esPar(9);
	if(par==true){
		cout<<"El numero es par"<<endl;
	}else{
		cout<<"El numero NO es par"<<endl;
	}
	return 0;	
}

void mensaje(){
	cout<<"Este es un mensaje desde un procedimiento"<<endl;
}
int suma(int a, int b){
	int c = a + b;
	return c;
}
bool esPar(int x){
	bool par;
	if(x%2 == 0){
		par = true;
	}else{
		par = false;
	}
	return par;
}

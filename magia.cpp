#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
	int operacion;	
	cout << "Piensa en un numero...." << endl;
	Sleep(5000);
	//getchar();
	cout << "Sumale 8..." << endl;
	Sleep(5000);
	cout << "Quitale 2..." << endl;
	Sleep(5000);
	cout << "Multiplicalo por 3..." << endl;
	Sleep(5000);
	cout << "Sumale 6..." << endl;
	Sleep(5000);
	cout << "Dividelo entre 3..." << endl;
	Sleep(5000);
	cout << "Restale el numero que pensaste..." << endl;
	Sleep(5000);
	operacion = (((8-2)*3)+6)/3;
	
	cout << "Tu resultado fue: ";
	cout << operacion << endl;
}

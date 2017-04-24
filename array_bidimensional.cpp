#include <iostream>

using namespace std;

int main(){
	int A[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int filas = 3, columnas=3;
	int B[filas][columnas];
	
	for(int x=0; x<filas; x++){
		for(int y=0; y<columnas; y++){
			cout<<"["<<x<<"]["<<y<<"] ";	
			cin>>B[x][y];
		}
		cout<<endl;
	}	
	
	for(int x=0; x<filas; x++){
		for(int y=0; y<columnas; y++){	
			cout<<B[x][y]<<" ";
		}
		cout<<endl;
	}	
	return 0;
}

#include <iostream>

using namespace std;

int main(){
		/* Pedir al usuario los datos de dos matrices de NxN y luego muestre su suma*/
		
		int A[100][100];
		int B[100][100];
		int C[100][100];
		int N;
		cout<<"Ingrese el valor de N:";
		cin>>N;
		
		cout<<"MATRIZ A"<<endl;
		for(int x=0; x<N; x++){
			for(int y=0; y<N; y++){
				cout<<"["<<x<<"]["<<y<<"] ";	
				cin>>A[x][y];
			}
		}
		
		cout<<"MATRIZ B"<<endl;
		for(int x=0; x<N; x++){
			for(int y=0; y<N; y++){
				cout<<"["<<x<<"]["<<y<<"] ";	
				cin>>B[x][y];
			}
		}
		
		cout<<"SUMA DE VALORES"<<endl;
		for(int x=0; x<N; x++){
			for(int y=0; y<N; y++){
				C[x][y]= A[x][y] + B[x][y];
				cout<<C[x][y]<<" - ";
			}
			cout<<endl;
		}
		
	return 0;
}

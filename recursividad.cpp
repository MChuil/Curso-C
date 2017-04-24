# include <iostream >
using namespace std ;

void cuentaRegresiva (int num){
	cout << num << endl;
	if(num>0){
		cuentaRegresiva(num-1);
	}
	
}
int main(){
	cuentaRegresiva(10);
}

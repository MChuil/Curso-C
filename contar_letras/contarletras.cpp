#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//variables
char nombre[25];
char apellidos[30];
int r;
int z;
int linea=6;
int contador=0;
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
int main(){
	gotoxy(10,2), printf("Ingresa tu nombre");
	gotoxy(10,3), gets(nombre);
   gotoxy(10,4), printf("Ingresa tus apellidos");
  	gotoxy(10,5), gets(apellidos);
	r=strlen(nombre);
		
	for(z=0; z<r; z++){
		if(nombre[z]!=' '){
			contador++;
		}
	}
		linea++;
		gotoxy(10,linea), printf("Total de caracteres: %i",contador);
getch();

}


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

char nombre[25];
char apellido[30];
int r;
int i;
int contador=0;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 

void main()
{
      gotoxy(5,5),printf("INGRESA NOMBRE:");
      gotoxy(5,6),gets(nombre);
      r=strlen(nombre);
      for(i=0; i<r; i++){
        if(nombre[i]!=' '){
      	 contador++;
        }


      gotoxy(5,7),printf("INGRESA APELLIDO:");
      gotoxy(5,8),gets(apellido);
      r=strlen(apellido);
      for(i=0; i<r; i++){
        if(apellido[i]!=' '){
      	 contador++;
        }

gotoxy(5,9), printf("TOTAL DE LETRAS SON: %i",contador);
getch();
}

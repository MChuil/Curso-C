#include <stdio.h>
#include <iostream>
#include <conio.h>

int main()
{

int numero, r;
 printf("TABLA DE MULTIPLICAR CON CICLO DO WHILE.\n\n");
 printf("ALUMNO: JOSE LUIS LORENZANA DE LA ROSA.\n");
 printf("MATERIA: ESTRUCTURA DE DATOS.\n");
 printf("DOCENTE: JESUS REY CANCINO SOLIS.\n");
 printf("CUATRIMESTRE: 3R I.S.C SEMIESCOLARIZADO.\n\n");
 printf ("INGRESE CUALQUIER NUMERO DE LA TABLA DE MULTIPLICAR:\n");
 scanf ("%d", &numero);
   int contador=1;
do{
	r = contador*numero;
	printf ("%d * %d =%d\n", contador,numero,r);
	contador++;
}while(contador<=10);


 getch();
  }

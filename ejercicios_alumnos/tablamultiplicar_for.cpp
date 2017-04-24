#include <stdio.h>
#include <conio.h>
int main()
{
int tabla,t,res;
printf("TABLA DE MULTIPLICAR CICLO FOR.\n\n");
printf("ALUMNO: JOSE LUIS LORENZANA DE LA ROSA.\n");
printf("MATERIA: ESTRUCTURA DE DATOS.\n");
printf("CUATRIMESTRE: 3er I.S.C SEMIESCOLARIZADO.\n");
printf("DOCENTE: JESUS REY CANCINO SOLIS.\n\n");
printf ("INGRESE CUALQUIER NUMERO DE LA TABLA DE MULTIPLICAR:\n");
scanf ("%d", &tabla);
for (t=1; t<=10; t++)
{
res = tabla*t;
printf ("%d * %d =%d\n", tabla,t,res);
}
getch ();
}

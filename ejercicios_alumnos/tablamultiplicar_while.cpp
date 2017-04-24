#include <stdio.h>
#include <conio.h>
int main()
{

 printf("\nTABLA DE MULTIPLICAR CICLO WHILE\n\n\n");
 printf("\nALUMNO: JOSE LUIS LORENZANA DE LA ROSA");
 printf("\nMATERIA: ESTRUCTURA DE DATOS");
 printf("\nDOCENTE: JESUS REY CANCINO SOLIS");
 printf("\nCUATRIMESTRE 3er I.S.C SEMIESCOLARIZADO");

 int a=1, b;
 printf("\n\nINGRESE CUALQUIER NUMERO DE LA TABLA DE MULTIPLICAR: ");
 scanf("%i",&b);
 while(a<11)
 {
 printf("%dx%d=%d\n",b,a,a*b);
 a++;
 }
 getch();
return (0);
  }

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
float x,y;
printf("\nEscribe cualquier numero: ");
scanf("%f", &x);
y=sqrt(x);
printf("\nLa raiz cuadrada de %.2f es %.2f", x, y);
printf("\n");
}

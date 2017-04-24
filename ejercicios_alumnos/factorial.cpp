#include<conio.h>
#include<stdio.h>
int main()
{
    int x, factorial, numero;
    printf("Agregar numero para sacar factorial:\t");
    scanf("%d",&numero);
    x = 1;
    factorial = 1;
    for(x=1; x <= numero; x++)
      {
         factorial = factorial * x;
      }
    printf("El factorial de:%d es: %d",numero,factorial);
    getch();
}

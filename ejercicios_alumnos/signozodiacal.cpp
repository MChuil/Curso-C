#include<stdio.h>
#include<conio.h>

main()
{
printf("\nPROGRAMA QUE PROPORCIONA TU SIGNO ZODIACAL.\n");
printf("ALUMNO: JOSE LUIS LORENZANA DE LA ROSA.\n");
printf("MATERIA: ESTRUCTURA DE DATOS.\n");
printf("DOCENTE: JESUS REY CANCINO SOLIS.\n");
printf("CUATRIMESTRE:3R I.S.C SEMIESCOLARIZADO.\n");
int dia, mes;

printf("\nMES DE NACIMIENTO: ");
scanf ("%i", &mes);
printf("DIA DE NACIMIENTO: ");
scanf("%i", &dia);

if((mes == 3 && dia >= 21) || (mes == 4 && dia <=20))
printf("\n Signo Zodiacal : ARIES.");

else if(( mes == 4 && dia >=21) || (mes == 5 && dia <= 21))
printf("\n Signo Zodiacal : TAURO.");

else if(( mes == 5 && dia >=5) || (mes == 6 && dia <= 21))
printf("\n Signo Zodiacal : GEMINIS.", 134);

else if(( mes == 6 && dia >=21) || (mes == 7 && dia <= 23))
printf("\n Signo Zodiacal : CANCER.", 160);

else if(( mes == 7 && dia >=24) || (mes == 8 && dia <= 23))
printf("\n Signo Zodiacal : LEO.");

else if(( mes == 8 && dia >=24) || (mes == 9 && dia <= 23))
printf("\n Signo Zodiacal : VIRGO.");

else if(( mes == 9 && dia >=24) || (mes == 10 && dia <= 23))
printf("\n Signo Zodiacal : LIBRA.");

else if(( mes == 10 && dia >=24) || (mes == 11 && dia <= 22))
printf("\n Signo Zodiacal : ESCORPION.");

else if(( mes == 11 && dia >=23) || (mes == 12 && dia <= 21))
printf("\n Signo Zodiacal : SAGITARIO.");

else if(( mes == 12 && dia >=22) || (mes == 1 && dia <= 20))
printf("\n Signo Zodiacal : CAPRICORNIO.");

else if(( mes == 1 && dia >=21) || (mes == 2 && dia <= 19))
printf("\n Signo Zodiacal : ACUARIO.");

else if(( mes == 2 && dia >=20) || (mes == 3 && dia <= 20))
printf("\n Signo Zodiacal : PISCIS");

getch();
return 0;
}


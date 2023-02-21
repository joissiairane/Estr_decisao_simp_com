#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	setlocale(LC_ALL,"Portuguese");
 	//declarando variáveis
 	float a,b,c,x1,x2,delta;
 	//entrada de dados
 	
printf("digite a : ");
scanf ("%f",&a);
printf("digite b: ");
scanf("%f",&b);
printf("digite c: ");
scanf("%f",&c);
delta=pow(b,2)-4*a*c;
printf("O valor de delta é :%f \n\n\n",delta);
if(delta >=  0 )
{

x1= (-b + sqrt(delta))/(2*a);
x2=(-b - sqrt(delta) )/(2*a);
printf("\nx1 é :%f" ,x1 );
printf("\nx2 é :%f" ,x2);
}
else

 printf ("\nE delta não possui raiz quadrada.");
  
	return 0;
}

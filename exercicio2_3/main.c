#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	//declarando vari�veis
float	kilospescados;
float multa;
// entrada de dados 
printf("Digite quantos kilos de peixes foram pescados.\n");
scanf("%f",&kilospescados);
//executando comandos
if (kilospescados>50)
{
multa=(kilospescados-50)*4.00;
printf ("Valor da multa � R$ %.2f .",multa);
}
else
printf("N�o pagar� multa.");
	return 0;
}

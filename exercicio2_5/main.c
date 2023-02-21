#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"Portuguese");
	//declarando variáveis
	int idade ,nasc, ano_atual;
	//entrada de dados
	printf ("Em que ano estamos: ");
	scanf ("%d",&ano_atual);
	printf ("Em que ano nasceu: ");
	scanf("%d",&nasc);
	//executando comando
	idade=ano_atual-nasc;
	//saída de dados 
	if (idade>=18)
	printf ("voce tem %d anos e atigiu a maioridade. ", idade);
	else 
	printf ("voce tem %d anos e não atigiu a maioridade.",idade);
	
	return 0;
}

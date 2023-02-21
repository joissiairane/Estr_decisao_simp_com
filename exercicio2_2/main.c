#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	setlocale(LC_ALL,"Portuguese");
 	//declarando variáveis
 	float homem,mulher,sexo,alt;
 	//entrada de dados
 	printf ("Para homem digite: 1/Para mulher: 2 \n");
 	scanf("%f",&sexo);
 	printf("Digite sua altura:\n");
 	scanf("%f",&alt);
 	
 	if (sexo==1)
 	{
 	 homem=(72.7*alt)-58;	
	 printf("Seu peso ideal é %.3f kg " ,homem);
    }
 	if(sexo==2) 
 	{
 	mulher=(62.1*alt)-44.7;
 	printf("Seu peso ideal é %.3f kg ",mulher);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
  main()
{
	setlocale(LC_ALL,"Portuguese");
char senha[5]=("ASDFG");
char tentativa[5];
printf("Digite uma senha de 5 letras mai�scula:");
scanf("%s",&tentativa);
if (strcmp(senha,tentativa)==0)
{
	printf("Senha v�lida!");
}
else
{
	printf("Senha inv�lida!");
}
return 0;
}



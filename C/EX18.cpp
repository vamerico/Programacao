#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int peso,retorno;
float altura,imc;
char sexo[10];
char base1[10] = "masculino";
int x=0;

int main()
{
	while(x==0)
	{
		printf("\nInsira o peso\n");
		scanf("%d",&peso);
		printf("\nInsira a altura em cm\n");
		scanf("%f",&altura);
		printf("\nInsira o sexo\n");
		scanf("%s",&sexo);
		
		imc=peso/(altura*altura);
		
		retorno = strcmp (sexo,base1);
		
		if(retorno == 0)
		{
			if(imc<20)
			{
				printf("\nVoce esta abaixo do peso\n");
			}
			else if(imc>=25)
			{
				printf("\nVoce esta acima do peso\n");
			}
			else
			{
				printf("\nVoce esta no peso ideal");
			}
		}
		if(retorno != 0)
		{
			if(imc<19)
			{
				printf("\nVoce esta abaixo do peso\n");
			}
			if(imc>=24)
			{
				printf("\nVoce esta acima do peso\n");
			}
			else
			{
				printf("\nVoce esta no peso ideal");
			}
		}
		
	
	}
	return 0;
	
}

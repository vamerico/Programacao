#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

float peso,altura,imc;
int x=0;

int main()
{
	while(x==0)
	{
		printf(" \n Digite o seu peso:\n");
		scanf("%f",&peso);
		printf("\n Digite sua altura:\n");
		scanf("%f",&altura);
		imc = peso/(altura*altura);
		printf("\n Seu IMC e de : %f", imc);
		
		if(imc<20)
		{
				printf(" \n Abaixo do peso\n");
				
		}
		if(20<=imc)
		{
			if(imc<25)
			{
			  printf(" \n Peso ideal\n");	
			}
			else
			{
				goto ab;
			}
			
		}
		ab:
		if(imc>25)
		{
			printf(" \n Acima do peso\n");
		}
		
	}
}



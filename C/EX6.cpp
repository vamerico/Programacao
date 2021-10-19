#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

float cotacao,quantidade,real;
int x=0;

int main()
{
	while(x==0)
	{
		printf("\n Digite a cotacao atual do dolar:\n");	
		scanf("%f",&cotacao);
		printf("\n Digite a quantidade de dolares que voce possui:\n");
		scanf("%f",&quantidade);
		real=cotacao*quantidade;
		printf("\n Voce possui em reais: %f \n",real);	
	
	}
	
}

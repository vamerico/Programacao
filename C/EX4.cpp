#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

float v1,v2,v3,v4,resultado;
int x = 0;

int main()
{
	while(x==0)
	{
		printf("\n Digite o primeiro valor: \n");
		scanf("%f",&v1);
		printf("\n Digite o segundo valor: \n");
		scanf("%f",&v2);
		printf("\n Digite o terceiro valor: \n");
		scanf("%f",&v3);
		printf("\n Digite o quarto valor: \n");
		scanf("%f",&v4);
		resultado = (v1+v2+v3+v4)/4;
		printf("\n A media aritmetica dos valores inseridos e: %f", resultado);
		
	}
}

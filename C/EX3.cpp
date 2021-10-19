#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

float base, altura,area;
int x = 0;

int main ()
{
	while(x==0)
	{
		printf(" \n Digite a medida da base do triangulo:\n");
		scanf("%f",&base);
		printf("\n Digite a medida da altura do triangulo:\n");
		scanf("%f",&altura);
		area = (base*altura)/2;
		printf("\n A area do triangulo e: %f ", area);
	}
}

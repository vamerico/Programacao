#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


float graus,far;
int x=0;

int main()
{
	
	
		printf("\n Insira o valor da temperatura em Graus Celsius: \n");
		scanf("%f",&graus);
		far=(graus*1.8)+32;
		printf(" \n A temperatura corresponde a %f Fahrenheit \n", far);
	
}

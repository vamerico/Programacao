#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>

int x,soma;

int main()
{
	soma=0;
	for(x=0 ; x<=100 ; x++)
	{
		soma=soma+x;
	}
	printf("A soma dos numeros positivos de 1 a 100 e: %d",soma);
}

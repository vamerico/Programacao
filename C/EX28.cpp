#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>

int tab,x,tecla;

int main()
{
	printf("Tabuada de 1 a 20:\n");
	for( x=0 ; x<=20 ; x++)	{
		
		tab = x*x;
		printf("%dx%d = %d \n", x,x,tab);
		if(x==10)
		{
			printf("Precione 2 e Enter para continuar\n");
			scanf("%d",&tecla);
			continue;
		}
		}
		
	
}

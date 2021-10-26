#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>

int x,d;
int a = 1;
int b = 1;
int c = 1;


int main()
{
	printf("Primeiros 20 numeros da Sequencia de Bergamaschi\n");
	printf("1\n");
	printf("1\n");
	printf("1\n");
    
    
for(x=0 ; x<17 ; x++)
	{
		
		
				d=a+b+c;
				printf("%d\n",d);
				a = b;
      			b = c;
      			c = d;
		
	}

}

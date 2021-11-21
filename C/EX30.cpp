#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>

int x;
int a = 1;
int b = 1;
int c;

int main()
{
	printf("Primeiros 30 numeros da Sequencia de Fibonacci\n");
	printf("1\n");
	printf("1\n");
for(x=0 ; x<28 ; x++)
	{
		
		
				c=a+b;
				printf("%d\n",c);
				a = b;
      			b = c;
		
	}

}

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>


int num,x;
int a=2;
int soma=3;

int main()
{
	ab:
	printf("Insira um numero positivo menor que cem:\n");
	scanf("%d",&num);
	if((num>100)||(num<0))
	{
		printf("Insira somente numeros positivos e menores que cem\n");
		goto ab;
	}
	printf("\n\n%d\n",a);
	for (x=0 ; x<=(num-2) ; x++)
	{
		a=a+soma;
		printf("%d\n",a);
		soma = soma+2;
		
		
	}
}

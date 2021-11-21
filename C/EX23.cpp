#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


float valor1,valor2;

int main()

{
	ret1:
	printf("\nInsira um valor\n");
	scanf("%f",&valor1);
	printf("\nInsira mais um valor\n");
	ret:
	scanf("%f",&valor2);
	
	if(valor1>valor2)
	{
		printf("\nInsira novamente o segundo valor\n");
		goto ret;
	}
	
	goto ret1;
	
}

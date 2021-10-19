#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


float valor = 1;

int main()

{
	ret:
	printf("\nInsira um valor\n");
	scanf("%f",&valor);
	
	while(valor>=0)
	{
		printf("\nInsira um valor\n");
		scanf("%f",&valor);
	}
	
	printf("\nInsira somente valores positivos\n");
	goto ret;
}

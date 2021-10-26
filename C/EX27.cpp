#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>


int x,num,inter,tab;

int main()
{
	while(1)
	{
	
	ab:
	printf("Insira um numero positivo para saber a tabuada\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Insira somente numeros positivos\n");
		goto ab;
	}
	ac:
	printf("Insira um numero maior que o primeiro para ser o intervalo de calculo da tabuada\n");
	scanf("%d",&inter);
	if(inter<num)
	{
		printf("Insira somente nuemros maiores que a primeira solicitacao\n");
		goto ac;
	}
	printf("Tabuada do %d no intervalo de 0 a %d: \n",num, inter);
	
	for(x=inter ; x>=0 ; x--)
	{
		tab = num*x;
		printf("%dx%d = %d \n", num,x,tab);
	}

}
}

	

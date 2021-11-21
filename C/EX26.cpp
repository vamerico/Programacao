#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <iostream>


int x,num,tab;

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
	printf("Tabuada do %d\n",num);
	for(x=0 ; x<=10 ; x++)
	{
		tab = num*x;
		printf("%dx%d = %d \n", num,x,tab);
	}
}
}

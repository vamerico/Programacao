#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int x = 0;
float p1,p2,media;

int main()
{
	while(x==0)
	{
		printf("\nInsira a p1\n");
		scanf("%f",&p1);
		printf("\nInsira a p2\n");
		scanf("%f",&p2);
		
		media = (p1+(2*p2))/3;
		
		if(media>=5)
		{
			printf("\nAluno Aprovado");
			
		}
		else
		{
			printf("\nAluno Reprovado");
		}
	}
}

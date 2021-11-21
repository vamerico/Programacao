#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int ladoa,ladob,ladoc;
int x=0;

int main()
{
	
	
		printf(" \n Digite a primeira medida:\n");
		scanf("%d",&ladoa);
		printf(" \n Digite a segunda medida:\n");
		scanf("%d",&ladob);
		printf(" \n Digite a terceira medida:\n");
		scanf("%d",&ladoc);
		
		if(((ladoa*ladoa)+(ladob*ladob))==(ladoc*ladoc))
		{
			printf("\nIsso e um triangulo retangulo");
		}
		else if(((ladoa*ladoa)+(ladoc*ladoc))==(ladob*ladob))
		{
			printf("\nIsso e um triangulo retangulo");
		}
		else if(((ladob*ladob)+(ladoc*ladoc))==(ladoa*ladoa))
		{
			printf("\nIsso e um triangulo retangulo");
		}
		else
		{
			printf("\nIsso nao e um triangulo retangulo");
		}
	
}

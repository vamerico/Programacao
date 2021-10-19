#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int ladoa=0;
int ladob=0;
int area=0;
int x=0;

int main()
{
	while(x==0)
	{
		printf(" \n Digite a medida da base do retangulo:\n");
		scanf("%d",&ladoa);
		printf("\n Digite a medida da altura do retangulo:\n");
		scanf("%d",&ladob);
		area = (ladoa*ladob);
		printf(" A area do retangulo e: %d",area);
	}
	
	return(0);
}

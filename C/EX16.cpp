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
		
		if((ladoa+ladob)>=ladoc)
		{
			if((ladoa+ladoc)>=ladob)
			{
				if((ladob+ladoc)>=ladoa)
				{
					if((ladoa!=ladob)&&(ladoa!=ladoc)&&(ladob!=ladoc))
					{
						printf("\nIsso e um triangulo escaleno");
						
					}
					else if((ladoa==ladob)&&(ladoa==ladoc)&&(ladob==ladoc))
					{
						printf("\nIsso e um triangulo equilatero");
					}
					else
					{
						printf("\nIsso e um triangulo isoceles");
					}
					
					}
					else
			{
				printf("\nIsso nao e um triangulo\n");	
			}
				}
				else
			{
				printf("\nIsso nao e um triangulo\n");	
			}
			
			}
			
			
		
		else
		{
			printf("\nIsso nao e um triangulo\n");
		}
	
	
}

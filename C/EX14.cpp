#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int a,b,c,x = 0;

int main()
{
	
	
			printf(" \n Digite o primeiro valor:\n");
			scanf("%d",&a);
			printf(" \n Digite o segundo valor:\n");
			scanf("%d",&b);
			printf(" \n Digite o terceiro valor:\n");
			scanf("%d",&c);
			
			if(a>b)
			{
				if(a>c)
				{
					printf(" \n O maior valor inserido foi:%d",a);
				}
				else 
				{
					printf(" \n O maior valor inserido foi:%d",c);	
				}
				
			}
			
				if(b>a)
			{
				if(b>c)
				{
					printf(" \n O maior valor inserido foi:%d",b);
				}
				else 
				{
					printf(" \n O maior valor inserido foi:%d",c);	
				}
			}

	
}

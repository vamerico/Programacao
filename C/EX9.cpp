#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int a,b,x = 0;

int main()
{
	while(x==0)
	{
			printf(" \n Digite o primeiro valor:\n");
			scanf("%d",&a);
			printf(" \n Digite o segundo valor:\n");
			scanf("%d",&b);
			
			if(a>b)
			{
				printf(" \n O maior valor inserido foi:%d",a);
			}
			
				if(b>a)
			{
				printf(" \n O maior valor inserido foi:%d",b);
			}

	}
}

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

char s[5];
char m[5] = "m";
char f[5] = "f";

int retorno;

int main()
{
	
	ret:
	printf("\nInsira f ou m, para feminino e masculino\n");
	scanf("%s",&s);
	
	retorno = strcmp(s,m);
	if(retorno !=0)
	{
		retorno = strcmp(s,f);
		if(retorno !=0)
		{
			printf("\nInsira somente f ou m\n");
			goto ret;
		}
		else
		{
			goto ret;
		}
	}
	else
	{
		goto ret;
	}
}


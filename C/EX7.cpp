#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


float p1,p2,p3,p4,p5,total,dinheiro,troco;
int x=0;

int main()
{
	while(x==0)
	{
		printf("\n Digite o valor do primeiro produto:\n");
		scanf("%f",&p1);
		printf("\n Digite o valor do segundo produto:\n");
		scanf("%f",&p2);
		printf("\n Digite o valor do terceiro produto:\n");
		scanf("%f",&p3);
		printf("\n Digite o valor do quarto produto:\n");
		scanf("%f",&p4);
		printf("\n Digite o valor do quinto produto:\n");
		scanf("%f",&p5);
		total=(p1+p2+p3+p4+p5);
		printf("\n O valor total da compra e: %f", total);
		printf("\n Insira o valor que ira pagar: \n");
		scanf("%f",&dinheiro);
		troco=dinheiro-total;
		printf("O seu troco e de %f reais",troco);
		
	}
}

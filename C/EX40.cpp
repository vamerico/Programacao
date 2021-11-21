#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int num[10][10];
int quant1,quant2,a,b,pos,verf,denovo;

int main()
{

ab:
printf("Insira o tamanho da matriz:\n"); 
scanf("%d", &quant1);
printf("Insira o segundo valor para o tamanho da matriz:\n"); 
scanf("%d", &quant2);

if(quant1>10)
{
	printf("Insira valores menores que 10\n");
	goto ab;
}
if(quant2>10)
{
	printf("Insira valores menores que 10\n");
	goto ab;
}
printf("Digite numeros para preencher a matriz %dx%d \n",quant1,quant2);

for( a=0; a<quant1; a++)
  {
      for(b=0; b<quant2; b++)
	  {
        scanf("%d", &num[a][b]);
      }
  }

bc:
printf("Digite o valor que quer consultar a posicao \n");
scanf("%d", &pos);

for( a=0; a<quant1; a++)
  {
      for(b=0; b<quant2; b++)
	  {
       if(num[a][b]==pos)
       {
       		verf=1;
       		printf("A posicao do valor e: %d x %d",a,b);
	   }
      }
  }
  
if(verf==0)
{
	printf("Este valor nao existe na matriz\n ");
	printf("Deseja consultar outro valor? Digite 1 para ""sim"" e 2 para ""nao""\n ");
	scanf("%d",&denovo);
	if(denovo==1)
	{
		goto bc;
	}
	else
	{
		
	}
}
}

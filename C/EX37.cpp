#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int num[20];
int quant,a,b,consult;

int main()
{

ab:
printf("insira  quantos numeros quer armazenar:\n"); 
scanf("%d", &quant);
if(quant>20)
{
	printf("Insira um valor menor que 20\n");
	goto ab;
}

printf("insira  os numeros desejados:\n");
  
  
for(a=0; a<quant; a++)
  {
      scanf("%d", &num[a]);
  }


 
printf("insira  insira um valor para consultar:\n");  
scanf("%d", &consult);
 
for(b=0; b<quant ; b++)
  {
      
      if(consult==num[b])
      {
      	printf("A posicao deste numero e: %d \n",b);
	  }
  }
  
}
           


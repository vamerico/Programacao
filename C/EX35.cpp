#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int num[20];
int comp,a,b,mult;

int main()
{

printf("insira  20 numeros:\n");
  
  
for(a=0; a<20; a++)
  {
      scanf("%d", &num[a]);
  }

printf("insira  uma constante multiplicativa:\n");
scanf("%d", &mult);
 
 comp=0;
 
for(b=0; b< 20; b++)
  {
      
      num[b] = num[b]*mult;
  }
           
      printf ("Os numeros inseridos e multiplciados pela constante foram:\n");
      
for(comp=0; comp< 20; comp++)
{
	printf("%d \n",num[comp]);
}

}

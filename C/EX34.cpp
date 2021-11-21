#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int num[10];
int comp,a,b;

int main()
{

printf("insira  10 numeros:\n");
  
  
for(a=0; a<10; a++)
  {
      scanf("%d", &num[a]);
  }
 
 comp=0;
 
for(b=0; b< 10; b++)
  {
      if (num[b] >= comp)
	  {
          comp=num[b];
      }
  }
           
      printf ("O maior numero foi : %d",comp);

}

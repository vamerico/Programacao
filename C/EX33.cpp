#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


int a,i;

int main()
{

int num[10];

printf("Insira 10 numeros:\n");
  
  
  for( a=0; a<10; a++)
  {
      scanf("%i", &num[a]);
  }
 
printf("Os numeros inseridos foram:\n");

  for( i=9; i>= 0; i--)
  {
      printf(" %i \n", num[i]);
  }
 
  return 0;
}

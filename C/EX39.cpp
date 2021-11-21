#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


int num[3][4];
int a,b,mult;
 
int main()
 {
 
printf("Digite numeros para preencher a matriz 3x4 \n");
  
for( a=0; a<3; a++)
  {
      for(b=0; b<4; b++)
	  {
        scanf("%d", &num[a][b]);
      }
  }
  
printf("insira  uma constante multiplicativa:\n");
scanf("%d", &mult);
 
for( a=0; a<3; a++)
  {
      for(b=0; b<4; b++)
	  {
        num[a][b]= num[a][b]*mult;
      }
  }
 
printf("A matriz, apos multiplicada, ficou peenchida com estes valores: \n");
  for(a=0; a<3; a++)
  {
      for(b=0; b<4; b++)
	  {
        printf("%d \n", num[a][b]);
      }
    
  }
 

}

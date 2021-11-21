#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

 
int num[2][3];
int a,b;
 
int main()
 {
 
printf("Digite numeros para preencher a matriz 2x3 \n");
  
for( a=0; a<2; a++)
  {
      for(b=0; b<3; b++)
	  {
        scanf("%d", &num[a][b]);
      }
  }
 
printf("A matriz foi preenchida com: \n");
  for(a=0; a<2; a++)
  {
      for(b=0; b<3; b++)
	  {
        printf("%d \n", num[a][b]);
      }
    
  }
 

}

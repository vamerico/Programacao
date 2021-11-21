#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int x = 0;
float velo,acel,temp,veloinit;

int main()
{
	
	
		printf("\nInsira a aceleracao\n");
		scanf("%f",&acel);
		printf("\nInsira a velocidade inicial\n");
		scanf("%f",&veloinit);
		printf("\nInsira o tempo do percurso\n");
		scanf("%f",&temp);
		
		velo= veloinit + (acel*temp);
		printf("\nA velocidade do veiculo e de: %f m/s",velo);
		
		if(velo<=40)
		{
			printf("\nVeiculo muito lento");
		}
		else if((velo>40)&&(velo<=60))
		{
			printf("\nVelocidade Permitida");
		}
		else if((velo>60)&&(velo<=80))
		{
			printf("\nVelocidade de Cruzeiro");
		}
		else if((velo>80)&&(velo<=120))
		{
			printf("\nVeiculo rapido");
		}
		else
		{
			printf("\nVeiculo muito rapido");
			
		}
	
}

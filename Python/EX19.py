aceleracao = float(input('Digite a aceleracao: '))
 
veloinit = float(input('Digite a velocidade inical: '))

temp = float(input('Digite o tempo do percurso: '))

velo = (veloinit + (aceleracao*temp))

print("A velocidade do veiculo e de: ",velo,"m/s");

if(velo<=40):
		
	print("Veiculo muito lento")
		
elif((velo>40)and(velo<=60)):
		
	print("Velocidade Permitida")
		
elif((velo>60)and(velo<=80)):
		
	print("Velocidade de Cruzeiro")
		
elif((velo>80)and(velo<=120)):
		
	print("Veiculo rapido")
		
else:
		
	print("Veiculo muito rapido")
			
		
			
		
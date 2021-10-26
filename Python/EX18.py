alt = float(input('Digite a sua altura em (m): '))
 
peso = float(input('Digite o seu peso (em Kg): '))

sexo = input('Digite o sexo (m - masculino / f - feminino): ')

imc = peso / (alt * alt)

if(sexo == 'm'):
		
	if(imc<20):
			
		print("Voce esta abaixo do peso")
			
	elif(imc>=25):
			
		prit("Voce esta acima do peso")
			
	else:
			
	    print("Voce esta no peso ideal")
			
elif(sexo == 'f'):
		
	if(imc<19):
			
		print("Voce esta abaixo do peso")
			
	elif(imc>=24):
			
		print("Voce esta acima do peso")
			
	else:
			
		print("Voce esta no peso ideal")
			
		
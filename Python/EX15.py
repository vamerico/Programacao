alt = float(input('Digite a sua altura em (m): '))
 
peso = float(input('Digite o seu peso (em Kg): '))
 
imc = peso / (alt * alt)


if(imc<20):
    print('Abaixo do Peso')
    
elif(imc>=25):
    print('Acima do Peso')
    
else:
    print('Peso Ideal')
    

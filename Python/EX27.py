numero = int(input('digite um numero positivo: '))

while(numero<=0):
    print("Digite somente numeros positivos")
    numero = int(input('digite um numero positivo: '))
    
numero2 = int(input('digite o intervalo da tabuada: '))
while(numero2<numero):
    print("digite um numero maior que o primeiro")
    numero2 = int(input('digite o intervalo da tabuada: '))

while(numero2<=0):
    print("Digite somente numeros positivos")
    numero2 = int(input('digite o intervalo da tabuada: '))

print("Tabuada do ",numero,"no intervado de",numero2)

for i in range( 1, numero2+1 , 1)	:
	
	tab = numero*i
	print(numero," x",i," = " , tab)
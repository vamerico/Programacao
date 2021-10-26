numero = int(input('digite um numero positivo: '))

while(numero<=0):
    print("Digite somente numeros positivos")
    numero = int(input('digite um numero positivo: '))

print("Tabuada do ",numero)

for i in range( 1, 11 , 1)	:
	
	tab = numero*i
	print(numero," x",i," = " , tab)
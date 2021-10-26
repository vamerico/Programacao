valor1 = int(input('digite um valor: '))
valor2 = int(input('digite outro valor: '))
valor3 = int(input('digite outro valor: '))

if(valor1>valor2):
    if(valor1>valor3):
        print("O maior valor e: ",valor1)
        
    else:
        print('O maior valor e :',valor3)

else:
    if(valor2>valor3):
        print('O maior valor e: ', valor2)
    
    else:
        print('O maior valor e: ', valor3)

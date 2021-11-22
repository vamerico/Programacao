num = []
segvet = []


print('insira  20 numeros:')
 
for i in range(0, 20, 1):
    x = int(input())
    num.append(x)

b = int(input('insira  uma constante multiplicativa:'))
 
for i in range(0, 20, 1):
    y=num[i]*b
    segvet.append(y)       
print('Os numeros inseridos e multiplciados pela constante foram:')
      
for i in range(0, 20, 1):
    print("",segvet[i])



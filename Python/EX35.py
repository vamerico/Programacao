num = []


print('insira  20 numeros:')
  
  
for i in range(0, 20, 1):
    x=int(input())
    num.append(x)

b=int(input('insira  uma constante multiplicativa:'))

comp=0;
 
for i in range(0, 20, 1):
    num[i] = num[i]*b
  
           
print('Os numeros inseridos e multiplciados pela constante foram:')
      
for i in range(0, 20, 1):
	print("",num[i])

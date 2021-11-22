num = []
x=21
z=0
while(x>20):
    x = int(input('insira  quantos numeros quer armazenar:'))
    if(x>20):
        print('Insira um valor menor que 20')
        

print('insira  os numeros desejados')
   
 
for i in range(0, x, 1):
    b = int(input())
    num.append(b)

c = int(input('insira um valor para consultar:'))

for i in range(0, x, 1):
    if(c==num[i]):
        print('A posicao deste numero e:',i)
        z=1 
if(z!=1):
   print('Este numero não existe no vetor') 
	  
  
  

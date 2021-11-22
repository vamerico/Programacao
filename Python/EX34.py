num = []

print('insira  10 numeros: ')

for i in range(0, 10, 1):
  x=int(input())
  num.append(x)

comp=0
 
for i in range(0, 10, 1):
 
    if(num[i] >= comp):
        comp=num[i]
      
  
           
print('O maior numero foi :' , comp)


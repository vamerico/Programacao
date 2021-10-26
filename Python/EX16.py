ladoa = int(input('digite o valor do primeiro lado: '))
ladob = int(input('digite o valor do segundo lado: '))
ladoc = int(input('digite o valor do terceiro lado: '))

if((ladoa+ladob)>=ladoc):
		
			if((ladoa+ladoc)>=ladob):
			
				if((ladob+ladoc)>=ladoa):
				
					if((ladoa!=ladob)and(ladoa!=ladoc)and(ladob!=ladoc)):
					
						print("Isso e um triangulo escaleno")
						
					
					elif((ladoa==ladob)and(ladoa==ladoc)and(ladob==ladoc)):
					
						print("Isso e um triangulo equilatero")
					
					else:
					
						print("Isso e um triangulo isoceles")
					
					
					
				else:
				    print("Isso nao e um triangulo")
			
				
			else:
			    
		         print("Isso nao e um triangulo")
			
else:
			    
    print("Isso nao e um triangulo")
		    
			    
		
		
		
ladoa = int(input('digite o valor do primeiro lado: '))
ladob = int(input('digite o valor do segundo lado: '))
ladoc = int(input('digite o valor do terceiro lado: '))


		
if(((ladoa*ladoa)+(ladob*ladob))==(ladoc*ladoc)):
    print("Isso e um triangulo retangulo")
		
elif(((ladoa*ladoa)+(ladoc*ladoc))==(ladob*ladob)):
		
	print("Isso e um triangulo retangulo")
		
elif(((ladob*ladob)+(ladoc*ladoc))==(ladoa*ladoa)):
		
	print("Isso e um triangulo retangulo")
		
else:
    print("Isso nao e um triangulo retangulo")

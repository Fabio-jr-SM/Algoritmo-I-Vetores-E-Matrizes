programa
{
	
	funcao inicio()
	{
		inteiro numero[10],mult[10],i

		para(i=0;i<10;i++){
			escreva("Digite numeros: ")
			leia(numero[i])

			mult[i]=numero[i]*5
		}

		para(i=0;i<10;i++){
			escreva(numero[i]," | ",mult[i],"\n")
		}
	}
}

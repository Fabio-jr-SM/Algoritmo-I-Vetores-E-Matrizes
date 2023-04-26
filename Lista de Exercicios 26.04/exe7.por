programa
{
	
	funcao inicio()
	{
		inteiro numero[10], ref,i,quant=0
		
		para(i=0;i<10;i++){
			
escreva("Digite valores :) ")
			leia(numero[i])
		}

		escreva("Digite valor referencia :) ")
		leia(ref)


		escreva("\nValores Maior que o de referencia\n")
		para(i=0;i<10;i++){
			se(numero[i]>ref){
				escreva(numero[i],"  ")
			}
		}
		escreva("\n")


		escreva("\nquantidade de valores menores que o de referencia\n")
		para(i=0;i<10;i++){
			se(numero[i]<ref){
				quant++
			}
		}
		escreva(quant,"\n")



		inteiro quantV=0
		escreva("\nquantidade de vezes que o numero de referencia aparece\n")
		para(i=0;i<10;i++){
			se(numero[i]==ref){
				quantV++
			}
		}
		escreva(quantV,"\n")
		
	}
}

programa
{
	
	funcao inicio()
	{
		inteiro numero[5],i,maiorV=0,soma_num=0,media

		para(i=0;i<5;i++){
			escreva("Digite numeros: ")
			leia(numero[i])

			soma_num=soma_num+numero[i]
		}

		escreva("Valores pares:\n")
		para(i=0;i<5;i++){
			se(numero[i]%2==0){
				escreva(numero[i]," ")
			}
		}

		escreva("\n")

		escreva("Maior valor no vetor:\n")
		para(i=0;i<5;i++){
			se(numero[i]>maiorV){
               	maiorV=numero[i]
            	}
		}
		escreva(maiorV,"\n")


		escreva("Menor valor no vetor:\n")
		para(i=0;i<5;i++){
			se(numero[i]<maiorV){
               	maiorV=numero[i]
            	}
		}
		escreva(maiorV,"\n")
		

		media=soma_num/5

		escreva("Valores maior que a media:\n")
		para(i=0;i<5;i++){
			se(numero[i]>media){
               	escreva(numero[i]," ")
            	}
		}
	}
}

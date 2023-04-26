programa
{
	
	funcao inicio()
	{
		inteiro nota[10], i=0, posicao[10],soma_nota=0,cont=0, media

		//Ler nota dos alunos e fazer soma
		para(i=0;i<10;i++){
			escreva("Digite a nota do aluno ",i+1,": ")
			leia(nota[i])

			soma_nota=soma_nota+nota[i]
		}

		media=soma_nota/10

		//
		para(i=0;i<10;i++){
			se(nota[i]>=media){
				posicao[cont]=i
				cont++
			}
		}

		para(i=0;i<cont;i++){
			escreva(nota[i]," ")
		}
		
		escreva("\n")
		
		para(i=0;i<cont;i++){
			escreva(posicao[i]," ")
		}
	}
}

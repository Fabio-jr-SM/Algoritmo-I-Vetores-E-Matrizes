programa
{
	
	funcao inicio()
	{
		inteiro vetor[10], a, b, c, i, resulA=0, resulB=0, resulC=0

		para(i=0; i<10; i++){
			escreva("Digite o numero:")
			leia(vetor[i])
		}

		escreva("Digite o valor de A:")
		leia(a)
		escreva("Digite o valor de B:")
		leia(b)
		escreva("Digite o valor de C:")
		leia(c)

		 para(i=0; i<10; i++){
		 	se(a==vetor[i]){
		 		resulA++
		 	}
			se(b==vetor[i]){
				resulB++
			}
			se(c==vetor[i]){
				resulC++
			}
		 }
		 escreva("A quantidade de vezes que A são:", resulA,"\n")
		  escreva("A quantidade de vezes que B são:", resulB,"\n")
		   escreva("A quantidade de vezes que C são:", resulC,"\n")
	}
}

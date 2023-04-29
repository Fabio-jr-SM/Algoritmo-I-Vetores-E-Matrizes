programa
{
	
	funcao inicio()
	{
	inteiro vetorx[10], vetory[10], i, produesc=0

	para(i=0; i < 10; i++){
		 escreva("Digite o valor de x e y:")
		 leia(vetorx[i])
		 leia(vetory[i])

		 produesc=vetorx[i]*vetory[i]+produesc
	}
	 escreva("O resultado do Produto Escalar é,", produesc)
		
	}
}

programa {
  funcao inicio() {
    inteiro numero[10],i,somaPar=0,subImpar=0

    para(i=0;i<10;i++){
      escreva("Digite numeros: ")
      leia(numero[i])
    }

    para(i=0;i<10;i++){
      se(i%2==0){
        somaPar=numero[i]+somaPar
      } senao {
        subImpar=numero[i]-subImpar
      }
    }

    escreva("\n-----------------------------------\n")
    escreva("\nVetor digitado:\n")
    para(i=0;i<10;i++){
      escreva(numero[i],"  ")
    }

    escreva("\nSoma numero na posição par: ",somaPar)
    escreva("\nSubtração numero na posição impar: ",subImpar)

  }
}

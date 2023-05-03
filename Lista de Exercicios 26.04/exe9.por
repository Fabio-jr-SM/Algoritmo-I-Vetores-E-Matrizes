programa {
  funcao inicio() {
    inteiro numero[12], par[12], impar[12],i,j=0,k=0

    para(i=0;i<12;i++){
      escreva("Digite numeros: ")
      leia(numero[i])

      se(numero[i]%2==0){
        par[j]=numero[i]
        j++
      } senao {
        impar[k]=numero[i]
        k++
      }
    }

    escreva("\n-----------------------------------\n")
    escreva("\nVetor digitado:\n")
    para(i=0;i<12;i++){
      escreva(numero[i],"  ")
    }


    escreva("\nVetor Par:\n")
    para(i=0;i<j;i++){
      escreva(par[i],"  ")
    }


    escreva("\nVetor Impar:\n")
    para(i=0;i<k;i++){
      escreva(impar[i],"  ")
    }
  }
}

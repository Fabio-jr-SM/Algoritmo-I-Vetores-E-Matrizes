#include <stdio.h>

int main()

{

    int n, num, a, cont;

    int soma;

    int vetpar[12];

    int vetimpar[12];

    for(n=1;n<=12;n++)

    {

        printf("digite o %i numero: ", n);

        scanf("%i", &num);

        if(num % 2 == 0)

        {

            vetpar[12] = num;

        }

        if(num % 2 != 0)

        {

            vetimpar[12] = num;

        

        }

        

    }

    for(cont=0;cont<11;cont++) 

    {

        vetpar[12] = vetpar[cont] + num;

    }

    printf("%i", vetpar);

    return 0;

}

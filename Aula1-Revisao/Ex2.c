#include <stdio.h>
#include <stdlib.h>

int main(){

    int num=0, qtd=0, sum=0, mul3=0, mul7=0;
    float perc;

    printf("\nDigite uma série de numeros positivos, se for negativo finaliza.");

    printf("\n\n\tNumero: ");   //Coleta o primeiro numero, se for negativo ja finaliza
    scanf("%d",&num);

    while(num>=0)
    {
        qtd++;      //Contador de numeros

        if(num%3==0)
        {
            mul3++;     //Se for multiplo de 3 aumenta o contador de multiplo de 3

            if(num>10)
            {
                sum+=num;       //E se for maior que 10 ja soma
            }
        }
        if(num%7==0)
        {
            mul7++;     //Se for multiplo de 7 aumenta um no contador para fazer o percentual posteriomente
        }

        printf("\n\n\tNumero: ");   //Coleta outro numero
        scanf("%d",&num);
        
    };

    perc = (float) mul7/qtd*100;
    
    printf("\n\n\n\tA quantidade de numeros lidos é de %d", qtd);
    printf("\n\tSoma dos números multiplos de '3' e maior que '10': %d",sum);
    printf("\n\tA quantidade de numeros multiplos de '3': %d",mul3);
    printf("\n\tO percentual de multiplo de 7 é de: %.2f %%\n\n\n",perc);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, sum = 0, aux = 1;

    printf("\n\n\tDigite um numero: ");   //Coleta o numero
    scanf("%d",&num);

    for(int i = num; i > 0; i--)
    {
        sum += aux;
        aux+=2;
    }

    printf("\n\n\tO quadrado de %d é: %d\n\n",num,sum);


    return 0;
}
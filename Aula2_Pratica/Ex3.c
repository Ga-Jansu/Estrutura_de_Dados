/*Elabore uma função que dado N, calcule a soma S= (1->n) ∑ i ∗ i  . O valor da soma deverá ser impresso no programa principal.*/
#include <stdio.h>
#include <stdlib.h>

void conta(int n, int *sum){
    for(int i=1;i<=n;i++)
    {
        *sum += (i*i);
    }
}

int main(){
    int number, soma=0;

    printf("\n\n\tDigite um numero: ");
    scanf("%d",&number);

    conta(number,&soma);

    printf("\n\n\tA soma dos quadrados de 1 a %d é de: %d\n\n",number,soma);

    return 0;
}

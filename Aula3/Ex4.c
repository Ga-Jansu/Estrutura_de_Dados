/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida elabore uma função que retorne a soma do dobro dos dois números lidos.
 A função deverá também, armazenar o dobro de A na própria variável A e o dobro de B na própria variável B*/
#include <stdio.h>
#include <stdlib.h>

int conta(int *a, int *b){
    int aux=0;

    *a *= 2;
    *b *= 2;

    aux = *a + *b;

    return aux;
}

int main(){
    int A, B, soma;

    printf("\n\n\tDigite um numero: ");
    scanf("%d",&A);

    printf("\n\tDigite outro numero: ");
    scanf("%d",&B);

    soma = conta(&A,&B);

    printf("\n\n\n\tA soma do dobro dos numeros é de: %d\n\n",soma);

    return 0;
}

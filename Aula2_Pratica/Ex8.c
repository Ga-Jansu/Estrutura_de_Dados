/*Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int SomaVet(int v[],int tam){
    if(tam <= 0) return 0;

    return v[tam-1] + SomaVet(v,tam-1);
}

int main(){
    int vet[] = {1,2,3,4,5,6}, sum;
    int i = sizeof(vet) / sizeof(vet[0]);
    system("clear");

    sum = SomaVet(vet,i);

    printf("\n\n\tO resultado é: %d",sum);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
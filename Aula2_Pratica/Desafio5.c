/*Escreva uma função recursiva que retorne o menor elemento em um vetor*/

#include <stdio.h>
#include <stdlib.h>

int MenorVetor(int vet[],int n){
    if (n == 1) return vet[0];  //Verifica se o vetor só tem um elemento, se for ja retorna o elemento

    int menor = MenorVetor(vet,n-1);    //abre todo o vetor recursivamente e atribui o ultimo valor a variavel menor

    if(vet[n-1]<menor)  return vet[n-1];    //Compara e retorna o menor numero.
    else    return menor;  
}

int main(){
    int vet[] = {1,2,3,0,5,6};
    int i = sizeof(vet) / sizeof(vet[0]);
    system("clear");

    int aux = MenorVetor(vet,i);

    printf("\n\n\tA menor elemento do vetor é %d!!",aux);

    getchar();
    getchar(); // Espera o usuário pressionar Enter para encerrar

    system("clear");
    return 0;
}
/*Faça uma função recursiva que permita calcular a média um vetor de tamanho N*/

#include <stdio.h>
#include <stdlib.h>

double recursivo(int vetor[],int i, int tam){
    if (i == tam-1) return vetor[i];

    if(i == 0) return ((vetor[i] + recursivo(vetor,i+1,tam))/tam);
    return vetor[i] + recursivo(vetor,i+1,tam);
}

double Media(int v[], int t){
    return recursivo(v,0,t);
}


int main(){
    int vet[] = {1,2,3,4,5,6};
    double med;
    int i = sizeof(vet) / sizeof(vet[0]);
    system("clear");
    
    med = Media(vet,i);
    
    printf("\n\n\tA media do vetor é %.2f!!",med);

    getchar();
    getchar(); // Espera o usuário pressionar Enter para encerrar

    system("clear");
    return 0;
}

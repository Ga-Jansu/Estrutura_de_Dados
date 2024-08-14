/*Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. */

#include <stdio.h>
#include <stdlib.h>

void imprime(int n){
    if(n < 0){
        return;
    }
    printf("\n\t%d",n);

    imprime(n-1);
}


int main(){
    int num, i=0;
    system("clear");

    do
    {
        printf("\n\n\tInsira um numero positivo: ");
        scanf("%d", &num);
        system("clear");
    }while(num<0);

    printf("\n");
    imprime(num);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
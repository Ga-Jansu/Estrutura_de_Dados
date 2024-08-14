/*Elabore um programa que leia 3 números inteiros. Este programa deverá ter uma função que retorne o fatorial de um
número. Use-a para calcular o fatorial dos números lidos (imprima no programa principal)*/
#include <stdio.h>
#include <stdlib.h>


int fatorial(int num){
    int fat=1;

    for(int i=1;i<=num;i++)
    {
        fat*=i;
    }

    return fat;
}

void ler(int *num){
    printf("\n\n\tInsira um valor: ");
    scanf("%d", num);
    system("clear");
}

int main(){
    int num1, num2, num3, fat1, fat2, fat3;
    system("clear");

    ler(&num1);
    ler(&num2);
    ler(&num3);

    fat1 = fatorial(num1);
    fat2 = fatorial(num2);
    fat3 = fatorial(num3);

    printf("\n\n\tO fatorial de %d é: %d",num1,fat1);
    printf("\n\tO fatorial de %d é: %d",num2,fat2);
    printf("\n\tO fatorial de %d é: %d",num3,fat3);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
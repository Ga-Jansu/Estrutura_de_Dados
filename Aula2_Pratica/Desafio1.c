/*Elabore um programa que leia um número inteiro e construa duas funções: uma que some os dígitos desse número inteiro e outra que determine o maior digito
desse número.*/
#include <stdio.h>
#include <stdlib.h>


void ler(int *n1){
    printf("\n\n\tInsira um numero: ");
    scanf("%d", n1);
    system("clear");
}

void soma(int n){
    int soma=0;
    while(n>0){
        soma += (n%10);
        n/=10;
    }
    printf("\n\n\tA soma dos digitos é: %d\n",soma);
    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
}

void MaiorDigito(int n){
    int maior = (n%10);
    n/=10;
    while(n>0){
        if((n%10)>maior) maior = (n%10);
        n/=10;
    }
    printf("\n\n\tA soma dos digitos é: %d\n",maior);
}

int main(){
    int num;
    system("clear");

    ler(&num);

    soma(num);

    MaiorDigito(num);
    
    getchar(); // Espera o usuário pressionar Enter para encerrar

    system("clear");
    return 0;
}
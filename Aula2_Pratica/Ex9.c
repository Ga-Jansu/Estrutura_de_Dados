/*Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima em base binária*/

#include <stdio.h>
#include <stdlib.h>

void ImprimeBin(int n){
    if(n == 0) return;
    ImprimeBin(n/2);
    printf("%d ",n%2);
}

int main(){
    int num;

    do{
        printf("\n\n\tInsira um numero positivo: ");
        scanf("%d", &num);
        system("clear");
    }while(num<0);

    printf("\n\nO numero %d em binario é: \t",num);
    ImprimeBin(num);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
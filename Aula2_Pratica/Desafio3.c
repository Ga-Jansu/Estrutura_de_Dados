/*Construa um programa que tenha uma função recursiva que tenha como parâmetro um número inteiro e determine quantos dígitos 5 possui esse número*/

#include <stdio.h>
#include <stdlib.h>


void ler(int *n){
    printf("\n\n\tInsira um numero: ");
    scanf("%d", n);
    system("clear");
}

int Verifica(int num){
    if(num == 0) return 0;
    if(num%10 == 5) return 1 + Verifica(num/10);
    else    return Verifica(num/10);
}

int main(){
    int num,sum;
    system("clear");

    ler(&num);
    
    sum = Verifica(num);
    
    printf("\n\n\tO numero %d tem %d digitos '5'!!",num,sum);

    getchar();
    getchar(); // Espera o usuário pressionar Enter para encerrar

    system("clear");
    return 0;
}

/*Elabore um programa que:
    • Tenha um procedimento para ler 2 números
    • Faça uma função que calcule a soma do quadrado desses números, onde o quadrado é obtido por uma função chamada quad.*/
#include <stdio.h>
#include <stdlib.h>

void ler(int *n1, int *n2){
    printf("\n\n\tInsira um numero: ");
    scanf("%d", n1);
    printf("\n\tInsira outro numero: ");
    scanf("%d", n2);
    system("clear");
}



int sum_quad(int n1,int n2){
    return n1+n2;
}

int quad(int num){
    return num*num;
}


int main(){
    int num1, num2, sum;
    system("clear");

    ler(&num1,&num2);

    num1 = quad(num1);
    num2 = quad(num2);

    sum = sum_quad(num1,num2);

    printf("\n\n\tA soma dos quadrados dos numeros inseridos é de %d",sum);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
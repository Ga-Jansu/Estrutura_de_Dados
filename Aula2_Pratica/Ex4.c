/*Construa um programa em C que leia um número inteiro não negativo e determine a soma dos seus divisores. 
    A soma dever ser efetuada através de uma função somadiv e o resultado impresso no programa principal. 
    O protótipo da função é: void somadiv(int x, int *y);*/

#include <stdio.h>
#include <stdlib.h>

void somadiv(int x, int *y){
    for(int i=1;i<=x;i++)
    {
        if(x%i == 0)
        {
            *y+=i;
        }
    }
}

int main(){
    int num, sum=0;

    do
    {
        printf("\n\n\tInsira um numero positivo: ");
        scanf("%d", &num);
        system("clear");
    }while(num<0);

    somadiv(num,&sum);

    printf("\n\n\tA soma dos divisores de %d é de %d",num,sum);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
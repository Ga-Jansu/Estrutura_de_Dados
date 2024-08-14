/*Elabore uma programa que contenha uma função RECURSIVA que receba um inteiro N como parâmetro, calcule o resultado da seguinte serie:
        S = 1 + 4/2 + 9/3 + 16/4 + ... + N^2/N
O resultado deverá ser impresso no programa principal */

#include <stdio.h>
#include <stdlib.h>

int result(int n, int s){
    if(n == 0)
    {
        return 0;
    }
    return ((s*s/s) + result(n-1,s+1));
    
}
int main(){
    int num, aux=1, sum;
    system("clear");

    do
    {
        printf("\n\n\tInsira um numero positivo: ");
        scanf("%d", &num);
        system("clear");
    }while(num<0);

    sum = result(num,aux);

    printf("\n\n\tO resultado é: %d",sum);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    system("clear");
    return 0;
}
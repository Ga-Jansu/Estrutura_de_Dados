/*Faça um programa que leia a medida dos catetos de um triângulo retângulo e elabore uma função que calcule a
hipotenusa. O valor deverá ser impresso no programa principal*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ler(double *num){
    printf("\n\n\tInsira o valor do cateto: ");
    scanf("%lf", num);
    system("clear");
}

int main(){
    double cat1, cat2, hipotenusa;
    system("clear");

    ler(&cat1);
    ler(&cat2);

    hipotenusa = sqrt((cat1 * cat1) + (cat2 * cat2));

    printf("\n\n\tA hipotenusa é: %.2f\n", hipotenusa);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar
    return 0;
}

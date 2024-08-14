/*Faça um programa que leia a medida dos catetos de um triângulo retângulo e elabore uma função que calcule a
hipotenusa. O valor deverá ser impresso no programa principal*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ler(float *num){
    printf("\n\n\tInsira o valor do cateto: ");
    scanf("%f", num);
    system("clear");
}

int main(){
    float cat1, cat2; 
    double hipotenusa;
    system("clear");

    ler(&cat1);
    ler(&cat2);

    hipotenusa = (double) sqrt((powf(cat1,2)+powf(cat2,2)));

    printf("\n\n\tA hipotenusa é: %.2f\n", hipotenusa);

    getchar(); // Limpa o buffer do teclado após o scanf
    getchar(); // Espera o usuário pressionar Enter para encerrar

    system("clear");
    return 0;
}

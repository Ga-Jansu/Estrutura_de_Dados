/*Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. O programa deverá usar os seguintes cálculos:
        Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58
        Para mulheres, peso ideal = 62.1 x alt - 44.7*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float calcula(float altura, char sexo){
    float peso;

    if(sexo == 'M')
    {
        peso = 62.1 * altura - 44.7;
    }
    else
    {
        peso = 72.7 * altura - 58;
    }

    return peso;
}

int main(){
    float alt, weight;
    char sex;

    do{
        printf("\n\n\tDigite o sexo da pessoa (H -> Homem, M -> Mulher): ");
        scanf("%c",&sex);
        sex = toupper(sex);
    }while(sex != 'H' && sex != 'M');

    printf("\n\tDigite a altura da pessoa (em metros): ");
    scanf("%f",&alt);

    weight = calcula(alt,sex);

    printf("\n\n\n\tO peso ideal dessa pessoa é de : %.2f kg \n\n",weight);

    return 0;
}
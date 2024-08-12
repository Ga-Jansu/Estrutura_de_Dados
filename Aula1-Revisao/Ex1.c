#include <stdio.h>
#include <stdlib.h>

int contador(int num){
    int contagem=0;
    num = abs(num);

    while (num>=7){
        int digito = num % 10;
        if(digito == 7) contagem++;
        num /= 10;
    };
    return contagem;
}

int main(){
    int number, result;

    printf("\n\n\t Digite um numero: ");
    scanf("%d",&number);

    result = contador(number);

    system("clear");

    printf("\n\n\t  A quantidade de 7 no numero %d são de %d \n\n\n", number,result);

    getchar();

    return 0;
}
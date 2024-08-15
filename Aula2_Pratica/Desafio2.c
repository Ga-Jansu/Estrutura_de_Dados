/*Um número é perfeito se a soma dos seus divisores, com exceção dele mesmo, é igual a ele. 
    Exemplo: número 6, os divisores de 6 são 1, 2, 3 e 6. Somando-se 1 + 2 + 3 =6. Portanto 6 é um número perfeito. 
Elabore um programa que leia um número e usando uma função determine se ele é perfeito*/

#include <stdio.h>
#include <stdlib.h>


void ler(int *n){
    printf("\n\n\tInsira um numero: ");
    scanf("%d", n);
    system("clear");
}

void Verifica(int num){
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if((num%i) == 0) sum += i;
    }
    if(sum == num) printf("\n\nO numero %d é perfeito!!",num);
    else {
        printf("\n\nO numero %d não é perfeito",num);
    }
}

int main(){
    int num;
    system("clear");

    ler(&num);
    
    Verifica(num);
    
    getchar();
    getchar(); // Espera o usuário pressionar Enter para encerrar

    system("clear");
    return 0;
}

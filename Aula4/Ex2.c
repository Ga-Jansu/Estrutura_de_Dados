#include <stdio.h>
#include <stdlib.h>
#define const 1

typedef struct no{
    int RA, cod;
    float Nota[2];
}Alunos;

void Leitura(Alunos vetor[]){
    system("clear");
    for(int i=0; i<const; i++)
    {
        printf("\n\tAluno %d",i+1);
        printf("\n\t\tRA: ");
        scanf("%d",&vetor[i].RA);

        int aux;
        do{
            printf("\n\t\tCodigo da disciplina (4 digitos): ");
            scanf("%d",&aux);
        }while(aux>9999 && aux<1000);
        vetor[i].cod = aux;

        printf("\n\t\tNota 1: ");
        scanf("%f",&vetor[i].Nota[1]);

        printf("\n\t\tNota 2: ");
        scanf("%f",&vetor[i].Nota[2]);

        system("clear");

    }
}

float MediaPonderada(Alunos vetor[], int i){
    return ((vetor[i].Nota[1] + vetor[i].Nota[2] * 2) / 3 );
}

int main(){
    Alunos array[const];

    Leitura(array);

    printf("\nIndex \t RA \t Codigo da Disciplina \t Nota\n");
    
    for(int i=0;i<const;i++)
    {
        printf("%d \t %d \t\t %d \t\t %.2f\n", i+1, array[i].RA, array[i].cod, MediaPonderada(array,i));
    }

    getchar();
    getchar();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define const 3

typedef struct dados{
    int idade, filhos;
    float salario;
    int sexo;
}dados;

void Leitura(dados vetor[]){
    system("clear");
    for(int i=0; i<const; i++)
    {
        printf("\n\tPessoa %d",i+1);
        printf("\n\t\tIdade: ");
        scanf("%d",&vetor[i].idade);

        
        printf("\n\t\tQuantidade de Filhos: ");
        scanf("%d",&vetor[i].filhos);
        

        printf("\n\t\tSalario: R$ ");
        scanf("%f",&vetor[i].salario);

        do{
            printf("\n\t\tSexo (0 - Mulher , 1 - Homem): ");
            scanf("%d",&vetor[i].sexo);
        }while(vetor[i].sexo > 2 && vetor[i].sexo < -1);

        printf("\n\n");
        //system("clear");

    }
}

int MediaIdade(dados vetor[]){
    int sum=0, aux=0;
    for(int i=0;i<const;i++)
    {
        if(vetor[i].sexo == 0)
        {
            if(vetor[i].salario < 1412)
            {
                sum += vetor[i].idade;
                aux++;
            }
        }
    }
    return sum/aux;
}

float MediaSalario(dados vetor[]){
    float sum=0;
    for(int i=0;i<const;i++)
    {
        sum += vetor[i].salario;
    }
    return sum/const;
}

int MediaFilhos(dados vetor[]){
    int sum=0;
    for(int i=0;i<const;i++)
    {
        sum += vetor[i].filhos;
    }
    return sum/const;
}

int MenorIdade(dados vetor[]){
    int menor = 9999;
    for(int i=0;i<const;i++)
    {
        if(vetor[i].sexo == 0)
        {
            if(vetor[i].idade < menor) menor = vetor[i].idade;
        }
    }

    return menor;
}

int main(){
    dados array[const];

    Leitura(array);

    int MediaId = MediaIdade(array);
    float Salario = MediaSalario(array);
    int MediaFil = MediaFilhos(array);
    int MenorIda = MenorIdade(array);

    printf("\n\tA média de idade das mulheres com salário inferior ao salário mínimo é de %d",MediaId);
    printf("\n\tA média de salário da população é de R$ %.2f",Salario);
    printf("\n\tA média do número de filhos é de %d",MediaFil);
    printf("\n\tA menor idade do sexo feminino é %d anos",MenorIda);

    getchar();
    getchar();
    return 0;
}
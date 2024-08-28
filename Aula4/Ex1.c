#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

typedef struct no{
    int cod;
    int qtd;
    float compra;
    float venda;
}Produto;

void ler(Produto vetor[]){
    system("clear");
    for(int i=0;i<tamanho;i++)
    {
        int aux;
        printf("\n\tProduto %d: ",i+1);
        
        do{
            printf("\n\t\tCodigo (3 digitos): ");   //adicionar verificação se o codigo ja existe
            scanf("%d",&aux);
        }while(aux>999 && aux<100);

        vetor[i].cod = aux;
        printf("\n\t\tQuantidade em estoque: ");
        scanf("%d",&vetor[i].qtd);
        printf("\n\t\tValor de compra: R$");
        scanf("%f",&vetor[i].compra);
        printf("\n\t\tValor de compra: R$");
        scanf("%f",&vetor[i].venda);
        system("clear");
    }
}

int Verifica_Maior(Produto vetor[]){
    int maior = vetor[0].qtd;
    int indice = 0;
    for(int i=1;i<tamanho;i++)
    {
        if(vetor[i].qtd>maior) 
        {
            maior = vetor[i].qtd;
            indice = i;
        }
    }
    return indice;
}

int Maior_Lucro(Produto vetor[]){
    int atual=0;
    float lucro = (vetor[0].venda - vetor[0].compra);
    for(int i=1;i<tamanho;i++)
    {
        if(lucro<(vetor[i].venda - vetor[i].compra))
        {
            lucro = (vetor[i].venda - vetor[i].compra);
            atual = i;
        }
    }
    return atual;
}

int main(){
    Produto vet[tamanho];
    ler(vet);

    int MaiorQtd = Verifica_Maior(vet);

    int MLucro = Maior_Lucro(vet);

    printf("\n\n\tO produto que tem maior quantidade no estoque é o do codigo %d",vet[MaiorQtd].cod);
    printf("\n\tA quantidade do produto que tem o maior lucro é de %d produtos\n",vet[MLucro].qtd);

    getchar();
    getchar();
    system("clear");
    return 0;
}
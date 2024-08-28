#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no* prox;
}Lista;

Lista* Inicializa(void){
    return NULL;
}

Lista* Insere(Lista* recebida, int valor){
    Lista* novo;
    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = valor;
    novo->prox = recebida;
    return novo;
}

Lista* Remove(Lista* recebida){
    Lista* aux;
    aux = recebida;
    recebida = recebida->prox;
    free(aux);
    return recebida;
}

void Imprime(Lista* p){
    printf("\n\n");
    for( ; p != NULL; p=p->prox)
    {
        printf("\t%d",p->info);
    }
}

int VerificaVazia(Lista* p){
    if(p==NULL) return 1;
    return 0;
}

int QtdElementos(Lista* p){
    int qtd=0;
    for( ; p != NULL; p=p->prox)
    {
        qtd++;
    }
    return qtd;
}

int SomaElementos(Lista* p){
    int sum=0;
    for( ; p != NULL; p=p->prox)
    {
        sum += p->info;
    }
    return sum;
}

int VerificaExiste(Lista* p, int dado){
    for(; p!= NULL;p=p->prox)
    {
        if(p->info == dado) return 1;
    }
    return 0;
}

Lista* UniaoLista(Lista* p , Lista* c){
    Lista* new;
    new = Inicializa();

    for( ;p!=NULL;p = p->prox)
    {
        new = Insere(new,p->info);
    }

    for( ;c!=NULL;c = c->prox)
    {
        if(!VerificaExiste(new,c->info)) new = Insere(new,c->info);
    }
    return new;
}

int main(){
    Lista* Lista1;
    Lista* Lista2;
    Lista* Lista3;
    Lista1 = Inicializa();
    Lista2 = Inicializa();

    Lista1 = Insere(Lista1,10);

    Lista1 = Insere(Lista1,15);

    Lista2 = Insere(Lista2,10);

    Lista2 = Insere(Lista2,17);
    
    Lista3 = UniaoLista(Lista1,Lista2);

    Imprime(Lista3);

    getchar();
    getchar();
    return 0;
}
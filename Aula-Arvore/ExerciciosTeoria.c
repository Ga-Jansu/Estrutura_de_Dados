#include <stdio.h>
#include <stdlib.h>
#include "/home/ien/Documents/Faculdade/EstruturaDeDados/Pratica/BIBLIOTECA.h"

int somaElementosArvore(NoArv* Pai)
{
    int s = Pai->info;
    if(Pai->dir != NULL)    s += somaElementosArvore(Pai->dir);
    if(Pai->esq != NULL)    s += somaElementosArvore(Pai->esq);
    return s;
}

int numeroDeAncestrais(NoArv* Pai, int valor)
{
    if(Pai == NULL) return -1;
    if(Pai->info < valor)
    {
        int dirResult = numeroDeAncestrais(Pai->dir,valor);
        if(dirResult == -1)     return -1;
        return 1 + dirResult;
    }
    if(Pai->info < valor)
    {
        int esqResult = numeroDeAncestrais(Pai->esq,valor);
        if(esqResult == -1)     return -1;
        return 1 + esqResult;
    }
    if(Pai->info == valor)  return 0;
    return -1;
}

void preOrdem(NoArv* Pai)
{
    printf("- %d ",Pai->info);
    if(Pai->dir != NULL)    preOrdem(Pai->dir);
    if(Pai->esq != NULL)    preOrdem(Pai->esq);
}

void inOrdem(NoArv* Pai)
{
    if(Pai->dir != NULL)    inOrdem(Pai->dir);
    printf("- %d ",Pai->info);
    if(Pai->esq != NULL)    inOrdem(Pai->esq);
}

void posOrdem(NoArv* Pai)
{
    if(Pai->dir != NULL)    posOrdem(Pai->dir);
    if(Pai->esq != NULL)    posOrdem(Pai->esq);
    printf("- %d ",Pai->info);
}

int main(){
    Arv* ArvorePrincipal;
    ArvorePrincipal = CriaArvore();
    InsereArvore(ArvorePrincipal,7);
    InsereArvore(ArvorePrincipal,5);
    InsereArvore(ArvorePrincipal,12);
    InsereArvore(ArvorePrincipal,20);
    printf("\n\n\t");
    preOrdem(ArvorePrincipal->raiz);
    pause();
    int soma = numeroDeAncestrais(ArvorePrincipal->raiz,7);
    clear();
    printf("\n\n\t%d",soma);
    pause();



    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "/home/iensen/Documents/Faculdade/EstruturaDeDados/Pratica/BIBLIOTECA.h"

int contaPar(Fila *f){
    int cont = 0;
    for(Nos *q = f->ini;q!=NULL;q=q->prox)
    {
        if(q->info %2 == 0) cont++;
    }
    return cont;
}

void tira15(Fila *f){
    int aux, tam = tamanhoFila(f);
    for(int i=0; i<tam; i++)
    {
        aux = RetiraFila(f);
        if(aux != 15)   InsereFila(f, aux);
    }
}


void duasFilas(Nos* q, Fila* Fpar, Fila* Fimpar){
    for(; q != NULL; q = q -> prox)
    {
        (q->info % 2 == 0) ? InsereFila(Fpar,q->info) : InsereFila(Fimpar,q->info);
    }
}

void inverte(Fila* f){
    Pilha* p = CriaPilha();
    while(!VaziaFila(f))
    {
        push(p,RetiraFila(f));
    }
    while(!vaziaPilha(p))
    {
        InsereFila(f,pop(p));
    }
    p = libera_pilha(p);
}

void duasFilasSemOriginal(Fila *f, Fila* Fpar, Fila *Fimpar){
    int aux;
    while(!VaziaFila(f))
    {
        aux = RetiraFila(f);
        (aux % 2 == 0) ? InsereFila(Fpar,aux) : InsereFila(Fimpar,aux);
    }
}

void duasPilhas(Fila* f, Pilha* pilhaMaior, Pilha* pilhaMenor){
    for(Nos* q = f->ini; q != NULL; q = q->prox)
    {
        (q->info > 20) ? push(pilhaMaior,q->info) : push(pilhaMenor,q->info);
    }
}


int main(){
    Fila* f = CriaFila();           //fila principal
    Fila* fPar = CriaFila();        //fila pares
    Fila* fImpar = CriaFila();      //fila impares
    Pilha* pMaior = CriaPilha();    //pilha maior que 20
    Pilha* pMenor = CriaPilha();    //pilha menor que 20

    
    InsereFila(f,2);   
    InsereFila(f,20);
    InsereFila(f,15);
    InsereFila(f,12);
    InsereFila(f,17);
    InsereFila(f,23);
    InsereFila(f,5);

    imprimeFila(f);
    int i = tamanhoFila(f);
    printf("\n\tEssa fila tem %d elementos",i);
    pauseClear();

    imprimeFila(f);
    tira15(f);
    enter();
    imprimeFila(f);
    pauseClear();

    duasFilas(f->ini,fPar,fImpar);
    printf("\n\tFila f só com par: ");
    imprimeFila(fPar);
    printf("\n\tFila f só com impar: ");
    imprimeFila(fImpar);
    printf("\n\tFila f: ");
    imprimeFila(f);
    pauseClear();
//
    //printf("\n\tFila f: ");
    //imprimeFila(f);
    //inverte(f);
    //printf("\n\tFila f invertida: ");
    //imprimeFila(f);
    //pauseClear();

    fPar = liberaFila(fPar);
    fImpar = liberaFila(fImpar);

    fPar = CriaFila();        
    fImpar = CriaFila();


    printf("\n\tFila f: ");
    imprimeFila(f);
    duasFilasSemOriginal(f,fPar,fImpar);
    printf("\n\tFila f só com par: ");
    imprimeFila(fPar);
    printf("\n\tFila f só com impar: ");
    imprimeFila(fImpar);
    pauseClear();
//
    //f = CriaFila();
    //InsereFila(f,2);   
    //InsereFila(f,20);
    //InsereFila(f,15);
    //InsereFila(f,12);
    //InsereFila(f,17);
    //InsereFila(f,23);
    //InsereFila(f,25);
//
    //printf("\n\tFila f: ");
    //imprimeFila(f);
    //duasPilhas(f,pMaior,pMenor);
    //imprimePilha(pMaior);
    //enter();
    //imprimePilha(pMenor);
    //pauseClear();
//
    libera_pilha(pMaior);
    libera_pilha(pMenor);
    fPar = liberaFila(fPar);
    fImpar = liberaFila(fImpar);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "/home/jansen/Documents/Faculdade/4_Sem_Codigo/Estrutura_de_Dados/PILHA.h"

Pilha* Inverter(Pilha *p){
    Pilha* aux;
    aux = CriaPilha();
    while(!vaziaPilha(p))
    {
        push(aux,pop(p));
    }
    return aux;
}

int ContaPar(Pilha *p){
    int cont=0;
    No *aux = p->Topo;
    for(;aux!=NULL;aux=aux->prox)
    {
        if(aux->info%2==0)
        {
            cont++;
        }
    }
    return cont;
}

Pilha* tira15(Pilha *p){
    int a;
    Pilha* aux;
    aux=CriaPilha();
    while(!vaziaPilha(p))
    {
        a=pop(p);
        if(a!=15)
        {
            push(aux,a);
        }
    }
    while(!vaziaPilha(aux))
    {
        push(p,pop(aux));
    }
    return p;
}

int main(){
    int a;
    Pilha* p;
    p=CriaPilha();

    push(p,10);
    push(p,15);
    push(p,9);
    push(p,8);
    push(p,6);
    push(p,4);
    printf("\n\n\tP:");
    imprime(p);
    p=Inverter(p);
    printf("\n\n\tINVERTIDA:");
    imprime(p);
    a=ContaPar(p);
    printf("\n\n\t%d pares - ContaPar",a);
    p=tira15(p);
    printf("\n\n\tP:");
    imprime(p);
    p=Inverter(p);
    printf("\n\n\tP1:");
    imprime(p);
    p=libera(p);
    printf("\n\n\n");


    getchar();
    getchar();
    return 0;
}
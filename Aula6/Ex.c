#include <stdio.h>
#include <stdlib.h>
#include "/home/iensen/Documents/Faculdade/EstruturaDeDados/Pratica/BIBLIOTECA.h"

int QtdElementos(Pilha* p){
    int cont=0;
    for(Nos* q = p->Topo;q!=NULL;q=q->prox)
    {
        cont++;
    }
    return cont;
}

Pilha* Inverter(Pilha *p){
    Pilha* Paux;
    Paux = CriaPilha();
    while(!vaziaPilha(p))
    {
        push(Paux,pop(p));
    }
    return Paux;
}

Pilha* RemoveElemento(Pilha* p, int elemento){
    Pilha* Paux;
    int aux;
    Paux = CriaPilha();
    while(!vaziaPilha(p))
    {
        aux=pop(p);
        if(aux!=elemento)   push(Paux,aux);
    }
    while(!vaziaPilha(Paux))
    {
        p = Inverter(Paux);
    }
    return p;
}

int compara(Pilha *p1, Pilha* p2){
    int q1, q2, cont;

    q1 = QtdElementos(p1);
    q2 = QtdElementos(p2);

    if(q1 == q2)    return 0;
    if(q1 > q2)     return 1;
    return 2;
}

Pilha* Digitos(int num){
    int aux;
    Pilha* Paux;
    Paux = CriaPilha();
    while(num>0){
        aux = num%10;
        push(Paux,aux);
        num /= 10;
    }
    return Paux;
}

int InverteDigitos(Pilha* p){
    int aux=0;
    while(!vaziaPilha(p))
    {
        aux += pop(p);
        aux *= 10;
    }
    aux/=10;
    return aux;
}

int main(){
    int a;
    Pilha* p;
    Pilha* q;
    p=CriaPilha();
    q=CriaPilha();

    push(p,10);
    push(p,15);
    push(p,9);
    push(p,8);
    push(p,6);
    push(p,4);
    imprimePilha(p);
    a = tamanhoPilha(p);
    printf("\n\tA pilha tem %d elementos\n",a);
    pauseClear();

    imprimePilha(p);
    p = Inverter(p);
    imprimePilha(p);
    pauseClear();

    imprimePilha(p);
    printf("\n\n\tQual elemento deseja tirar: ");
    scanf("%d",&a);
    getchar();
    p = RemoveElemento(p,a);
    imprimePilha(p);
    pauseClear();

    push(q,1);
    push(q,30);
    push(q,2);
    push(q,53);
    push(q,11);
    push(q,8);

    printf("\n\n\tQ: ");
    imprimePilha(q);
    printf("\n\n\tP: ");
    imprimePilha(p);

    a = compara(q,p);
    if(a != 0)  printf("\n\n\n\tA pilha %d tem mais elementos",a);
    else
    {
        printf("\n\n\tAs duas pilha tem a mesma quantidade de elementos");
    }
    pauseClear();

    printf("\n\n\tDigite um numero inteiro: ");
    scanf("%d",&a);
    getchar();
    p = Digitos(a);
    printf("\n\n\tOs digitos de %d são:",a);
    imprimePilha(p);
    pauseClear();

    a = InverteDigitos(p);
    printf("\n\n\tO digito anterior era: %d",a);


    pauseClear();
    p = libera_pilha(p);
    q = libera_pilha(q);
    return 0;
}
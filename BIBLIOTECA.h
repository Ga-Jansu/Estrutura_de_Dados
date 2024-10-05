#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

/* FUNÇÕES DE MANIPULAÇÃO DE PILHA E FILA

Pilha* CriaPilha (void)     CRIA A PILHA

int vaziaPilha(Pilha *p)	    VERIFICA SE A PILHA ESTÁ VAZIA, RETORNA 1

No* ins_ini (No* t, int a)      AUXILIAR DA INSERÇÃO
void push (Pilha* p, int v)     INSERÇÃO

No* ret_ini_pilha (No* l)       AUXILIAR DA REMOÇÃO
int pop (Pilha* p)              REMOVE RETORNANDO O VALOR QUE FOI REMOVIDO

void libera_pilha (Pilha* p)          LIBERA A PILHA
void imprimePilha (Pilha* p)    IMPRIMA A PILHA
int tamanhoPilha (Pilha *p)

Fila* CriaFila()                    CRIA A FILA

int VaziaFila (Fila* f)             VERIFICA SE A FILA ESTÁ VAZIA

void InsereFila (Fila* f, int v)    INSERÇÃO
int RetiraFila (Fila* f)            REMOÇÃO

Fila* liberaFila (Fila* f)          LIBERA A FILA

void imprimeFila (Fila* f)          IMPRIME A FILA

Arv* CriaArvore()                   CRIA A ARVORE

int ArvVazia(Arv *base)             RETORNA 1 SE A ARVORE ESTIVER VAZIA

void InsereArvore(Arv *Arvore, int num)     INSERE UM VALOR NA ARVORE

void pauseClear()                   ESPERA O USUARIO DIGITAR QUALQUER TECLA, APÓS LIMPA A TELA

void pause()                        APENAS ESPERA O USUARIO DIGITAR QUALQUER TECLA

void clear()                        LIMPA TELA

void enter()                        PULA 2 LINHAS

*/

typedef struct nos{
    int info;
    struct nos *prox;
}Nos;

typedef struct pilha{
    Nos * Topo;
}Pilha;

typedef struct fila{
    Nos * ini;
    Nos * fim;
}Fila;

typedef struct NoArvore{
    int info;
    struct NoArvore *esq;
    struct NoArvore *dir;
}NoArv;

typedef struct BaseArv{
    NoArv *raiz;
}Arv;

Pilha* CriaPilha (void)
{
     Pilha *p;
     p=(Pilha*)malloc(sizeof(Pilha));
     p->Topo = NULL;
   return p;
};

int vaziaPilha(Pilha *p)
{
    if (!p->Topo)
    {
        return 1; //pilha vazia
    }
    return 0;
}

Nos* ins_ini_pilha (Nos* t, int a)
{
    Nos* aux = (Nos*) malloc(sizeof(Nos));
    aux->info = a;
    aux->prox = t;
    return aux;
};

void push (Pilha* p, int v)
{
    p->Topo = ins_ini_pilha(p->Topo,v);
};

Nos* ret_ini_pilha (Nos* l)
{
    Nos* p = l->prox;
    free(l);
    return p;
};

int pop (Pilha* p)
{
    int v;
    if (p==NULL)
    {
        printf("Pilha vazia.\n");
        exit(1); /* aborta programa */
    }
    v = p->Topo->info;
    p->Topo = ret_ini_pilha(p->Topo);
    return v;
};

Pilha * libera_pilha (Pilha* p)
{
    Nos* q = p->Topo;
    while (q!=NULL)
    {
        Nos* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
    return(NULL);
};

void imprimePilha (Pilha* p)
{
    Nos* q;
    if(!p)
    {
        printf("\n\n\tPILHA VAZIA!!!!");
    }
    else
    {
        printf("\n\n\tPILHA: ");
        for (q=p->Topo; q!=NULL; q=q->prox)
        {
            printf("% 2d",q->info);
        }
    }
};

int tamanhoPilha (Pilha* p)
{
    int tam=0;
    for(Nos* aux = p->Topo;aux!=NULL;aux=aux->prox)
    {
        tam++;
    }
    return tam;
}

Fila* CriaFila ()
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

int VaziaFila (Fila* f)
{
    if (f->ini==NULL) return 1;
    return 0;
}

Nos* ins_fim_fila (Nos *fim, int A)
{
    Nos *p = (Nos*)malloc(sizeof(Nos));
    p->info = A;
    p->prox = NULL;
    if (fim != NULL) /* verifica se lista n�o estava vazia */
    fim->prox = p;
    return p;
}

void InsereFila (Fila* f, int v)
{
    f->fim = ins_fim_fila(f->fim,v);
    if (f->ini==NULL) /* fila antes vazia? */
    f->ini = f->fim;
}

Nos* retira_ini_fila (Nos* ini)
{
    Nos* p = ini->prox;
    free(ini);
    return p;
}

int RetiraFila (Fila* f)
{
    int v;
    if (VaziaFila(f))
    {
        printf("Fila vazia.\n");
        exit(0); /* aborta programa */
    }
    v = f->ini->info;
    f->ini = retira_ini_fila(f->ini);
    if (f->ini == NULL) /* fila ficou vazia? */
    f->fim = NULL;
    return v;
}

Fila* liberaFila (Fila* f)
{
    Nos* q = f->ini;
    while (q!=NULL)
    {
        Nos* t = q->prox;
        free(q);
        q = t;
    }
    return f;
}

void imprimeFila (Fila* f)
{
    Nos* q;
    printf("\n\t\t");
    for (q=f->ini; q!=NULL; q=q->prox)
    {
        printf("%d - ",q->info);
    }
    printf("\n");
}

int tamanhoFila (Fila* f)
{
    int tam=0;
    for(Nos* aux = f->ini;aux!=NULL;aux=aux->prox)
    {
        tam++;
    }
    return tam;
}

Arv* CriaArvore()
{
    Arv *aux;
    aux = (Arv*)malloc(sizeof(Arv));
    aux->raiz = NULL;
    return aux;
}

int ArvVazia(Arv *base)
{
    if(base->raiz==NULL)    return 1;
    return 0;
}


NoArv* aux_insereArvore(NoArv *no, int num){
    int flag;
    NoArv *Pai;
    NoArv *novo = (NoArv*)malloc(sizeof(NoArv));
    novo->info = num;
    novo->esq = NULL;
    novo->dir = NULL;
    if(no==NULL)    return novo;
    else
    {
        Pai = no;
        flag = 0;
        while(flag == 0)
        {
            if(Pai->info<num)
            {
                if(Pai->dir == NULL)
                {
                    Pai->dir = novo;
                    flag = 1;
                }
                else
                {
                    Pai = Pai->dir;
                }
            }
            else
            {
                if(Pai->info > num)
                {
                    if(Pai->esq == NULL)
                    {
                        Pai->esq = novo;
                        flag = 1;
                    }
                    else
                    {
                        Pai = Pai->esq;
                    }
                }
            }
        }
    }
    return no;
}

void InsereArvore(Arv *Arvore, int num){
    Arvore->raiz = aux_insereArvore(Arvore->raiz,num);
}

void pauseClear(){
    getchar();
    getchar();
    system("clear");
}

void pause(){
    getchar();
    getchar();
}

void clear(){
    system("clear");
}

void enter(){
    printf("\n\n");
}

#endif
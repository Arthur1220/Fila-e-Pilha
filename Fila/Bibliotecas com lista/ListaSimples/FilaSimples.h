#ifndef FilaSimples_H
#define FilaSimples_H

typedef struct No{
    int info;
    struct No *next;
}No;

typedef struct{
    No *inicio;
    int tam;
}Raiz;

//
void Inicializacao(Raiz *lista);

//
void enqueue(Raiz *lista, int valor);

//
int dequeue(Raiz *lista);

//
int empty(Raiz *lista);

#endif //FilaListaSimples_H
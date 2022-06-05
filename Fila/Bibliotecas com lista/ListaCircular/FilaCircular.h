#ifndef FilaCircular_H
#define FilaCircular_H

typedef struct No{
    int info;
    struct No *next;
    struct No *previus;
}No;

typedef struct{
    No *inicio;
    No *fim;
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

#endif //FilaCircular_H
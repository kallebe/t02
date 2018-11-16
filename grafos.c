#include <stdlib.h>
#include <stdio.h>
#include "grafos.h"

void criarGrafo(Grafo *G, int nVertices) {
    int i;

    G->nVertices = nVertices;
    G->listaAdj = calloc(nVertices, sizeof(*G->listaAdj));
}

void inserirAresta(Grafo *G, int v1, int v2) {
    Vertice aux;

    if(v1 >= G->nVertices || v2 >= G->nVertices) {
        printf("Vertice alem do limite\n");
        return;
    }

    aux = malloc(sizeof(*aux));
    aux->v = v2;
    aux->prox = G->listaAdj[v1];
    G->listaAdj[v1] = aux;

    aux = malloc(sizeof(*aux));
    aux->v = v1;
    aux->prox = G->listaAdj[v2];
    G->listaAdj[v2] = aux;
}

void imprimeGrafo(Grafo *G) {
    int i;
    Vertice aux;

    for(i = 0; i < G->nVertices; i++) {
        aux = G->listaAdj[i];
        while(aux != NULL) {
            printf("<%d, %d> ", i, aux->v);
            aux = aux->prox;
        }
        printf("\b\n");
    }
}

void liberaGrafo(Grafo *G) {
    int i;
    Vertice aux, a;

    for(i = 0; i < G->nVertices; i++) {
        aux = G->listaAdj[i];
        while(aux != NULL) {
            a = aux;
            aux = aux->prox;
            free(a);
        }
    }
    free(G->listaAdj);
}
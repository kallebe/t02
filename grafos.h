#ifndef GRAFOS_H
#define GRAFOS_H

typedef struct vertice *Vertice;
typedef struct grafo Grafo;

struct grafo {
    int nVertices;
    Vertice *listaAdj;
};

struct vertice {
    int v;
    Vertice prox;
};

void criarGrafo(Grafo *G, int nVertices);
void inserirAresta(Grafo *G, int v1, int v2);
void imprimeGrafo(Grafo *G);
void liberaGrafo(Grafo *G);

#endif
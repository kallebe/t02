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

void criarGrafo(Grafo *G, int nVertices);       /*Inicializa o Grafo com sua lista de Adjascência*/
void inserirAresta(Grafo *G, int v1, int v2);   /*Conecta dois vértices do grafo*/
void imprimeGrafo(Grafo *G);                    /*Imprime lista de adjascência*/
void liberaGrafo(Grafo *G);                     /*Libera a memória alocada pelo grafo*/

#endif
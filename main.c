#include <stdio.h>
#include <stdlib.h>
#include "grafos.h"

int main() {
    Grafo G;
    int opc, nVertices, v1, v2;

    printf("Digite o numero de vertices: ");
    scanf("%d", &nVertices);

    criarGrafo(&G, nVertices);

    do {
        printf("\nDigite Uma opcao:\n1- Criar Arestas\n2- Imprimir Grafo\n3- Sair\n\n");
        scanf("%d", &opc);
        switch(opc) {
            case 1:
                printf("Digite o valor do primeiro vertice: ");
                scanf("%d", &v1);
                printf("Digite o valor do segundo vertice: ");
                scanf("%d", &v2);
                inserirAresta(&G, v1, v2);
                break;
            case 2:
                imprimeGrafo(&G);
                break;
            default:
                break;
        }
    } while(opc != 3);

    liberaGrafo(&G);
}
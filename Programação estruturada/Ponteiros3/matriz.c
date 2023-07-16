/* Escreva as funções cria_matriz e liberar_matriz.

A função cria_matriz deve alocar e retornar uma matriz com as dimensões especificadas nos parâmetros n_linhas e n_colunas. A matriz deve ser preenchida com zeros e uns de forma intercalada, conforme o exemplo a seguir (n_linhas=3 e n_colunas=4):

0 1 0 1
1 0 1 0
0 1 0 1


A função liberar_matriz recebe o ponteiro para uma matriz e deve liberá-la da memória (free).



Protótipos das funções:

double **cria_matriz(int n_linhas, int n_colunas);
void liberar_matriz(double **matriz, int n_linhas);


Importante: submeta apenas as funções. Não use variáveis globais. Não inclua o main. Não use printf/puts/fprintf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.*/

#include "matriz.h"
#include <stdlib.h>

double **cria_matriz(int n_linhas, int n_colunas) {
    
    double **m;
    
    m = malloc(sizeof(double*) * n_linhas);
    
    for(int i = 0; i < n_linhas;i++){
        m[i] = malloc(sizeof(double)* n_colunas);
        for(int j = 0; j < n_colunas;j++){
            
            if(i%2 == 0){
                if(j%2 == 0){
                    m[i][j] = 0;
                }else{
                    m[i][j] = 1;
                }
            }else{
                if(j%2 == 0){
                    m[i][j] = 1;
                }else{
                    m[i][j] = 0;
                }
            }
        }
    }
    
    return m;
}

void liberar_matriz(double **matriz, int n_linhas) {
    
    for(int i = 0; i < n_linhas;i++){
        free(matriz[i]);
    }
    free(matriz);
    
}
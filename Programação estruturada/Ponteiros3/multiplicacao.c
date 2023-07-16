/* Escreva um programa que lerá duas matrizes A e B e depois imprime o resultado da multiplicação das matrizes.

Entrada:

n_linhas_A n_colunas_A
dados da matriz A (linha por linha)
n_linhas_B n_colunas_B
dados da matriz B (linha por linha)
Saída:

matriz resultado da multiplicação A x B


Importante: utilize malloc para alocar vetores ou matrizes (não declare vetor ou matriz com colchetes). Para acessar as posições no vetor, pode usar colchetes neste exercício. Não use variáveis globais.

Lembre-se de liberar toda memória alocada com malloc/calloc!*/

#include <stdio.h>
#include <stdlib.h>


int** scan_matriz(int linhas, int colunas){
    
    int **m;
    
    m = malloc(sizeof(int *)*linhas);
    
    for(int i = 0; i < linhas;i++){
        m[i] = malloc(sizeof(int)*colunas);
    }
    
    for(int i = 0; i < linhas;i++){
        for(int j = 0; j < colunas;j++){
            scanf("%d ", &m[i][j]);
        }
    }
    return m;
}

int main(){
    
    int l_a, c_a;
    
    scanf("%d ", &l_a);
    scanf("%d ", &c_a);
    
    int **matriz_a;
    
    matriz_a = scan_matriz(l_a,c_a);
    
    int l_b, c_b;
    
    scanf("%d ", &l_b);
    scanf("%d ", &c_b);
    
    int **matriz_b;
    
    matriz_b = scan_matriz(l_b,c_b);
    
    int **matriz;
    
    matriz = malloc(sizeof(int*)*l_a);
    
    for(int i = 0; i < l_a;i++){
        
        matriz[i] = malloc(sizeof(int)*c_b);
        
        for(int j = 0; j < c_b;j++){
            
            matriz[i][j] = 0;
            
            for(int k = 0;k < c_a;k++){
                
                matriz[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
    
    for (int i = 0; i < l_a; i++) {
        for (int j = 0; j < c_b; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < l_a; i++){
        free(matriz_a[i]);
        free(matriz[i]);
    }
    free(matriz_a);
    free(matriz);
    
    for(int i = 0; i < l_b;i++)
        free(matriz_b[i]);
    
    free(matriz_b);

    
    
    
    
}
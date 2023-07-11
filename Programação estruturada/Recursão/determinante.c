/* Determinante é uma função que transforma uma matriz quadrada em um número real.

O determinante de uma matriz de ordem 1 (apenas um elemento) é o único elemento da matriz.

Implemente:
void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c)
Esta função deve preenher a matriz m_saida com todos os elementos de m_entrada, mas removendo a primeira linha e a coluna c:
A matriz m_entrada não deve ser alterada; Apenas a matriz m_saida é preenchida.
Não é preciso alocar nenhuma matriz nesta função, as matrizes m_entrada e m_saida devem ser pré-alocadas por quem chamar esta função.
A ordem da matriz de entrada é representada pelo parâmetro n da função.
É desnecessário retornar a ordem da matriz de retorno, pois sempre será n-1.

float calcula_determinante(int n, float m_entrada[n][n])
Retorna o valor do determinante da matriz m_entrada com ordem n.
Essa função deve ser recursiva:
Se a ordem for igual a um, o retorno será o único elemento da matriz (m_entrada[0][0]).
Se a ordem for maior que um, utilize o cálculo apresentado na fórmula do enunciado; Utilize a função remove_primeira_linha_e_coluna_c para gerar as sub-matrizes.

int main()
Função principal que lê a ordem (n) da matriz, os elementos (linha à linha) e imprime o resultado do determinante da matriz lida com duas casas decimais (inclua uma quebra de linha após a impressão do resultado).

*/

//#include "determinante.h"
#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
    
    
    int l =0;
    
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n;j++){
            
            if(j!=c){
                m_saida[i-1][l] = m_entrada[i][j];
                l++;
            }
            
        }
        l=0;
    }
            


}

float calcula_determinante(int n, float m_entrada[n][n]) {
    
    int det =0,det_outra;
    float outra_m[n-1][n-1];
    
    if (n == 1){
        return m_entrada[0][0];
    }else{
        for(int k= 0; k < n; k++){
            remove_primeira_linha_e_coluna_c(n,m_entrada, outra_m,k);
            det_outra = calcula_determinante(n-1,outra_m);
            if( k % 2 == 0){
                det += m_entrada[0][k]*(1)*det_outra;
            }else{
                det += m_entrada[0][k]*(-1)*det_outra;
            }
        }
    }
    return det;
    

}

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    float matriz[n][n];
    
    for(int i =0; i < n;i++){
        for(int j = 0; j < n;j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("%.2f\n", calcula_determinante(n,matriz));
    return 0;
}

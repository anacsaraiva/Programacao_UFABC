/* Escreva a função intercala_vetores que recebe dois vetores v_a (tamanho n_a) e v_b (tamanho n_b) e aloca um novo vetor. 
O novo vetor deve possuir todos os números dos dois vetores de entrada em ordem crescente, intercalando os valores dos dois vetores. 
Assuma que os dois vetores estão ordenados em ordem crescente. Por exemplo, se os vetores passados nos parâmetros forem [1, 5, 8, 12, 90] e [2, 5, 7, 46], a função deverá alocar [1, 2, 5, 5, 7, 8, 12, 46, 90]. O vetor alocado deve ser retornado pelo parâmetro **v. Além disso a função retorna (return) o tamanho do vetor alocado.

Protótipo da função:

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v);


Exemplo de código que pode ser usado para testar a chamada da função intercala_vetores (observação: deve ser submetida apenas a função intercala_vetores neste exercício, o código a seguir é apenas um exemplo para testar a função localmente):

int *v_a = malloc(sizeof(int) * 3);
v_a[0] = 10;
v_a[1] = 30;
v_a[2] = 50;
int *v_b = malloc(sizeof(int) * 2);
v_b[0] = 20;
v_b[1] = 40;
int *v_r;
int n_r = intercala_vetores(v_a, 3, v_b, 2, &v_r);
int i;
for (i = 0; i < n_r; i++)
	printf("%d ", v_r[i]);
free(v_a);
free(v_b);
free(v_r);


Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/puts/fprintf/fscanf e headers adicionais (por exemplo, stdio.h). Neste exercício, pode usar stdlib.h.*/

#include "vetor.h"
#include <stdlib.h>

int intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v) {
    
    int tam = n_a + n_b;
    
    int *vetor = malloc(sizeof(int)*tam);
    
    int j = 0, k = 0;
    
    for(int i = 0; i < tam;i++){
        
        if(*(v_a + j) < *(v_b + k) && j < n_a){
            vetor[i] = *(v_a +j);
            j++;
            
        }else{
            if(k < n_b){
                vetor[i] = *(v_b +k);
                k++;
            }else{
                vetor[i] = *(v_a +j);
                j++;
            }
        }
    }
    *v= vetor;
    
    return tam;
    
    
}
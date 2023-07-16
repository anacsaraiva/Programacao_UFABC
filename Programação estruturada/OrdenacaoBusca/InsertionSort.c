/*Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos usando o algoritmo Insertion Sort (ordem crescente).

Entrada:

O programa recebe um inteiro N (quantidade de elementos no vetor) e depois, na segunda linha, recebe N números inteiros (elementos do vetor).
Saída:

A primeira linha, trata-se do vetor na sua ordem original, com os valores separados por espaço em branco.
Ao final de cada iteração do loop mais externo do insertion sort (N-1 iterações), o programa deve imprimir todo o vetor depois da inserção, com seus valores separados por espaço em branco.
Após finalizar a ordenação, imprima o vetor ordenado com seus valores separados por espaço em branco.
A última linha trata-se de um inteiro representando o número de comparações entre elementos do vetor que foi necessário realizar.
Importante: para impressão do vetor, antes do primeiro elemento não há nada impresso, assim como não há nada impresso depois do último elemento do vetor (não há um caractere espaço ao final da linha, existe apenas uma quebra de linha).*/

#include <stdio.h>

void imprime(int *v, int n){
    
    for(int i = 0; i < n;i++){
        printf("%d",v[i]);
        if(i != n-1){
            printf(" ");
        }
    }
    printf("\n");
}

void insertion_sort(int *v,int n){
    
    int i,k;
    int inter = 0;
    
    for(i=1; i < n;i++){
    
        int item_atual = v[i];
        int indice_para_inserir = i;
        
        for(k = i -1; k >=0; k--){
            
            if(item_atual < v[k]){
                inter++;
            
                v[k+1] = v[k];
                indice_para_inserir--;
            }else{
                inter++;
                break;
            }
        }

        
        v[indice_para_inserir] = item_atual;
        imprime(v,n);
    }

    imprime(v,n);
    printf("%d",inter);
    printf("\n");

    
}

int main(){
    
    int n;
    scanf("%d", &n);
    int v[n];
    
    for(int i = 0; i < n;i++){
        scanf("%d", &v[i]);
    }
    
    imprime(v,n);
    insertion_sort(v,n);
    
}
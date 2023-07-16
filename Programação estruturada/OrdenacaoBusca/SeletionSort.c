/*Escreva um programa que receba um vetor de inteiros de tamanho N e ordene os seus elementos usando o algoritmo Selection Sort (ordem crescente).

Entrada:

O programa recebe um inteiro N (quantidade de elementos no vetor) e depois, na segunda linha, recebe N números inteiros (elementos do vetor).
Saída:

A primeira linha, trata-se do vetor na sua ordem original, com os valores separados por espaço em branco.
Ao final de cada iteração do loop mais externo do selection sort (N-1 iterações), o programa deve imprimir todo o vetor, com seus valores separados por espaço em branco.
Após finalizar a ordenação, imprima o vetor ordenado com seus valores separados por espaço em branco.
A última linha trata-se de um inteiro representando o número de vezes que foi necessário realizar uma troca entre elementos diferentes do vetor.
Importante: para impressão do vetor, antes do primeiro elemento não há nada impresso, assim como não há nada impresso depois do último elemento do vetor (não há um caractere espaço ao final da linha, existe apenas uma quebra de linha).*/

#include <stdio.h>
#include <stdlib.h>

void imprime(int *v, int n){
    
    for(int i = 0; i < n;i++){
        printf("%d",v[i]);
        if(i != n-1){
            printf(" ");
        }
    }
    printf("\n");
}

void selection_sort(int *v,int n){
    
    int i,k;
    int inter=0;
    
    for(i=0 ; i < n-1;i++){
        
        int indice_menor = i;

        for(k = i+1; k < n; k++){
            if(v[k] < v[indice_menor]){
                indice_menor = k;
            }
        }
        if(indice_menor != i){
            inter++;
            int tmp = v[i];
            v[i] = v[indice_menor];
            v[indice_menor] = tmp;
        }
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
    selection_sort(v,n);
    
}
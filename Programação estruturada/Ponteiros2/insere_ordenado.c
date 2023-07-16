/* Faça um programa que leia um inteiro (que será o tamanho de um vetor de double a ser alocado), depois fique lendo números double:

• Cada número deverá ser inserido ordenado (ordem crescente) em um vetor. Assuma que sempre haverá espaço para inserir elementos (não serão fornecidos mais números do que a capacidade do vetor alocado).
• Após cada inserção, imprima o vetor completo, com uma casa decimal para cada número (apenas imprima os números lidos, desconsidere as posições do vetor que não foram preenchidas). Inclua uma quebra de linha ao final da impressão do vetor.
O programa encerra quando o usuário digitar o número -1 (não imprima o vetor após o usuário digitar -1, apenas encerre o programa). */

#include <stdio.h>
#include <stdlib.h>

double* ordena_vetor(int i, double *v){
            
    for(int j = 0; j < i; j++){
        for(int k = j;k < i; k++){
            if(v[j] > v[k]){
                int aux = v[j];
                v[j] = v[k];
                v[k] = aux;
            }
        }
    }
    return v;
}

void imprime_vetor(int i,double *v){
    
    for(int w = 0; w < i ;w++){
                
        printf("%.1lf ", v[w]);
        }
        printf("\n");
}


int main (){
    
    int n;
    scanf("%d", &n);
    
    double *v = malloc(sizeof(double)*n);
    
    for(int i = 0; i <= n;i++){
        double n2;
        
        scanf("%lf", &n2);
        
        
        if(n2 != -1){
            v[i] = n2;
            ordena_vetor(i,v);
            imprime_vetor(i,v);
            
        }else{
            ordena_vetor(i,v);
            imprime_vetor(i,v);
            break;

            

        }
    }
    
    free(v);
    
}
/*Escreva um programa que leia uma matriz com n x n (assuma que n é par). Após isso, imprima o resultado da matriz dobrada*/

#include <stdio.h>

int main(){
    
    int n = 0;
    scanf("%d", &n);
    int d = n/2;
    int matriz[n][n];
    int matriz2[n][d];
    int matriz3[d][d];
    
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            scanf("%d", &matriz[i][j]);
        }
        
    }
    for(int i = 0; i < n;i++){
        int p = n -1;
        for(int j = 0; j < d;j++){
            matriz2[i][j] = matriz[i][j]+matriz[i][p];
            p--;
        }
    }
    for(int j = 0; j < d;j++){
        int p = n -1;
        for(int i = 0; i < d;i++){
            matriz3[i][j] = matriz2[p][j]+matriz2[i][j];
            p--;
        }
        
    }
    for(int i = 0; i < d;i++){
        for(int j = 0; j < d;j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }    
}
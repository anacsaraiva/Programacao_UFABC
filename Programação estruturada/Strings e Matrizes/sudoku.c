/* Faça um programa que leia um tabuleiro 9x9 de inteiros. Seu programa deve verificar se o tabuleiro é válido para o jogo Sudoku. 
Lembrando que, neste jogo, cada linha pode conter apenas números inteiros de 1 a 9 sem repetições. 
O seu programa receberá os 81 números, linha por linha do tabuleiro 9x9. 
Note que é possível que não se saiba alguns valores do tabuleiro (o objetivo do jogo seria preenchê-los, mas não vamos fazer isso agora). 
Para indicar que não se sabe o número em alguma posição será utilizado o valor 0. 
Seu programa deve imprimir SIM se for um tabuleiro válido, e NAO caso contrário. Não esqueça de adicionar uma quebra de linha no fim.*/

#include <stdio.h>

int main(){
    
    int matriz[9][9];
    int parametro;
    
    for(int i = 0; i < 9;i++){
        for (int j = 0; j < 9;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < 9;i++){
        for (int j = 0; j < 9;j++){
            parametro = matriz[i][j];
            
            if(parametro != 0){
                for(int f=0; f < 9; f++){
                    if(matriz[i][f] == parametro && f != j){
                        printf("NAO\n");
                        return 0;
                    }
                    if(matriz[f][j] == parametro && f != i){
                        printf("NAO\n");
                        return 0;
                    }
                }
            }
        }
    }
    int apareceu[9] = {0};

    int li = (1 / 3) * 3;
    int ci = (1 % 3) * 3;

    for (int i = li; i < li + 3; i++) {
        for (int j = ci; j < ci + 3; j++) {
            parametro = matriz[i][j];
            if (parametro == 0) {
                continue; 
            }
            if (apareceu[parametro-1]) {
                printf("NAO\n");
                return 0;
            }
            apareceu[parametro-1] = 1; 
        }
    }
  
    printf("SIM\n");
 
}
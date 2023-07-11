/* Faça uma calculadora com Operações Matriciais
PESO DA QUESTÃO: 2

Implemente as seguintes operações:
Soma
A função recebe duas matrizes a e b, e retorna uma matriz resp com a resposta.
A soma é realizada diretamente elemento a elemento.
Transposta
A função recebe uma matriz a e retorna uma matriz resp com a resposta.
Concatenação Horizontal e Vertical
A função recebe duas matrizes a e b, e retorna uma matriz resp com a resposta.
A concatenação horizontal copia a matriz a e junta com a matriz b em sua direita.
A concatenação vertical copia a matriz a e junta com a matriz b logo abaixo.
Multiplicação
A função recebe duas matrizes a e b, e retorna uma matriz resp com a resposta.
Lembre-se: Multiplicação de matrizes não é elemento à elemento como na soma.
Detalhes de implementação
Considere que ambas as matrizes a e b tenham a mesmas dimensões, definida pelos parâmetros n_linhas e n_colunas da função.
Não é preciso informar a dimensão resultante da matriz resp.
Considere que todas as matrizes já tenham as dimensões necessárias para todas as operações.
MAX_LINHAS e MAX_COLUNAS são constantes (no caso, ambas valem 50).
NÃO implementar a função main e não utilizar funções de entrada e saída (scanf, gets, printf, puts, ...).

Entrada do programa, em ordem:
DIMENSÃO DA MATRIZ <LINHA> E <COLUNA> com a quantidade de linhas da(s) matriz(es);
MATRIZ DE INTEIROS A que será o argumento da função.
OPERAÇAO:
+ Soma
T Transposta
CH Concatena Horizontal
CV Concatena Vertical
X Multiplicacão
MATRIZ DE INTEIROS B [exceto para operação T] que será o segundo argumento da função.
Saída do programa:
MATRIZ RESULTANTE*/

//#include "operacoes.h"


void soma(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for(int i = 0; i < n_linhas;i++){
        for(int j = 0; j < n_colunas;j++){
            resp[i][j] = a[i][j] + b[i][j];
        }
    }
}

void transposta(int m[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for(int i = 0; i < n_linhas;i++){
        for(int j = 0; j < n_colunas;j++){
            resp[j][i] = m[i][j];
        }
    }
}

void concatena_horizontal(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for(int i = 0; i < n_linhas;i++){
        for(int j = 0; j < n_colunas+n_colunas;j++){
            if(j < n_colunas){
                resp[i][j] = a[i][j];
            }
            if(j >=n_colunas){
                resp[i][j] = b[i][j-n_colunas];
                
            }
        }
    }
}

void concatena_vertical(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for(int i = 0; i < n_linhas+n_linhas;i++){
        for(int j = 0; j < n_colunas;j++){
            if(i < n_linhas){
                resp[i][j] = a[i][j];
            }
            if(i >= n_linhas){
                resp[i][j] = b[i-n_linhas][j];
                
            }
        }
    }
}

void multiplicacao(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    
    for(int i = 0; i < n_linhas;i++){
        for(int j = 0; j < n_colunas;j++){
            for(int f = 0; f< n_colunas;f++){
                resp[i][j] += a[i][f] * b[f][j];
            }
        }
    }
}

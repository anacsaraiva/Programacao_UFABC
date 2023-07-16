/*Uma empresa está desenvolvendo um programa para cadastro de modelos de discos voadores. Cada modelo de disco é armazenado na estrututra DiscoVoador definida a seguir. A estrutura possui o modelo do disco, velocidade (em km/h), aceleração (em km/s2
 ) e autonomia (em anos-luz).

Considere a estrutura DiscoVoador definida a seguir:

struct DiscoVoador {
    char modelo[50];
    int velocidade, aceleracao, autonomia;
};
Implemente a função insere_disco, que recebe um modelo de disco voador (parâmetro novo_disco), um vetor de discos (parâmetro discos) e a quantidade de modelos de discos. O vetor inicial já está ordenado, com os modelos armazenados nas primeiras n_discos posições, mas sem o novo disco). O vetor discos tem tamanho n_discos+1, portanto, há espaço para inserir um novo modelo de disco voador. A função deve inserir o novo modelo de disco no vetor passado, mantendo a ordenação.

Protótipo da função:

void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos);
Critério para ordenação: A ordenação deve considerar os campos velocidade, aceleracao e autonomia, nesta ordem de prioridade (todos em ordem crescente). Por exemplo, um disco com velocidade=2 deve vir antes de um disco com velocidade=10. Outro exemplo, se os discos A e B tem velocidades iguais, mas o disco A tem aceleracao=40 e o disco B tem aceleracao=20, o disco B deve ficar antes na ordenação. Se ocorrer empate nos campos velocidade e aceleracao, o desempate será pelo campo autonomia (quem tiver a menor autonomia, deve ficar antes na ordenação).



Importante: submeta apenas a função. Não use variáveis globais. Não inclua o main. Não use printf/fprintf/puts/gets/fgets/scanf/fscanf e headers adicionais (por exemplo, stdio.h e stdlib.h).

A definição da struct DiscoVoador já existe no sistema de correção automática (portanto, não inclua a definição da struct no código submetido). É necessário incluir a seguinte linha no início do código submetido:

#include "discos.h"*/

#include "discos.h"

void insere_disco(struct DiscoVoador novo_disco, struct DiscoVoador discos[], int n_discos) {
    
    int f = 0,g=0, k=0;
    int cont = 0;
    
    for(int i = 0; i <= n_discos;i++){
        
     
        if(novo_disco.velocidade < discos[i].velocidade){
                
            for(int j = n_discos-1; j >= i;j--){
    
                discos[j+1] = discos[j];
            }
            discos[i] = novo_disco;
            break;
            
        }
        
        if(novo_disco.velocidade == discos[i].velocidade && (discos[i].aceleracao > novo_disco.aceleracao)){
            
            for(int j = n_discos-1; j >= i;j--){
    
                discos[j+1] = discos[j];
            }
            discos[i] = novo_disco;
            break;
        }
        
        if(novo_disco.velocidade == discos[i].velocidade && (discos[i].aceleracao == novo_disco.aceleracao) && (novo_disco.autonomia < discos[i].autonomia)){
            
            for(int j = n_discos; j >= i;j--){
    
                discos[j] = discos[j-1];
            }
            discos[i] = novo_disco;
            break;
        }
        
        if(i == n_discos){
            discos[i] = novo_disco;
        }
            
        }
    
    }            
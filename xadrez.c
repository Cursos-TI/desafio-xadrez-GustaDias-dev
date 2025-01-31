#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void recursivo (int b){
    if (b <= 5){
        printf("%d Superior direita\n", b);
        recursivo(b + 1);
    }
}
void recursivo2 (int t){
    if (t <= 5){
        printf("%d Cima \n", t);
        recursivo2(t + 1);
    }
}
void recursivo3 (int r){
    if (r <= 8){
        printf("%d Esquerda \n", r);
        recursivo3(r + 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    /*int bispo = 0;
    int torre = 0;
    int rainha = 0 ;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while (bispo <= 5)
    {
        printf("Bispo %d superior direita.\n", bispo);
        bispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    while (torre <= 5)
    {
        printf("Torre %d direita. \n", torre);
        torre++;
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    while (rainha <= 8)
    {
        printf("Rainha %d esquerda. \n", rainha);
        rainha++;
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    //Usando o for
    for (int i = 1; i <= 1; i++){
        for (int j = 0; j <= 2; j++){
            printf("Cavalo baixo\n");
        }
        printf("Cavalo esquerda\n");
    }

    //Usando o while
    int i = 1;
    while (i <= 1) {
        int j = 0;
        while (j <= 2) {
            printf("Cavalo baixo \n");
            j++;
        }
        printf("Cavalo esquerda\n");
        i++;
    }*/

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    int bispo = 0;
    printf ("O Bispo se moveu: \n");
    recursivo(bispo);

    int torre = 0;
    printf ("A Torre se moveu: \n");
    recursivo2(torre);

    int rainha = 0;
    printf ("A Rainha se moveu: \n");
    recursivo3(rainha);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    
    printf("Movimentação do Cavalo:\n");
    
    for (int i = 0, j = 0; i < 3|| j < 1;) {
        if (i < 3) {
            printf("Cima\n");
            i++;
            if (i < 3) continue; 
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
            if (j == 1) break; 
        }
    
    }


    return 0;
}

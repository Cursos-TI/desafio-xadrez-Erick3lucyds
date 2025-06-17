#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

    // Nível Novato - Movimentação das Peças


    // Implementação de Movimentação da Torre

    printf("- Movimento da Torre - \n");
        for(int i = 0; i < 5; i++){
            printf("Direita\n");
        }
        printf("\n");

    // Implementação de Movimentação do Bispo

        printf("- Movimento do Bispo - \n");
        int movimento_bispo = 0;
        while (movimento_bispo < 5) {
            printf("Cima, direita\n");
            movimento_bispo++;
        }
        printf("\n");

    // Implementação de Movimentação da Rainha

    printf(" - Movimento da Rainha - ");
    int movimento_rainha = 0 ;
    do {
        printf("Esquerda\n");
    } while (movimento_rainha < 8 );
    printf ("\n");
    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

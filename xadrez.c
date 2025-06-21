#include <stdio.h>

// funções recursivas


// torre
void MovimenTorreRecursivo(int casas_restantes){
    if(casas_restantes == 0) { //Ponto de parada
        return;
    }
    printf("Direita\n"); // Movimento: Faz um passo para direita

    MovimenTorreRecursivo(casas_restantes -1); // Chamada Recursiva: Pede para mover para a próxima casa


}



// bispo
void MovimentoBispoRecursivo(int casas_restantes){
    if(casas_restantes == 0){ // Ponto de parada
        return;
    }
    int loop_vertical = 0;
    for (loop_vertical = 0; loop_vertical < 1; loop_vertical++){ // Loop externo = vertical
        printf("Cima,");
        int loop_horizontal = 0;
        while (loop_horizontal < 1){ // Loop interno = horizontal 
            printf("Direita\n");
            loop_horizontal++;
        }
    }
    MovimentoBispoRecursivo(casas_restantes- 1); //Chamada recursiva
}

//rainha
void MovimentoRainhaRecursivo(int casas_restantes){
    if (casas_restantes == 0){ // Ponto de parada
        return;
    }
    printf("Esquerda\n"); // Movimento
    MovimentoRainhaRecursivo(casas_restantes -1); //Chamada recursiva
}

int main() {

    printf(" - Movimento da Torre -\n");
    MovimenTorreRecursivo(5);
    printf("\n");

    printf(" - Movimento do bispo -\n");
    MovimentoBispoRecursivo(5);
    printf("\n");

    printf(" - Movimento da Rainha -\n");
    MovimentoRainhaRecursivo(8);
    printf("\n");

    printf(" - Movimento do Cavalo - \n");

    int movimentos_verticais_realizados = 0;
    int max_movimentos_verticais = 2;
    int max_movimentos_horizontais = 1;
    int i_vertical;
    int i_horizontal;


    for (i_vertical = 0; i_vertical < max_movimentos_verticais; i_vertical++){ // lOOP EXTERNO = VERTICAL
        printf("Cima\n");
        movimentos_verticais_realizados++;

        if (movimentos_verticais_realizados == max_movimentos_verticais){ // Condição para ativar a segunda parte do L
            int i_horizontal = 0;

            while (i_horizontal < max_movimentos_horizontais) { // Loop interno = horizontal
                printf("Direita\n");
                i_horizontal++;
                if(i_horizontal == max_movimentos_horizontais){ // uso do break
                    break;
                }
            }
        }
            
        
     
    

    return 0;
}

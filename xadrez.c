#include <stdio.h>

void MovimenTorreRecursivo(int casas_restantes){
    if(casas_restantes == 0) {
        return;
    }
    printf("Direita\n");

    MovimenTorreRecursivo(casas_restantes -1);
}

void MovimentoBispoRecursivo(int casas_restantes){
    if(casas_restantes == 0){
        return;
    }
    printf("Cima,Direita\n");
    MovimentoBispoRecursivo(casas_restantes -1);
}
void MovimentoRainhaRecursivo(int casas_restantes){
    if (casas_restantes == 0){
        return;
    }
    printf("Esquerda\n");
    MovimentoRainhaRecursivo(casas_restantes -1);
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

    int i_vertical;
    int i_horizontal;

    for (i_vertical = 0; i_vertical < 2; i_vertical++){
        prinf("Baixo\n");
        if (i_vertical == 1){
            i_horizontal = 0;
            while (i_horizontal<1) {
                printf("Esquerda\n");
                i_horizontal++;
            }
        }
    } 
    

    return 0;
}

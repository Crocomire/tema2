#include <stdio.h>

// Função recursiva que será re-utilizado em diversas peças
void moverRecursivo(int casas, char direcao[]) {
    if (casas > 0) {
        printf("%s\n", direcao);
        moverRecursivo(casas - 1, direcao);
    }
}

int main() 
{

    // --- Movimento da Torre ---

    printf("Movimento da Torre:\n");
    int casas_torre = 5;
    moverRecursivo(casas_torre, "Direita");
    printf("\n");

    // --- Movimento do Bispo ---

    printf("Movimento do Bispo:\n");
    int passos_bispo = 3; // número de repetições da diagonal (vertical x horizontal)
    for (int i = 0; i < passos_bispo; i++) {
        for (int j = 0; j < 1; j++) {
            moverRecursivo(1, "Cima, Direita"); //Mover diagonalmente
        }
    }
    printf("\n");
        
    // --- Movimento da Rainha ---

    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    moverRecursivo(casas_rainha, "Esquerda");
    printf("\n");

    // --- Movimento do Cavalo ---

    printf("Movimento do Cavalo:\n");
    int passo_baixo = 2;
    int passo_esquerda = 1;
    for (int movimento = 0; movimento < 1; movimento++) {

        for (int i = 0; i < passo_baixo; i++) {
            printf("Cima\n");
        }

        int contador_direita = 0;
        while (contador_direita < passo_esquerda) {
            printf("Direita\n");
            contador_direita++;
        }
    }
    printf("\n");
    
    return 0;
}
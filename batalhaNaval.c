#include <stdio.h>

void lin(){
    printf("\n");
}


int main(){

    lin();
    printf("\033[1;42m#### JOGO BATALHA NAVAL ####\033[m\n");
    lin();

    // #### JOGO DE BATALHA NAVAL AVENTUREIRO ####

    int tabuleiro [10][10] = {0};
    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna [10] = {1,2,3,4,5,6,7,8,9,10};

  
    // ESTRUTURA DA LINHA DO ALFABETO
    printf("   ");
    for (int i = 0; i < 10; i++){
        printf("\033[1;41m%c \033[m", linha[i]);
    }
    
    // ESTRUTURA DA COLUNA DE 1 A 10 E A MATRIZ
    lin();
    for (int j = 0; j < 10; j++){
        printf("\033[1;41m%2d \033[m", coluna[j]);
        for (int i = 0; i < 10; i++){

            // Coloca o navio da diagonal direita
            if (i == j){
                tabuleiro[i][j] = 3;
                printf("\033[1;44m%d \033[m", tabuleiro[i][j]);
            
            // Coloca o navio na diagonal esquerda
            }else if (i + j == 9){
                tabuleiro[i][j] = 3;
                printf("\033[1;44m%d \033[m", tabuleiro[i][j]);
            }else{
                printf("\033[1;44m%d \033[m", tabuleiro[i][j]);
            }


            // Coloca 2 navios em diagonal de forma delimitada, formando então um "V"
            int inicio_linha = 3, inicio_linha_2 = 7;
            int inicio_coluna = 0, inicio_coluna_2 = 0;
            int tamanho = 3, tamanho_2 = 3;
            
            // Estrutura da primeira diagonal 
            for (int k = 0; k < tamanho; k++){
                tabuleiro[inicio_linha + k][inicio_coluna + k] = 3;
            }

            // Estrutura da segunda diagonal
            for (int l = 0; l < tamanho_2; l++){
                tabuleiro[inicio_linha_2 - l][inicio_coluna_2 + l] = 3;

            }

            // Coloca um navio na vertical
            int linha_vertical = 8;
            int coluna_vertical = 3;
            int tamanho_vertical = 3;

            for (int v = 0; v < tamanho_vertical; v++){
                tabuleiro[linha_vertical][coluna_vertical + v] = 3;
            }

            // Coloca o navio na horizontal

            int linha_horizontal = 3; 
            int coluna_horizontal = 8;
            int tamanho_horizonte = 3;

            for (int h = 0; h < tamanho_horizonte; h++){
                tabuleiro[linha_horizontal + h][coluna_horizontal] = 3;
            }            
            
        }
        lin();
    }

    lin();
    printf("\033[1;42m############################\033[m\n");
    lin();

    return 0;
}
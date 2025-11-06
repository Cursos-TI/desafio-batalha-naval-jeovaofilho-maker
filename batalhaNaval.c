#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios
// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
// Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
// Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
// Jeová Ricardo

//variáveis
#define matrizlinhas 10
#define matrizcolunas 10
#define agua 0
#define navio 3
#define cruz 1
#define cone 2
#define octaedro 4

void mensagem(){
        printf("## Desafio Batalha Naval ##\n");
        }
int main(){

    //Variáveis
    char colunas[matrizcolunas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[matrizlinhas] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[matrizcolunas][matrizlinhas];
    int num;
    //Implementado matriz
    for(int i = 0; i < matrizlinhas; i++){
        for(int j = 0; j < matrizcolunas; j++){    
        tabuleiro[i][j] = agua;   
    }
    }

    //Implementando navio na horizontal
    for(int i = 0; i < navio; i++){
        tabuleiro[1][0 + i] = navio;
        //implementando cone
        tabuleiro[0][7] = cone;
        tabuleiro[1][6] = cone;
        tabuleiro[1][7] = cone;
        tabuleiro[1][8] = cone;
        tabuleiro[2][5] = cone;
        tabuleiro[2][6] = cone;
        tabuleiro[2][7] = cone;
        tabuleiro[2][8] = cone;
        tabuleiro[2][9] = cone;
    }

    //Implementando navio na vertical
    for(int j = 0; j < navio; j++){
        tabuleiro[3 + j][0] = navio;
    //Implementando cruz
        tabuleiro[3][7] = cruz;
        tabuleiro[4][6] = cruz;
        tabuleiro[4][7] = cruz;
        tabuleiro[4][8] = cruz;
        tabuleiro[5][7] = cruz;
    }

    //Implementando navio na 1º diagonal
    for(int i = 0; i < navio; i++){
       for(int j = 0; j < navio; j++){
        tabuleiro[9][9] = navio;
        tabuleiro[8][8] = navio;
        tabuleiro[7][7] = navio;
    
    //Implementando octaedro
        tabuleiro[3][3] = octaedro;
        tabuleiro[4][2] = octaedro;
        tabuleiro[4][3] = octaedro;
        tabuleiro[4][4] = octaedro;
        tabuleiro[5][1] = octaedro;
        tabuleiro[5][2] = octaedro;
        tabuleiro[5][3] = octaedro;
        tabuleiro[5][4] = octaedro;
        tabuleiro[5][5] = octaedro;
        tabuleiro[6][2] = octaedro;
        tabuleiro[6][3] = octaedro;
        tabuleiro[6][4] = octaedro;
        tabuleiro[7][3] = octaedro;
    }
    printf("");
    }

    //Implementando navio na 2º diagonal
    for(int i = 0; i < navio; i++){
       for(int j = 0; j < navio; j++){
        tabuleiro[9][0] = navio;
        tabuleiro[8][1] = navio;
        tabuleiro[7][2] = navio;
    }
    printf("");
    }

    //Implementando o tabuleiro com as colunas e as linhas
    mensagem();
    printf("   ");
    for(int j = 0; j < matrizcolunas; j++){
        printf("%c ", colunas[j]);
    }
    printf("\n");
    for(int i = 0; i < matrizlinhas; i++){
        printf("%2d ", linhas[i]);
            for(int j = 0; j < matrizcolunas; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Nível Novato - Posicionamento dos Navios
// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
// Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
// Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
// Jeová Ricardo
void mensagem(){
        printf("## Desafio Batalha Naval ##\n");
        }
int main(){

    mensagem();
   
    //Variáveis
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10];
    int agua = 0;
    int navio = 3;

    //Implementado matriz
    for(int i = 0; i<10; i++){
        for(int j = 0; j < 10; j++){    
        tabuleiro[i][j] = agua;   
    }
    }

    //Implementando navio na horizontal
    for(int i = 0; i < 3; i++){
        tabuleiro[2][3 + i] = navio;
    }

    //Implementando navio na vertical
    for(int j = 0; j < 3; j++){
        tabuleiro[5 + j][7] = navio;
    }

    //Implementando o tabuleiro com as colunas e as linhas
    printf("   ");
    for(int j = 0; j < 10; j++){
        printf("%c ", colunas[j]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%2d ", linhas[i]);
            for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
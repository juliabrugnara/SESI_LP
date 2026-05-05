#include <stdio.h>

int main()
{
    int matriz[3][3];
    //PRIMEIROA LEITURA CORRESPONDE A LINHA
    printf("Digite os elementos da matris 3x3:\n");
    for(int l = 0; l < 3; l++) {
        //SEGUNDO FOR CORRESPONDE A COLUNA
        for(int c = 0; c < 3; c++) {
            printf("Elemento [%d][%d]", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    //EXIBIÇÃO DA MATRIZ
    printf("\nMatriz digitada:\n");
    for(int l = 0; l < 3; l++) {
        for(int c = 0; c < 3; c++) {
            printf("%d ", matriz[l][c]);    
        }
        printf("\n");
    }
        
}
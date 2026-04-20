#include <stdio.h>

int main() {
    int matriz1[2][2];
    int matriz2[2][2];
    int soma[2][2];

    printf("Digite os valores da primeira matriz 2x2:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os valores da segunda matriz 2x2:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    
    printf("\nMatriz resultante da soma:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
  


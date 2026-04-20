#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    const int MAX = 10;
    int i, qtd_pares = 0;
    int v_valores[MAX];
    int v_pares[MAX];

   
    for (i = 0; i < MAX; i++) {
        printf("Insira o %dº valor: ", i + 1);
        scanf("%d", &v_valores[i]);
    }

    for (i = 0; i < MAX; i++) {
        if (v_valores[i] % 2 == 0) {
            v_pares[qtd_pares] = v_valores[i]; 
            qtd_pares++;
        }
    }

    
    printf("\nQuantidade de pares: %d\n", qtd_pares);
    printf("Números pares: ");

    for (i = 0; i < qtd_pares; i++) {
        printf("%d ", v_pares[i]);
    }

    printf("\n");

    return 0;
}
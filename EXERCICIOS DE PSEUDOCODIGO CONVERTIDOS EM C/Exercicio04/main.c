#include <stdio.h>

int main() {
    int teste1 = -1, teste2 = -1, teste3 = -1;  // inicializa com valor inválido
    float classFinal;

    while (teste1 < 0 || teste1 > 20) {
        printf("Digite a nota do primeiro teste: ");
        scanf("%d", &teste1);
        if (teste1 < 0 || teste1 > 20) {
            printf("Nota inválida, a nota tem que estar entre 0 e 20.\n");
        }
    }

    while (teste2 < 0 || teste2 > 20) {
        printf("Digite a nota do segundo teste: ");
        scanf("%d", &teste2);
        if (teste2 < 0 || teste2 > 20) {
            printf("Nota inválida, a nota tem que estar entre 0 e 20.\n");
        }
    }

    while (teste3 < 0 || teste3 > 20) {
        printf("Digite a nota do terceiro teste: ");
        scanf("%d", &teste3);
        if (teste3 < 0 || teste3 > 20) {
            printf("Nota inválida, a nota tem que estar entre 0 e 20.\n");
        }
    }

    classFinal = teste1 * 0.2 + teste2 * 0.5 + teste3 * 0.3;

    if (classFinal >= 10) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
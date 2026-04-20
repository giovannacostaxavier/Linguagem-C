#include <stdio.h>

int main() {
    int maior=0, num;
    int i = 1;

    while (i) {
        printf("Digite o %dº número :\n", i);
        scanf("%d", &num);

        if (num < 0) {
            break;
        }else if (i == 1) {
            maior = num;
        
            
        } else if (num > maior) {
                
                maior = num;
        }
             i++; 
        }

      
         printf("O maior número é %d :\n", maior);

        return 0;

    }

  
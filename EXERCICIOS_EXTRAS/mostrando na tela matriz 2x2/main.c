
#include <stdio.h>

int main(){
    int matriz [2][2];
    
    printf("Digite o primeiro número: ");
    scanf("%d",&matriz[0][0]);
    printf("Digite o segundo número: ");
    scanf("%d",&matriz[0][1]);
    printf("Digite o terceiro número: ");
    scanf("%d",&matriz[1][0]);
    printf("Digite o quarto número: ");
    scanf("%d",&matriz[1][1]);
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",matriz[i] [j]);
        }
        printf("\n");
    }


    return 0;
}

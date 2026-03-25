#include <stdio.h>

int main(){
    int qtd,i,idade,soma=0;
    float media=0.0;
    
     printf("Quantas idades deseja digitar? \n");
     scanf("%d",&qtd);
     
    for(i=1;i<=qtd;i++){
        printf("Digite a %dº idade \n ",i);
        scanf("%d",&idade);
        soma += idade;
    }
    media = (float)soma/qtd;
    printf("A soma das idades é igual a: %d e a média é: %.1f\n",soma,media);

    return 0;
}

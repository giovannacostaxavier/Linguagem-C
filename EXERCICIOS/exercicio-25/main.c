#include <stdio.h>

int main(){
    int idade,soma=0,contIdades=0;
    float media=0.0;
    char resp='s';
    
    
    while(resp =='s'|| resp =='S'){
    printf("Digite uma idade: ");
    scanf("%d",&idade);
    soma+=idade;
    contIdades+=1;
    printf("Deseja continuar? (Digite S para sim e N para não) ");
    scanf(" %c",&resp);
    
    }
    media=(float)soma/contIdades;
    
    printf("A soma das idades é %d e a média é %.1f ",soma,media);
    
    
    return 0;
}
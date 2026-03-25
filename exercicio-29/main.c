#include <stdio.h>

int main(){
    int idade,soma=0,contIdades=0;
    float media=0.0;
 
    
    idade=0;
    while(idade>=0){
    printf("Digite uma idade: ");
    scanf("%d",&idade);
    if(idade>0){
    soma+=idade;
    contIdades+=1;
    }else{
        printf("Idade inválida \n");
    }
    }
    media=(float)soma/contIdades;
    
    printf("A soma das idades é %d e a média é %.1f ",soma,media);
    
    
    return 0;
}
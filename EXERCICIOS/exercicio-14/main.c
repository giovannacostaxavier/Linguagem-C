#include <stdio.h>

int main(){
    float media=0.0;
    int i, soma=0;
    for(i=1+1;i<=100;i++){
        if(i%2==0){
            soma +=i;
        }
    }
    media = soma/50;
    printf("A soma de todos os números é: %d, e a média é: %.2f \n",soma,media);
    return 0;
}


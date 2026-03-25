#include <stdio.h>

int main(){
    float media=0.0;
    int i,maior,menor,soma=0,cont_pares=0;
    
    
    printf("Digite o menor número: ");
    scanf("%d",&menor);
    printf("Digite o maior número: ");
    scanf("%d",&maior);
    i=menor;
    while(i<=maior){
        if(i%2==0){
            soma +=i;
            cont_pares+=1;
        }
        i++;
    }
    media = soma/cont_pares;
    printf("A soma de todos os números é: %d, e a média é: %.1f \n",soma,media);
    return 0;
}
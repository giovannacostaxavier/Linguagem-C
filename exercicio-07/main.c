#include <stdio.h>

int main(){
    float teste1,teste2,teste3,media=0;
    
    printf("Digite a nota do primeiro teste: ");
    scanf("%f",&teste1);
    printf("Digite a nota do segundo teste: ");
    scanf("%f",&teste2);
    printf("Digite a nota do terceiro teste: ");
    scanf("%f",&teste3);
    media=(teste1+teste2+teste3)/3;
    if(media>=9.5){
        printf("APROVADO"); 
    }else{
        printf("REPROVADO");
    }
    return 0;
}

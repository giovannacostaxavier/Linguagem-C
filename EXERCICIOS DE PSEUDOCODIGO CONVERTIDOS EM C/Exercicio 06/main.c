
#include <stdio.h>

int main(){
    float nota1,nota2,nota3,media;
    
    printf("Digite a nota do primeiro teste: ");
    scanf("%f",&nota1);
    printf("Digite a nota do segundo teste: ");
    scanf("%f",&nota2);
    printf("Digite a nota do terceiro teste: ");
    scanf("%f",&nota3);
    media=(nota1+nota2+nota3)/3;
    if(media >= 9.5){
       printf("APROVADO"); 
    }else{
        printf("REPROVADO");
    }

    return 0;
}

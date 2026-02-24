
#include <stdio.h>

int main(){
    int teste1,teste2,teste3;
    float classFinal;
    printf("Digite a nota do primeiro teste: ");
    scanf("%d",&teste1);
    
    while(teste1 <0 || teste1 >20){
        printf("Nota inválida, digite uma nota de 0 a 20: ");
        scanf("%d",&teste1);
    }
    printf("Digite a nota do segundo teste: ");
    scanf("%d",&teste2);
     while(teste2 <0 || teste2 >20){
        printf("Nota inválida, digite uma nota de 0 a 20: ");
        scanf("%d",&teste2);
    }
    printf("Digite a nota do terceiro teste :");
    scanf("%d",&teste3);
     while(teste3 <0 || teste3 >20){
        printf("Nota inválida, digite uma nota de 0 a 20 :");
        scanf("%d",&teste3);
    }
    classFinal=teste1*0.2+teste2*0.5+teste3*0.3;
    if(classFinal>=10){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }
    

    return 0;
}

#include <stdio.h>

int main(){
    float mat,prog,sis,media = 0;
    
    
    printf("Digite a nota do teste de matemática: ");
    scanf("%f",&mat);
    printf("Digite a nota do teste de programação: ");
    scanf("%f",&prog);
    printf("Digite a nota do teste de sistemas de informação: ");
    scanf("%f",&sis);
    
    media = (sis+prog+mat)/3;
    printf("\n --------------MÉDIA--------------");
    printf("\n Sua média foi : %.2f",media);
    
    
    printf("\n ----------CLASSIFICAÇÃO----------");
    
    if(mat >= 10 && prog >= 10 && sis >= 10){
        printf("\n APROVADO");
        if((mat >= 16 && prog >= 16) || (mat >= 16 && sis >= 16) || (sis >= 16 && prog >= 16)){
            printf(" COM DISTINÇÃO");
        }
    }else{
        printf("\n REPROVADO");
    }
    printf("\n ---------------------------------");
    return 0;
}

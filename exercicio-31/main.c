#include <stdio.h>

int main(){
    int nota,n=1,soma=0;
    float media=0.0;
    
    
    do{
        printf("Digite a %dº nota: ",n);
        scanf("%d",&nota);
        
       do{ if(nota <0 || nota >20){
            printf("Nota inválida! Digite uma nota entre 0 e 20 \n");
            scanf("%d",&nota);
        }
       }while(nota <0 || nota >20);
        
         soma+=nota;
         
         n++;
         
    }while(n<=10);
    
        media= (float)soma/10;
        printf("A soma das notas digitdas é de: %d e a média é: %.2f",soma,media);

    return 0;
}

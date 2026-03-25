#include <stdio.h>

int main(){
    int num1,num2;
    
    do{
    printf("\n Digite um número: ");
    scanf("%d",&num1);
    printf("\n Digite outro número: ");
    scanf("%d",&num2); 
    if(num1==num2){
      printf("Número inválido! Os números não podem ser iguais!");     
    }
    }while(num1==num2);
    
    if(num1>num2){
        printf("O maior número é %d",num1);
    }else{
        printf("O maior número é %d",num2);
    }
    
    return 0;
}
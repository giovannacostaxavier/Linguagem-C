#include <stdio.h>

int main(){
    int op;
    float num1,num2,res;
    printf("----------CALCULADORA--------------- \n");
    
    printf("Digite o primeiro número: \n ");
    scanf("%f",&num1);
    printf("Digite o segundo número: \n ");
    scanf("%f",&num2);
    
    printf("----------ESCOLHA O OPERADOR----------\n");
    printf("      Digite 1 para somar\n");
    printf("      Digite 2 para subitrair\n");
    printf("      Digite 3 para multiplicar\n");
    printf("      Digite 4 para dividir\n");
    scanf("%d",&op);
    printf("--------------------------------------\n");
    
    
    
    switch(op){
        case 1:
                res=num1+num2;
                printf("%.2f \n",res);
        break;
        case 2:
                res=num1-num2;
                printf("%.2f \n",res);
        break;
        case 3:
                res=num1*num2;
                printf("%.2f \n",res);
        break;
        case 4:
            if(num1 == 0 || num2 == 0){
                printf("NÃO SE PODE DIVIDIR POR ZERO, TENTE OUTRO NÚMERO! \n ");
            }else{
                res=num1/num2;
                printf("%.2f \n",res);
            }
        break;
            
        default:
                printf("Operação inválida! \n");
        
    }
    
    printf("-------------------------------------- \n");
    

    return 0;
}

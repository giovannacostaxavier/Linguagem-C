#include <stdio.h>

int main(){
    char op;
    float num1,num2,res;
    printf("----------CALCULADORA----------------- \n");
    printf("                                       \n");
    printf("-------------------------------------- \n");
    
    printf("----------ESCOLHA O OPERADOR----------\n");
    printf("      Digite + para somar\n");
    printf("      Digite - para subitrair\n");
    printf("      Digite * para multiplicar\n");
    printf("      Digite / para dividir\n");
    scanf("%c",&op);
    printf("--------------------------------------\n");
    
    printf("Digite o primeiro número: \n ");
    scanf("%f",&num1);
    printf("Digite o segundo número: \n ");
    scanf("%f",&num2);
    
    
    
    
    
    switch(op){
        case '+':
                res=num1+num2;
                printf("%.2f \n",res);
        break;
        case '-':
                res=num1-num2;
                printf("%.2f \n",res);
        break;
        case '*':
                res=num1*num2;
                printf("%.2f \n",res);
        break;
        case '/':
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

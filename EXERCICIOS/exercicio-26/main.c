#include <stdio.h>

int main(){
    int i=0,num,somaPares=0,somaImpares=0,cont_pares=0,cont_impares=0;
    
    
    while(i<5){
        printf("Digite o um número: ",i);
        scanf("%d",&num);
        if(num%2==0){
            cont_pares+=1;
            somaPares+=num;
        }else{
            cont_impares+=1;
            somaImpares+=num;
        }
        i++;
    }
    printf("Foram digitados %d números pares e %d números impares, a soma dos pares é: %d e a soma dos impares é %d \n",cont_pares,cont_impares,somaPares,somaImpares);
    return 0;
}

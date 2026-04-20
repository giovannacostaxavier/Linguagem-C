#include <stdio.h>

int main(){
    int i,pares=0,impares=0,num;
    
    for(i=1;i<=10;i++){
         printf("Digite o %dº número: \n",i);
         scanf("%d",&num);
        
        if(num%2==0){
            pares+=1;
        }else{
            impares+=1;
        }
    }
    
    
    printf("Foram digitados %d números pares e %d números impares!",pares,impares);

    return 0;
}

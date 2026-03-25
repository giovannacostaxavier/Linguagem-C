#include <stdio.h>

int main(){
    int i,maior,menor;
    
    
    printf("Digite o menor número: ");
    scanf("%d",&menor);
    printf("Digite o maior número: ");
    scanf("%d",&maior);
    i=menor;
    while(i<maior){
        if(i%2==0){
          printf("%d \n",i);  
        }
        i++;
    }
    
    return 0;
}
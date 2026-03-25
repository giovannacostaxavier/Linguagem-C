#include <stdio.h>

int main(){
    
    int i,maior,menor;
    
    printf("Digite o menor número: ");
    scanf("%d",&menor);
     printf("Digite o maior número: ");
    scanf("%d",&maior);
    
    for(i=menor;i<=maior;i++){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
    return 0;
}

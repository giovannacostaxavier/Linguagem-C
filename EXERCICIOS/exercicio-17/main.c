#include <stdio.h>

int main(){
    int i,maior=0,menor=0,num;
    
    for(i=1;i<=3;i++){
         printf("Digite o %dº número: \n",i);
         scanf("%d",&num);
        
        if(i==1){
            maior=num;
            menor=num;
        }else if(num>maior){
           maior=num;
        }else if(num<menor){
            menor=num;
        }
    }
    
    printf("O maior número digitado é %d e o menor número digitado é %d",maior,menor);

    return 0;
}


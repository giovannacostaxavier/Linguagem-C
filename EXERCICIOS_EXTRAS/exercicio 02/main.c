#include <stdio.h>

int main(){
    int num,i,tab;
    
    printf("Digite um número");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        tab=num*i;
     printf("\n %d X %d= %d",num,i,tab);
        
    }

    return 0;
}
#include <stdio.h>

int main(){
    int num,fatorial=1,original;
    printf("Digite um número: ");
    scanf("%d",&num);
    original=num;
     while(num > 0){
         
         fatorial*=num;
         num--;
         
     }
       printf("%d! é %d",original,fatorial); 
    return 0;
}

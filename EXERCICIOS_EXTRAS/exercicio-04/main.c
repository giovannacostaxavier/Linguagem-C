#include <stdio.h>

int main(){
    int num,totdig=0,totsoma=0;
    
   do{
    printf("Digite um número: ");
    scanf("%d",&num);
       
       totdig=totdig+1;
       totsoma=totsoma+num;
        
    } while(num != 0);
    printf("A quantidade de números digitados é de: %d, e a soma entre eles é: %d",totdig,totsoma);

    return 0;
}

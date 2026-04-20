#include <stdio.h>

int main(){
    int num,i,res=1;
    
    printf("Qual tabuada quer calcular? (1 a 10): ");
    scanf("%d",&num);
    i=1;
    while(i<=10){
        res=num*i;
        printf("%d X %d = %d \n",i,num,res);
        i++;
    }

    return 0;
}

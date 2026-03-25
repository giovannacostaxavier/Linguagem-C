#include <stdio.h>

int main(){
    int num,i,res=1;
    
    printf("Qual tabuada quer calcular? (1 a 10): ");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        res=num*i;
        printf("%d X %d = %d \n",i,num,res);
    }

    return 0;
}

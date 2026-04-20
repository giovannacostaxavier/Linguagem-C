#include <stdio.h>

int main(){
    int num,i,res=1;
    char resp = 's';
    
    
  
    while(resp == 's' || resp == 'S'){
        printf("Qual tabuada quer calcular? (1 a 10): ");
        scanf("%d",&num);
          i=1;
    do{
        
        res=num*i;
        printf("%d X %d = %d \n",i,num,res);
        i++;
    }while(i<=10);
        printf("Deseja continuar? (S para sim e N para não)");
        scanf(" %c",&resp);
        
    }
    return 0;
}

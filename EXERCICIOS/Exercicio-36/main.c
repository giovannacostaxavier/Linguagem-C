#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"Portuguese");
    const int MAX=10;
    int i;
    int v_valores[MAX];
    
    for(i=0;i<MAX;i++){
        printf("Insira o %dº valor: ",i+1);
        scanf("%d",&v_valores[i]);
    }
    
    for(i=0;i<MAX;i++){
        printf("%dº valor: %d \n",i+1,v_valores[i]);
    }


    return 0;
}
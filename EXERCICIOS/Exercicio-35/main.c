#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL,"Portuguese");
    const int MAX=6;
    int soma=0,i;
    int v_valores[6]={1, 0, 5, -2, -5, 7};
    
    
    soma = v_valores[0]+v_valores[1]+v_valores[5];
    printf("A soma dos valores é %d \n",soma);
    
    v_valores[3]=100;
    
    for(i=0;i<MAX;i++){
        printf("%dº valor: %d \n",i+1,v_valores[i]);
    }

    return 0;
}

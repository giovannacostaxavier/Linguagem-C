#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    const int MAX=5;
    int soma=0,i;
    int v_notas[5]={10,20,15,11,7};
    float media=0.0;
    
    for(i=0;i<MAX;i++){
        soma += v_notas[i];
    }
    printf("A soma é %d \n",soma);
    
    media= (float) soma/MAX;
    
    printf("A média é %.2f \n",media);
    
    for(i=0;i<MAX;i++){
        if(v_notas[i]>media){
            printf("O valor %d, é superior á média %.2f \n",v_notas[i],media);
        }
    }
    
    return 0;
}
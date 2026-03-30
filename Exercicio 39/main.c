#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    const int MAX = 10;
    int i;
    int v_notas[MAX];
    int maior=0,menor=0,pos_maior=0,pos_menor=0,soma=0,soma_pares=0;
    float media=0.0;

   
    for (i = 0; i < MAX; i++) {
        printf("Insira a %dº nota: ", i + 1);
        scanf("%d", &v_notas[i]);
        
    }
    
    for (i = 0; i < MAX; i++){
        soma += v_notas[i];
        if(v_notas[i]%2==0){
            soma_pares+=v_notas[i];
        }
        if(i==0){
            maior=v_notas[i];
            menor=v_notas[i];
            pos_menor=i;
            pos_maior=i;
        }else if(v_notas[i]>maior){
           maior=v_notas[i]; 
           pos_maior=i;
        }else if(v_notas[i]<menor){
            menor=v_notas[i];
            pos_menor=i;
        }
    }
        media=(float)soma/MAX;
        
    printf("A maior nota é: %d na posição %d \n", maior, pos_maior);
    printf("A menor nota é: %d na posição %d \n", menor, pos_menor);
    printf("A média é: %.2f \n",media);
    printf("A soma dos pares é: %d \n",soma_pares);
    

    return 0;
}
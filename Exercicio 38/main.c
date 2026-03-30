#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    const int MAX = 10;
    int i;
    int v_notas[MAX];
    int maior=0;

   
    for (i = 0; i < MAX; i++) {
        do{
        printf("Insira a %dº nota: ", i + 1);
        scanf("%d", &v_notas[i]);
        }while(v_notas[i]<0 || v_notas[i]>20);
    }
    
    for (i = 0; i < MAX; i++){
        if(v_notas[i]>maior){
           maior=v_notas[i]; 
        }
    }
    printf("A maior nota é: %d", maior);

    return 0;
}
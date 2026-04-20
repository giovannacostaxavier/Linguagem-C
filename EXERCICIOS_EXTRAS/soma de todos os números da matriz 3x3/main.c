#include <stdio.h>

int main(){
    int matriz [3][3]={{2,3,5},{5,7,9},{8,7,6}};
    int soma=0;
    
    for(int l=0;l<3;l++){
        for(int c=0; c<3;c++){
            soma+=matriz[l][c];
            
        }
        
    }
    printf("%d",soma);

    return 0;
}

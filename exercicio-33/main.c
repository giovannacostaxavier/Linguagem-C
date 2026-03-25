#include <stdio.h>

int main(){
    int num; 
    
    do{ 
        printf("Digite uma das opções abaixo: \n"); 
        printf("1.SIM \n"); printf("2.NÃO \n"); 
        printf("3.TALVEZ \n"); 
        scanf("%d",&num); 
        if(num == 1){ 
            printf("SIM");
        }else if(num == 2){
            printf("NÃO"); 
            
        }else if(num == 3){ 
            printf("TALVEZ"); 
            
        } 
        
    }while(num<1 || num >3);

    return 0;
}

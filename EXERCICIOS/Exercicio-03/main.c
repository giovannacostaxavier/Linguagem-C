
#include <stdio.h>

int main(){
    
    int num1,num2;
    float media;
    printf("Digite um número");
    scanf("%d",&num1);
    printf("Digite outro número");
    scanf("%d",&num2);
    media= (float)(num1+num2)/2;
    printf("Os número digitados foram %d e %d e a media é %.2f",num1,num2,media);
    

    return 0;
}


#include <stdio.h>

int main()
{
  int num1,num2;
  float media;
  printf("Digite um número");
  scanf("%d",&num1);
  printf("Digite outro número");
  scanf("%d",&num2);
  
  media=(num1+num2)/2;
  
  printf("A média entre %d e %d é igual a : %.2f",num1,num2,media);
  
    
    
    
    return 0;
}

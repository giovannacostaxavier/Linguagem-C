
#include <stdio.h>

int main() {

	int a,b,aux;

	printf("Digite um número: ");
	scanf("%d",&a);
    printf("Digite mais um número: ");
    scanf("%d",&b);
    if(a>=b){
        aux=a;
        a=b;
        b=aux;
    }
        while(a<=b){
            if(a%2==1){
              printf("%d \n",a);  
            }
          a++;
        }
    

	return 0;
}

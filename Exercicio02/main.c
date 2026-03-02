//DIGITANDO UM NÚMERO FLOAT E MOSTRANDO COM 2 CASAS DECIMAIS
#include <stdio.h>

int main(){
    float num;
    printf("Digite um número com casas decimais : ");
    scanf("%f",&num);
    printf("O número digitado é %.2f !",num);

    return 0;
}

#include <stdio.h>

int main(){
    int velocidade;

    printf("Digite a sua velocidade: \n");
    scanf("%d", &velocidade);

    if(velocidade > 80){
        printf("Multado");
    }else{
        printf("Tudo certo");
    }
    

    return 0;
}
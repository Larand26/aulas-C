#include <stdio.h>

int main(){
    int idade, total = 0, quantidade = 0;
    float media;

    do{
        printf("Digite a idade: \n");
        scanf("%d", &idade);
        total += idade;
        if(idade != 0){
            quantidade++;
        }
    } while (idade != 0);
    
    media = (float) total / quantidade;
    printf("A média etária é igual a: %.2f", media);
    
    return 0;
}